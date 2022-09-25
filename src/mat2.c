#include "mat2.h"
#include <math.h>

void mat2_identity(mat2 dst) {
    dst[0] = 1;
    dst[3] = 1;
}

void mat2_copy(mat2 dst, mat2 src) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}

void mat2_transpose(mat2 dst) {
    float a1 = dst[1];
    dst[1] = dst[2];
    dst[2] = a1;
}

void mat2_invert(mat2 dst) {
    float a0 = dst[0];
    float a1 = dst[1];
    float a2 = dst[2];
    float a3 = dst[3];

    float det = (a0 * a3) - (a2 * a1);

    if (!det) {
        return;
    }
    det = 1.0 / det;

    dst[0] =  a3 * det;
    dst[1] = -a1 * det;
    dst[2] = -a2 * det;
    dst[3] =  a0 * det;
}

void mat2_adjoint(mat2 dst) {
    float a0 = dst[0];
    dst[0] =  dst[3];
    dst[1] = -dst[1];
    dst[2] = -dst[2];
    dst[3] =  a0;
}

float mat2_determinant(mat2 dst) {
    return dst[0] * dst[3] - dst[2] * dst[1];
}

void mat2_multiply(mat2 dst, mat2 op) {
    float a0 = dst[0], a1 = dst[1], a2 = dst[2], a3 = dst[3];
    float b0 = op[0], b1 = op[1], b2 = op[2], b3 = op[3];
    dst[0] = a0 * b0 + a2 * b1;
    dst[1] = a1 * b0 + a3 * b1;
    dst[2] = a0 * b2 + a2 * b3;
    dst[3] = a1 * b2 + a3 * b3;
}

void mat2_rotate(mat2 dst, float rad) {
    float a0 = dst[0], a1 = dst[1], a2 = dst[2], a3 = dst[3];
    float s = sinf(rad);
    float c = cosf(rad);
    dst[0] = (a0 *  c) + (a2 * s);
    dst[1] = (a1 *  c) + (a3 * s);
    dst[2] = (a0 * -s) + (a2 * c);
    dst[3] = (a1 * -s) + (a3 * c);
}

void mat2_scale(mat2 dst, vec2 v) {
    float a0 = dst[0], a1 = dst[1], a2 = dst[2], a3 = dst[3];
    float v0 = v[0], v1 = v[1];
    dst[0] = a0 * v0;
    dst[1] = a1 * v0;
    dst[2] = a2 * v1;
    dst[3] = a3 * v1;
}

void mat2_fromRotation(mat2 dst, float rad) {
    float s = sinf(rad);
    float c = cosf(rad);
    dst[0] = c;
    dst[1] = s;
    dst[2] = -s;
    dst[3] = c;
}

void mat2_fromScaling(mat2 dst, vec2 v) {
    dst[0] = v[0];
    dst[1] = 0;
    dst[2] = 0;
    dst[3] = v[1];
}

void mat2_add(mat2 dst, mat2 b) {
    dst[0] = dst[0] + b[0];
    dst[1] = dst[1] + b[1];
    dst[2] = dst[2] + b[2];
    dst[3] = dst[3] + b[3];
}

void mat2_subtract(mat2 dst, mat2 b) {
    dst[0] = dst[0] - b[0];
    dst[1] = dst[1] - b[1];
    dst[2] = dst[2] - b[2];
    dst[3] = dst[3] - b[3];
}

uint8_t mat2_equals(mat2 a, mat2 b) {
  return a[0] == b[0] && a[1] == b[1] && a[2] == b[2] && a[3] == b[3];
}

void mat2_multiplyScalar(mat2 dst, float b) {
    dst[0] = dst[0] * b;
    dst[1] = dst[1] * b;
    dst[2] = dst[2] * b;
    dst[3] = dst[3] * b;
}

void mat2_multiplyScalarAndAdd(mat2 dst, mat2 b, float scale) {
    dst[0] = dst[0] + (b[0] * scale);
    dst[1] = dst[1] + (b[1] * scale);
    dst[2] = dst[2] + (b[2] * scale);
    dst[3] = dst[3] + (b[3] * scale);
}

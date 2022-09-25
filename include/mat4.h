#ifndef MAT4_H
#define MAT4_H

#include <stdint.h>
#include "typedefs.h"

/**
 * Print a mat4 matrix to stderr
 *
 * @param {mat4} the matrix to dump
 */
void mat4_dump(mat4 dst);

/**
 * Set a mat4 to the identity matrix
 *
 * @param {mat4} out the receiving matrix
 */
void mat4_identity(mat4 dst);

/**
 * Copy the values from one mat4 to another
 *
 * @param {mat4} out the receiving matrix
 * @param {mat4} a the source matrix
 */
void mat4_copy(mat4 dst, mat4 src);

/**
 * Set the components of a mat4 to the given values
 *
 * @param {mat4} out the receiving matrix
 * @param {Number} m00 Component in column 0, row 0 position (index 0)
 * @param {Number} m01 Component in column 0, row 1 position (index 1)
 * @param {Number} m02 Component in column 0, row 2 position (index 2)
 * @param {Number} m03 Component in column 0, row 3 position (index 3)
 * @param {Number} m10 Component in column 1, row 0 position (index 4)
 * @param {Number} m11 Component in column 1, row 1 position (index 5)
 * @param {Number} m12 Component in column 1, row 2 position (index 6)
 * @param {Number} m13 Component in column 1, row 3 position (index 7)
 * @param {Number} m20 Component in column 2, row 0 position (index 8)
 * @param {Number} m21 Component in column 2, row 1 position (index 9)
 * @param {Number} m22 Component in column 2, row 2 position (index 10)
 * @param {Number} m23 Component in column 2, row 3 position (index 11)
 * @param {Number} m30 Component in column 3, row 0 position (index 12)
 * @param {Number} m31 Component in column 3, row 1 position (index 13)
 * @param {Number} m32 Component in column 3, row 2 position (index 14)
 * @param {Number} m33 Component in column 3, row 3 position (index 15)
 */
void mat4_set(mat4 dst, float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33);

/**
 * Transpose the values of a mat4
 *
 * @param {mat4} out the receiving matrix
 */
void mat4_transpose(mat4 dst);

/**
 * Inverts a mat4
 *
 * @param {mat4} out the receiving matrix
 */
void mat4_invert(mat4 dst);

/**
 * Calculates the adjugate of a mat4
 *
 * @param {mat4} out the receiving matrix
 */
void mat4_adjoint(mat4 dst);

/**
 * Calculates the determinant of a mat4
 *
 * @param {mat4} a the source matrix
 * @returns {Number} determinant of a
 */
float mat4_determinant(mat4 dst);

/**
 * Multiplies two mat4s
 *
 * @param {mat4} out the receiving matrix
 * @param {mat4} b the first operand
 */
void mat4_multiply(mat4 dst, mat4 b);

/**
 * Translate a mat4 by the given vector
 *
 * @param {mat4} out the receiving matrix
 * @param {vec3} v vector to translate by
 */
void mat4_translate(mat4 dst, vec3 v);

/**
 * Translate a mat4 by the given flat 4 floats
 *
 * @param {mat4} out the receiving matrix
 * @param {x} X translation
 * @param {y} Y translation
 * @param {z} Z translation
 */
void mat4_translatef(mat4 dst, float x, float y, float z);

/**
 * Scales the mat4 by the dimensions in the given vec3 not using vectorization
 *
 * @param {mat4} out the receiving matrix
 * @param {vec3} v the vec3 to scale the matrix by
 **/
void mat4_scale(mat4 dst, vec3 v);

/**
 * Rotates a mat4 by the given angle around the given axis
 *
 * @param {mat4} out the receiving matrix
 * @param {Number} rad the angle to rotate the matrix by
 * @param {vec3} axis the axis to rotate around
 */
void mat4_rotate(mat4 dst, float rad, vec3 axis);

/**
 * Rotates a matrix by the given angle around the X axis
 *
 * @param {mat4} out the receiving matrix
 * @param {Number} rad the angle to rotate the matrix by
 */
void mat4_rotateX(mat4 dst, float rad);

/**
 * Rotates a matrix by the given angle around the Y axis
 *
 * @param {mat4} out the receiving matrix
 * @param {Number} rad the angle to rotate the matrix by
 */
void mat4_rotateY(mat4 dst, float rad);

/**
 * Rotates a matrix by the given angle around the Z axis
 *
 * @param {mat4} out the receiving matrix
 * @param {Number} rad the angle to rotate the matrix by
 */
void mat4_rotateZ(mat4 dst, float rad);

/**
 * Initializes a matrix from a vector translation
 * This is equivalent to (but much faster than):
 *
 *     mat4_identity(dest);
 *     mat4_translate(dest, vec);
 *
 * @param {mat4} out mat4 receiving operation result
 * @param {vec3} v Translation vector
 */
void mat4_fromTranslation(mat4 dst, vec3 v);

/**
 * Initializes a matrix from a vector scaling
 * This is equivalent to (but much faster than):
 *
 *     mat4_identity(dest);
 *     mat4_scale(dest, vec);
 *
 * @param {mat4} out mat4 receiving operation result
 * @param {vec3} v Scaling vector
 */
void mat4_fromScaling(mat4 dst, vec3 v);

/**
 * Initializes a matrix from a given angle around a given axis
 * This is equivalent to (but much faster than):
 *
 *     mat4_identity(dest);
 *     mat4_rotate(dest, rad, axis);
 *
 * @param {mat4} out mat4 receiving operation result
 * @param {Number} rad the angle to rotate the matrix by
 * @param {vec3} axis the axis to rotate around
 */
void mat4_fromRotation(mat4 dst, float rad, vec3 axis);

/**
 * Initializes a matrix from the given angle around the X axis
 * This is equivalent to (but much faster than):
 *
 *     mat4_identity(dest);
 *     mat4_rotateX(dest, rad);
 *
 * @param {mat4} out mat4 receiving operation result
 * @param {Number} rad the angle to rotate the matrix by
 */
void mat4_fromXRotation(mat4 dst, float rad);

/**
 * Initializes a matrix from the given angle around the Y axis
 * This is equivalent to (but much faster than):
 *
 *     mat4_identity(dest);
 *     mat4_rotateY(dest, rad);
 *
 * @param {mat4} out mat4 receiving operation result
 * @param {Number} rad the angle to rotate the matrix by
 */
void mat4_fromYRotation(mat4 dst, float rad);

/**
 * Initializes a matrix from the given angle around the Z axis
 * This is equivalent to (but much faster than):
 *
 *     mat4_identity(dest);
 *     mat4_rotateZ(dest, rad);
 *
 * @param {mat4} out mat4 receiving operation result
 * @param {Number} rad the angle to rotate the matrix by
 */
void mat4_fromZRotation(mat4 dst, float rad);

/**
 * Initializes a matrix from a quaternion rotation and vector translation
 * This is equivalent to (but much faster than):
 *
 *     mat4_identity(dest);
 *     mat4_translate(dest, vec);
 *     float quatMat = mat4.create();
 *     quat4_toMat4(quat, quatMat);
 *     mat4_multiply(dest, quatMat);
 *
 * @param {mat4} out mat4 receiving operation result
 * @param {quat4} q Rotation quaternion
 * @param {vec3} v Translation vector
 */
void mat4_fromRotationTranslation(mat4 dst, quat q, vec3 v);

/**
 * Returns the translation vector component of a transformation
 *  matrix. If a matrix is built with fromRotationTranslation,
 *  the returned vector will be the same as the translation vector
 *  originally supplied.
 * @param  {vec3} out Vector to receive translation component
 * @param  {mat4} mat Matrix to be decomposed (input)
 */
void mat4_getTranslation(vec3 dst, mat4 mat);

/**
 * Returns the scaling factor component of a transformation
 *  matrix. If a matrix is built with fromRotationTranslationScale
 *  with a normalized Quaternion paramter, the returned vector will be
 *  the same as the scaling vector
 *  originally supplied.
 * @param  {vec3} out Vector to receive scaling factor component
 * @param  {mat4} mat Matrix to be decomposed (input)
 */
void mat4_getScaling(vec3 dst, mat4 mat);

/**
 * Returns a quaternion representing the rotational component
 *  of a transformation matrix. If a matrix is built with
 *  fromRotationTranslation, the returned quaternion will be the
 *  same as the quaternion originally supplied.
 * @param {quat} out Quaternion to receive the rotation component
 * @param {mat4} mat Matrix to be decomposed (input)
 */
void mat4_getRotation(quat dst, mat4 mat);

/**
 * Initializes a matrix from a quaternion rotation, vector translation and vector scale
 * This is equivalent to (but much faster than):
 *
 *     mat4_identity(dest);
 *     mat4_translate(dest, vec);
 *     float quatMat = mat4_create();
 *     quat4_toMat4(quat, quatMat);
 *     mat4_multiply(dest, quatMat);
 *     mat4_scale(dest, scale)
 *
 * @param {mat4} out mat4 receiving operation result
 * @param {quat4} q Rotation quaternion
 * @param {vec3} v Translation vector
 * @param {vec3} s Scaling vector
 */
void mat4_fromRotationTranslationScale(mat4 dst, quat q, vec3 v, vec3 s);

/**
 * Initializes a matrix from a quaternion rotation, vector translation and vector scale, rotating and scaling around the given origin
 * This is equivalent to (but much faster than):
 *
 *     mat4_identity(dest);
 *     mat4_translate(dest, vec);
 *     mat4_translate(dest, origin);
 *     float quatMat = mat4_create();
 *     quat4_toMat4(quat, quatMat);
 *     mat4_multiply(dest, quatMat);
 *     mat4_scale(dest, scale)
 *     mat4_translate(dest, negativeOrigin);
 *
 * @param {mat4} out mat4 receiving operation result
 * @param {quat4} q Rotation quaternion
 * @param {vec3} v Translation vector
 * @param {vec3} s Scaling vector
 * @param {vec3} o The origin vector around which to scale and rotate
 */
void mat4_fromRotationTranslationScaleOrigin(mat4 dst, quat q, vec3 v, vec3 s, vec3 o);

/**
 * Calculates a 4x4 matrix from the given quaternion
 *
 * @param {mat4} out mat4 receiving operation result
 * @param {quat} q Quaternion to create matrix from
 *
 * @returns {mat4} out
 */
void mat4_fromQuat(mat4 dst, quat q);

/**
 * Generates a frustum matrix with the given bounds
 *
 * @param {mat4} out mat4 frustum matrix will be written into
 * @param {Number} left Left bound of the frustum
 * @param {Number} right Right bound of the frustum
 * @param {Number} bottom Bottom bound of the frustum
 * @param {Number} top Top bound of the frustum
 * @param {Number} near Near bound of the frustum
 * @param {Number} far Far bound of the frustum
 */
void mat4_frustum(mat4 dst, float left, float right, float bottom, float top, float near, float far);

/**
 * Generates a perspective projection matrix with the given bounds.
 * Passing null/undefined/no value for far will generate infinite projection matrix.
 *
 * @param {mat4} out mat4 frustum matrix will be written into
 * @param {number} fovy Vertical field of view in radians
 * @param {number} aspect Aspect ratio. typically viewport width/height
 * @param {number} near Near bound of the frustum
 * @param {number} far Far bound of the frustum, can be 0 or FLT_MAX
 */
void mat4_perspective(mat4 dst, float fovy, float aspect, float near, float far);

/**
 * Generates a orthogonal projection matrix with the given bounds
 *
 * @param {mat4} out mat4 frustum matrix will be written into
 * @param {number} left Left bound of the frustum
 * @param {number} right Right bound of the frustum
 * @param {number} bottom Bottom bound of the frustum
 * @param {number} top Top bound of the frustum
 * @param {number} near Near bound of the frustum
 * @param {number} far Far bound of the frustum
 */
void mat4_ortho(mat4 dst, float left, float right, float bottom, float top, float near, float far);

/**
 * Generates a look-at matrix with the given eye position, focal point, and up axis.
 * If you want a matrix that actually makes an object look at another object, you should use targetTo instead.
 *
 * @param {mat4} out mat4 frustum matrix will be written into
 * @param {vec3} eye Position of the viewer
 * @param {vec3} center Point the viewer is looking at
 * @param {vec3} up vec3 pointing up
 * @returns {mat4} out
 */
void mat4_lookAt(mat4 dst, vec3 eye, vec3 center, vec3 up);

/**
 * Generates a matrix that makes something look at something else.
 *
 * @param {mat4} out mat4 frustum matrix will be written into
 * @param {vec3} eye Position of the viewer
 * @param {vec3} center Point the viewer is looking at
 * @param {vec3} up vec3 pointing up
 * @returns {mat4} out
 */
void mat4_targetTo(mat4 dst, vec3 eye, vec3 target, vec3 up);

/**
 * Returns Frobenius norm of a mat4
 *
 * @param {mat4} a the matrix to calculate Frobenius norm of
 * @returns {Number} Frobenius norm
 */
float mat4_frob(mat4 a);

/**
 * Adds two mat4's
 *
 * @param {mat4} out the receiving matrix
 * @param {mat4} b the second operand
 */
void mat4_add(mat4 dst, mat4 b);

/**
 * Subtracts matrix b from matrix a
 *
 * @param {mat4} out the receiving matrix
 * @param {mat4} b the second operand
 */
void mat4_subtract(mat4 dst, mat4 b);

/**
 * Multiply each element of the matrix by a scalar.
 *
 * @param {mat4} out the receiving matrix
 * @param {Number} b amount to scale the matrix's elements by
 */
void mat4_multiplyScalar(mat4 dst, float b);

/**
 * Adds two mat4's after multiplying each element of the second operand by a scalar value.
 *
 * @param {mat4} out the receiving vector
 * @param {mat4} b the second operand
 * @param {Number} scale the amount to scale b's elements by before adding
 */
void mat4_multiplyScalarAndAdd(mat4 dst, mat4 b, float scale);

/**
 * Returns whether or not the matrices have exactly the same elements.
 *
 * @param {mat4} a The first matrix.
 * @param {mat4} b The second matrix.
 * @returns {uint8_t} True if the matrices are equal, false otherwise.
 */
uint8_t mat4_equals(mat4 a, mat4 b);

#endif

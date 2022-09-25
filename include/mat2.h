#ifndef MAT2_H
#define MAT2_H

#include <stdint.h>
#include "typedefs.h"

/**
 * Set a mat2 to the identity matrix
 *
 * @param {mat2} out the receiving matrix
 */
void mat2_identity(mat2 dst);

/**
 * Copy a mat2 to another mat2
 *
 * @param {mat2} out the receiving matrix
 * @param {mat2} out the source matrix
 */
void mat2_copy(mat2 dst, mat2 src);

/**
 * Transpose the values of a mat2
 *
 * @param {mat2} the matrix
 */
void mat2_transpose(mat2 dst);

/**
 * Inverts a mat2
 *
 * @param {mat2} the matrix
 */
void mat2_invert(mat2 dst);

/**
 * Calculates the adjugate of a mat2
 *
 * @param {mat2} the matrix
 */
void mat2_adjoint(mat2 dst);

/**
 * Calculates the determinant of a mat2
 *
 * @param {mat2} a the source matrix
 * @returns {float} determinant of a
 */
float mat2_determinant(mat2 dst);

/**
 * Multiplies two mat2's
 *
 * @param {mat2} out the receiving matrix
 * @param {mat2} the operand
 */
void mat2_multiply(mat2 dst, mat2 op);

/**
 * Rotates a mat2 by the given angle
 *
 * @param {mat2} out the receiving matrix
 * @param {Number} rad the angle to rotate the matrix by
 */
void mat2_rotate(mat2 dst, float rad);

/**
 * Scales the mat2 by the dimensions in the given vec2
 *
 * @param {mat2} out the receiving matrix
 * @param {vec2} v the vec2 to scale the matrix by
 **/
void mat2_scale(mat2 dst, vec2 v);

/**
 * Creates a matrix from a given angle
 * This is equivalent to (but much faster than):
 *
 *     mat2_identity(dst);
 *     mat2_rotate(dst, rad);
 *
 * @param {mat2} out mat2 receiving operation result
 * @param {Number} rad the angle to rotate the matrix by
 */
void mat2_fromRotation(mat2 dst, float rad);

/**
 * Creates a matrix from a vector scaling
 * This is equivalent to (but much faster than):
 *
 *     mat2_identity(dst);
 *     mat2_scale(dst, dst, vec);
 *
 * @param {mat2} out mat2 receiving operation result
 * @param {vec2} v Scaling vector
 */
void mat2_fromScaling(mat2 dst, vec2 v);

/**
 * Adds two mat2's
 *
 * @param {mat2} the receiving matrix
 * @param {mat2} the operand
 */
void mat2_add(mat2 dst, mat2 a);

/**
 * Subtracts matrix b from matrix a
 *
 * @param {mat2} the receiving matrix
 * @param {mat2} the operand
 */
void mat2_subtract(mat2 dst, mat2 b);

/**
 * Returns whether or not the matrices have exactly the same elements.
 *
 * @param {mat2} a The first matrix.
 * @param {mat2} b The second matrix.
 * @returns {uint8_t} 1 if the matrices are equal, 0 otherwise.
 */
uint8_t mat2_equals(mat2 a, mat2 b);

/**
 * Multiply each element of the matrix by a scalar.
 *
 * @param {mat2} out the receiving matrix
 * @param {Number} b amount to scale the matrix's elements by
 */
void mat2_multiplyScalar(mat2 dst, float b);

/**
 * Adds two mat2's after multiplying each element of the second operand by a scalar value.
 *
 * @param {mat2} out the receiving vector
 * @param {mat2} b the second operand
 * @param {Number} scale the amount to scale b's elements by before adding
 */
void mat2_multiplyScalarAndAdd(mat2 dst, mat2 b, float scale);

#endif

#ifndef MAT3_H
#define MAT3_H

#include <stdint.h>
#include "typedefs.h"

/**
 * Copies the upper-left 3x3 values into the given mat3.
 *
 * @param {mat3} out the receiving 3x3 matrix
 * @param {mat4} a   the source 4x4 matrix
 */
void mat3_fromMat4(mat3 dst, mat4 a);

/**
 * Copy the values from one mat3 to another
 *
 * @param {mat3} out the receiving matrix
 * @param {mat3} a the source matrix
 */
void mat3_copy(mat3 dst, mat3 a);

/**
 * Set the components of a mat3 to the given values
 *
 * @param {mat3} out the receiving matrix
 * @param {Number} m00 Component in column 0, row 0 position (index 0)
 * @param {Number} m01 Component in column 0, row 1 position (index 1)
 * @param {Number} m02 Component in column 0, row 2 position (index 2)
 * @param {Number} m10 Component in column 1, row 0 position (index 3)
 * @param {Number} m11 Component in column 1, row 1 position (index 4)
 * @param {Number} m12 Component in column 1, row 2 position (index 5)
 * @param {Number} m20 Component in column 2, row 0 position (index 6)
 * @param {Number} m21 Component in column 2, row 1 position (index 7)
 * @param {Number} m22 Component in column 2, row 2 position (index 8)
 */
void mat3_set(mat3 dst, float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22);

/**
 * Set a mat3 to the identity matrix
 *
 * @param {mat3} out the receiving matrix
 */
void mat3_identity(mat3 dst);

/**
 * Transpose the values of a mat3
 *
 * @param {mat3} out the receiving matrix
 */
void mat3_transpose(mat3 dst);

/**
 * Inverts a mat3
 *
 * @param {mat3} out the receiving matrix
 * @returns {mat3} out
 */
void mat3_invert(mat3 dst);

/**
 * Calculates the adjugate of a mat3
 *
 * @param {mat3} out the receiving matrix
 */
void mat3_adjoint(mat3 dst);

/**
 * Calculates the determinant of a mat3
 *
 * @param {mat3} a the source matrix
 * @returns {Number} determinant of a
 */
float mat3_determinant(mat3 dst);

/**
 * Multiplies two mat3's
 *
 * @param {mat3} out the receiving matrix
 * @param {mat3} b the second operand
 */
void mat3_multiply(mat3 dst, mat3 b);

/**
 * Translate a mat3 by the given vector
 *
 * @param {mat3} out the receiving matrix
 * @param {vec2} v vector to translate by
 */
void mat3_translate(mat3 dst, vec2 v);

/**
 * Rotates a mat3 by the given angle
 *
 * @param {mat3} out the receiving matrix
 * @param {Number} rad the angle to rotate the matrix by
 */
void mat3_rotate(mat3 dst, float rad);

/**
 * Scales the mat3 by the dimensions in the given vec2
 *
 * @param {mat3} out the receiving matrix
 * @param {vec2} v the vec2 to scale the matrix by
 **/
void mat3_scale(mat3 dst, vec2 v);

/**
 * Creates a matrix from a vector translation
 * This is equivalent to (but much faster than):
 *
 *     mat3_identity(dest);
 *     mat3_translate(dest, vec);
 *
 * @param {mat3} out mat3 receiving operation result
 * @param {vec2} v Translation vector
 */
void mat3_fromTranslation(mat3 dst, vec2 v);

/**
 * Creates a matrix from a given angle
 * This is equivalent to (but much faster than):
 *
 *     mat3_identity(dest);
 *     mat3_rotate(dest, dest, rad);
 *
 * @param {mat3} out mat3 receiving operation result
 * @param {Number} rad the angle to rotate the matrix by
 * @returns {mat3} out
 */
void mat3_fromRotation(mat3 dst, float rad);

/**
 * Creates a matrix from a vector scaling
 * This is equivalent to (but much faster than):
 *
 *     mat3_identity(dest);
 *     mat3_scale(dest, vec);
 *
 * @param {mat3} out mat3 receiving operation result
 * @param {vec2} v Scaling vector
 */
void mat3_fromScaling(mat3 dst, vec2 v);

/**
 * Copies the values from a mat2d into a mat3
 *
 * @param {mat3} out the receiving matrix
 * @param {mat2d} a the matrix to copy
 **/
void mat3_fromMat2d(mat3 dst, mat2 a);

/**
* Calculates a 3x3 matrix from the given quaternion
*
* @param {mat3} out mat3 receiving operation result
* @param {quat} q Quaternion to create matrix from
*/
void mat3_fromQuat(mat3 dst, quat q);

/**
* Calculates a 3x3 normal matrix (transpose inverse) from the 4x4 matrix
*
* @param {mat3} out mat3 receiving operation result
* @param {mat4} a Mat4 to derive the normal matrix from
*/
void mat3_normalFromMat4(mat3 dst, mat4 a);

/**
 * Generates a 2D projection matrix with the given bounds
 *
 * @param {mat3} out mat3 frustum matrix will be written into
 * @param {number} width Width of your gl context
 * @param {number} height Height of gl context
 */
void mat3_projection(mat3 dst, float width, float height);

/**
 * Returns Frobenius norm of a mat3
 *
 * @param {mat3} a the matrix to calculate Frobenius norm of
 * @returns {Number} Frobenius norm
 */
float mat3_frob(mat3 a);

/**
 * Adds two mat3's
 *
 * @param {mat3} out the receiving matrix
 * @param {mat3} b the second operand
 */
void mat3_add(mat3 dst, mat3 b);

/**
 * Subtracts matrix b from matrix a
 *
 * @param {mat3} out the receiving matrix
 * @param {mat3} b the second operand
 */
void mat3_subtract(mat3 dst, mat3 b);

/**
 * Multiply each element of the matrix by a scalar.
 *
 * @param {mat3} out the receiving matrix
 * @param {Number} b amount to scale the matrix's elements by
 */
void mat3_multiplyScalar(mat3 dst, float b);

/**
 * Adds two mat3's after multiplying each element of the second operand by a scalar value.
 *
 * @param {mat3} out the receiving vector
 * @param {mat3} b the second operand
 * @param {Number} scale the amount to scale b's elements by before adding
 */
void mat3_multiplyScalarAndAdd(mat3 dst, mat3 b, float scale);

/**
 * Returns whether or not the matrices have exactly the same elements.
 *
 * @param {mat3} a The first matrix.
 * @param {mat3} b The second matrix.
 * @returns {uint8_t} 1 if the matrices are equal, 0 otherwise.
 */
uint8_t mat3_equals(mat3 a, mat3 b);

#endif

#ifndef VEC3_H
#define VEC3_H

#include <stdint.h>
#include "typedefs.h"

/**
 * Calculates the length of a vec3
 *
 * @param {vec3} a vector to calculate length of
 * @returns {Number} length of a
 */
float vec3_length(vec3 a);

/**
 * Copy the values from one vec3 to another
 *
 * @param {vec3} out the receiving vector
 * @param {vec3} a the source vector
 */
void vec3_copy(vec3 dst, vec3 a);

/**
 * Set the components of a vec3 to the given values
 *
 * @param {vec3} out the receiving vector
 * @param {Number} x X component
 * @param {Number} y Y component
 * @param {Number} z Z component
 */
void vec3_set(vec3 dst, float x, float y, float z);

/**
 * Adds two vec3's
 *
 * @param {vec3} out the receiving vector
 * @param {vec3} b the second operand
 */
void vec3_add(vec3 dst, vec3 b);

/**
 * Subtracts vector b from vector a
 *
 * @param {vec3} out the receiving vector
 * @param {vec3} b the second operand
 */
void vec3_subtract(vec3 dst, vec3 b);

/**
 * Multiplies two vec3's
 *
 * @param {vec3} out the receiving vector
 * @param {vec3} b the second operand
 */
void vec3_multiply(vec3 dst, vec3 b);

/**
 * Divides two vec3's
 *
 * @param {vec3} out the receiving vector
 * @param {vec3} b the second operand
 */
void vec3_divide(vec3 dst, vec3 b);

/**
 * Math.ceil the components of a vec3
 *
 * @param {vec3} out the receiving vector
 */
void vec3_ceil(vec3 dst);

/**
 * Math.floor the components of a vec3
 *
 * @param {vec3} out the receiving vector
 */
void vec3_floor(vec3 dst);

/**
 * Returns the minimum of two vec3's
 *
 * @param {vec3} out the receiving vector
 * @param {vec3} b the second operand
 */
void vec3_min(vec3 dst, vec3 b);

/**
 * Returns the maximum of two vec3's
 *
 * @param {vec3} out the receiving vector
 * @param {vec3} b the second operand
 */
void vec3_max(vec3 dst, vec3 b);

/**
 * Math.round the components of a vec3
 *
 * @param {vec3} out the receiving vector
 */
void vec3_round(vec3 dst);

/**
 * Scales a vec3 by a scalar number
 *
 * @param {vec3} out the receiving vector
 * @param {Number} b amount to scale the vector by
 */
void vec3_scale(vec3 dst, float b);

/**
 * Adds two vec3's after scaling the second operand by a scalar value
 *
 * @param {vec3} out the receiving vector
 * @param {vec3} b the second operand
 * @param {Number} scale the amount to scale b by before adding
 */
void vec3_scaleAndAdd(vec3 dst, vec3 b, float scale);

/**
 * Calculates the euclidian distance between two vec3's
 *
 * @param {vec3} a the first operand
 * @param {vec3} b the second operand
 * @returns {Number} distance between a and b
 */
float vec3_distance(vec3 a, vec3 b);

/**
 * Calculates the squared euclidian distance between two vec3's
 *
 * @param {vec3} a the first operand
 * @param {vec3} b the second operand
 * @returns {Number} squared distance between a and b
 */
float vec3_squaredDistance(vec3 a, vec3 b);

/**
 * Calculates the squared length of a vec3
 *
 * @param {vec3} a vector to calculate squared length of
 * @returns {Number} squared length of a
 */
float vec3_squaredLength(vec3 a);

/**
 * Negates the components of a vec3
 *
 * @param {vec3} out the receiving vector
 */
void vec3_negate(vec3 dst);

/**
 * Returns the inverse of the components of a vec3
 *
 * @param {vec3} out the receiving vector
 */
void vec3_inverse(vec3 dst);

/**
 * Normalize a vec3
 *
 * @param {vec3} out the receiving vector
 */
void vec3_normalize(vec3 dst);

/**
 * Calculates the dot product of two vec3's
 *
 * @param {vec3} a the first operand
 * @param {vec3} b the second operand
 * @returns {Number} dot product of a and b
 */
float vec3_dot(vec3 a, vec3 b);

/**
 * Computes the cross product of two vec3's
 *
 * @param {vec3} out the receiving vector
 * @param {vec3} b the second operand
 */
void vec3_cross(vec3 dst, vec3 b);

/**
 * Performs a linear interpolation between two vec3's
 *
 * @param {vec3} out the receiving vector
 * @param {vec3} b the second operand
 * @param {Number} t interpolation amount, in the range [0-1], between the two inputs
 */
void vec3_lerp(vec3 dst, vec3 b, float t);

/**
 * Performs a hermite interpolation with two control points
 *
 * @param {vec3} out the receiving vector
 * @param {vec3} b the second operand
 * @param {vec3} c the third operand
 * @param {vec3} d the fourth operand
 * @param {Number} t interpolation amount, in the range [0-1], between the two inputs
 */
void vec3_hermite(vec3 dst, vec3 b, vec3 c, vec3 d, float t);

/**
 * Performs a bezier interpolation with two control points
 *
 * @param {vec3} out the receiving vector
 * @param {vec3} b the second operand
 * @param {vec3} c the third operand
 * @param {vec3} d the fourth operand
 * @param {Number} t interpolation amount, in the range [0-1], between the two inputs
 */
void vec3_bezier(vec3 dst, vec3 b, vec3 c, vec3 d, float t);

/**
 * Transforms the vec3 with a mat4.
 * 4th vector component is implicitly '1'
 *
 * @param {vec3} out the receiving vector
 * @param {mat4} m matrix to transform with
 */
void vec3_transformMat4(vec3 dst, mat4 m);

/**
 * Transforms the vec3 with a mat3.
 *
 * @param {vec3} out the receiving vector
 * @param {mat3} m the 3x3 matrix to transform with
 */
void vec3_transformMat3(vec3 dst, mat3 m);

/**
 * Transforms the vec3 with a quat
 * Can also be used for dual quaternions. (Multiply it with the real part)
 *
 * @param {vec3} out the receiving vector
 * @param {quat} q quaternion to transform with
 */
void vec3_transformQuat(vec3 dst, quat q);

/**
 * Rotate a 3D vector around the x-axis
 * @param {vec3} out The receiving vec3
 * @param {vec3} b The origin of the rotation
 * @param {Number} c The angle of rotation
 */
void vec3_rotateX(vec3 dst, vec3 b, float c);

/**
 * Rotate a 3D vector around the y-axis
 * @param {vec3} out The receiving vec3
 * @param {vec3} b The origin of the rotation
 * @param {Number} c The angle of rotation
 */
void vec3_rotateY(vec3 dst, vec3 b, float c);

/**
 * Rotate a 3D vector around the z-axis
 * @param {vec3} out The receiving vec3
 * @param {vec3} b The origin of the rotation
 * @param {Number} c The angle of rotation
 */
void vec3_rotateZ(vec3 dst, vec3 b, float c);

/**
 * Get the angle between two 3D vectors
 * @param {vec3} a The first operand
 * @param {vec3} b The second operand
 * @returns {Number} The angle in radians
 */
float vec3_angle(vec3 a, vec3 b);

/**
 * Returns whether or not the vectors have exactly the same elements
 *
 * @param {vec3} a The first vector.
 * @param {vec3} b The second vector.
 * @returns {Boolean} True if the vectors are equal, false otherwise.
 */
uint8_t vec3_equals(vec3 a, vec3 b);

#endif

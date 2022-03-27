#ifndef VEC4_H
#define VEC4_H

#include <stdint.h>
#include "typedefs.h"

/**
 * Copy the values from one vec4 to another
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a the source vector
 */
void vec4_copy(vec4 dst, vec4 a);

/**
 * Set the components of a vec4 to the given values
 *
 * @param {vec4} out the receiving vector
 * @param {Number} x X component
 * @param {Number} y Y component
 * @param {Number} z Z component
 * @param {Number} w W component
 */
void vec4_set(vec4 dst, float x, float y, float z, float w);

/**
 * Adds two vec4's
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a the first operand
 * @param {vec4} b the second operand
 */
void vec4_add(vec4 dst, vec4 b);

/**
 * Subtracts vector b from vector a
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a the first operand
 * @param {vec4} b the second operand
 */
void vec4_subtract(vec4 dst, vec4 b);

/**
 * Multiplies two vec4's
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a the first operand
 * @param {vec4} b the second operand
 */
void vec4_multiply(vec4 dst, vec4 b);

/**
 * Divides two vec4's
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a the first operand
 * @param {vec4} b the second operand
 */
void vec4_divide(vec4 dst, vec4 b);

/**
 * ceilf the components of a vec4
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a vector to ceil
 */
void vec4_ceil(vec4 dst);

/**
 * floorf the components of a vec4
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a vector to floor
 */
void vec4_floor(vec4 dst);

/**
 * Returns the minimum of two vec4's
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a the first operand
 * @param {vec4} b the second operand
 */
void vec4_min(vec4 dst, vec4 b);

/**
 * Returns the maximum of two vec4's
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a the first operand
 * @param {vec4} b the second operand
 */
void vec4_max(vec4 dst, vec4 b);

/**
 * roundf the components of a vec4
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a vector to round
 */
void vec4_round(vec4 dst);

/**
 * Scales a vec4 by a scalar number
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a the vector to scale
 * @param {Number} b amount to scale the vector by
 */
void vec4_scale(vec4 dst, float b);

/**
 * Adds two vec4's after scaling the second operand by a scalar value
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} b the second operand
 * @param {Number} scale the amount to scale b by before adding
 */
void vec4_scaleAndAdd(vec4 dst, vec4 b, float scale);

/**
 * Calculates the euclidian distance between two vec4's
 *
 * @param {vec4} a the first operand
 * @param {vec4} b the second operand
 * @returns {Number} distance between a and b
 */
float vec4_distance(vec4 a, vec4 b);

/**
 * Calculates the squared euclidian distance between two vec4's
 *
 * @param {vec4} a the first operand
 * @param {vec4} b the second operand
 * @returns {Number} squared distance between a and b
 */
float vec4_squaredDistance(vec4 a, vec4 b);

/**
 * Calculates the length of a vec4
 *
 * @param {vec4} a vector to calculate length of
 * @returns {Number} length of a
 */
float vec4_length(vec4 a);

/**
 * Calculates the squared length of a vec4
 *
 * @param {vec4} a vector to calculate squared length of
 * @returns {Number} squared length of a
 */
float vec4_squaredLength(vec4 a);

/**
 * Negates the components of a vec4
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a vector to negate
 */
void vec4_negate(vec4 dst);

/**
 * Returns the inverse of the components of a vec4
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a vector to invert
 */
void vec4_inverse(vec4 dst);

/**
 * Normalize a vec4
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} a vector to normalize
 */
void vec4_normalize(vec4 dst);

/**
 * Calculates the dot product of two vec4's
 *
 * @param {vec4} a the first operand
 * @param {vec4} b the second operand
 * @returns {Number} dot product of a and b
 */
float vec4_dot(vec4 a, vec4 b);

/**
 * Performs a linear interpolation between two vec4's
 *
 * @param {vec4} out the receiving vector
 * @param {vec4} b the second operand
 * @param {Number} t interpolation amount, in the range [0-1], between the two inputs
 */
void vec4_lerp(vec4 dst, vec4 b, float t);

/**
 * Transforms the vec4 with a mat4.
 *
 * @param {vec4} out the receiving vector
 * @param {mat4} m matrix to transform with
 */
void vec4_transformMat4(vec4 dst, mat4 m);

/**
 * Transforms the vec4 with a quat
 *
 * @param {vec4} out the receiving vector
 * @param {quat} q quaternion to transform with
 */
void vec4_transformQuat(vec4 dst, quat q);

/**
 * Returns whether or not the vectors have exactly the same elements
 *
 * @param {vec4} a The first vector.
 * @param {vec4} b The second vector.
 * @returns {Boolean} True if the vectors are equal, false otherwise.
 */
uint8_t vec4_equals(vec4 a, vec4 b);

#endif

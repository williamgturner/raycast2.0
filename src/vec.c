#include "vec.h"
#include <math.h>

// compute the sum of given vectors
vec vec_add(vec v1, vec v2) {
    vec v = {v1.x + v2.x, v1.y + v2.y};
    return v;
}

// subtract two vectors and return the resuling vector
vec vec_sub(vec v1, vec v2) {
    vec v = {v1.x - v2.x, v1.y - v2.y};
    return v;
}

// scale vector by given factor
void scale(vec *v, float scalar) {
    v->x *= scalar;
    v->y *= scalar;
}

// compute the dot product of two vectors
double dot(vec v1, vec v2) {
    return (v1.x * v2.x) + (v1.y * v2.y);
}

// compute the magnitude of given vector
double len(vec v) {
    return sqrt(dot(v, v));
}

// compute the distance between two vectors
double dist_between(vec v1, vec v2) {
    return len(vec_sub(v2, v1));
}
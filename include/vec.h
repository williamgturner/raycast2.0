#ifndef VEC_H
#define VEC_H
typedef struct {
    double x;
    double y;
} vec ;

vec vec_add(vec v1, vec v2);

vec vec_sub(vec v1, vec v2);

void scale(vec *v, float scalar);

double dot(vec v1, vec v2);

double len(vec v);

double dist_between(vec v1, vec v2);

#endif
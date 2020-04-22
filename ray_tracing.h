//
// Created by pawelgrabowski on 4/22/20.
//
#ifndef RAY_TRACING_RAY_TRACING_H
#define RAY_TRACING_RAY_TRACING_H
#include <cmath>
#include <cstdlib>
#include <limits>
#include <memory>

//Usings
using std::shared_ptr;
using std::make_shared;

//Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

//Utility functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180;
}

inline double ffmin(double a, double b) {return a <= b ? a : b;}
inline double ffmax(double a, double b) {return a >= b ? a : b;}

//Common Headers

#include "ray.h"
#include "vec3.h"
#endif //RAY_TRACING_RAY_TRACING_H

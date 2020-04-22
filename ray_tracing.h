//
// Created by pawelgrabowski on 4/22/20.
//
#ifndef RAY_TRACING_RAY_TRACING_H
#define RAY_TRACING_RAY_TRACING_H
#include <cmath>
#include <cstdlib>
#include <random>
#include <limits>
#include <memory>
#include <functional>

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

inline double random_double() {
    // Returns a random real in [0, 1) domain
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0.0, 1.0);
    static std::function<double()> rand_generator =
            std::bind(dis, gen);
    return rand_generator();
}

inline double random_double(double min, double max) {
    //random real from domain [1, b)
    return min + (max - min) * random_double();
}

inline double clamp(double x, double min, double max) {
    if( x < min ) return min;
    if( x > max ) return max;
    return x;
}

inline double ffmin(double a, double b) {return a <= b ? a : b;}
inline double ffmax(double a, double b) {return a >= b ? a : b;}

//Common Headers

#include "ray.h"
#include "vec3.h"
#endif //RAY_TRACING_RAY_TRACING_H

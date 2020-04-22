cmake_minimum_required(VERSION 3.16)
project(ray_tracing)

set(CMAKE_CXX_STANDARD 14)

add_executable(ray_tracing main.cpp vec3.h ray.h hittable.h sphere.h hittable_list.h ray_tracing.h camera.h)
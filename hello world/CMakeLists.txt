cmake_minimum_required(VERSION 3.1)
project(hello-world)
add_library(
    ${PROJECT_NAME} SHARED
           ./src/hello_world.c 
           )
           

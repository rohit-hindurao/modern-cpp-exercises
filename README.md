# Modern C++ Exercises

My solutions to [LearnCpp.com](https://www.learncpp.com/) lessons, written from scratch in **C++17** as part of my path to robotics software engineering (ROS 2, C++, Python).

No copy-paste: every program is typed, compiled with strict warnings, and explained in my own notes.

## Progress

| Chapter | Topic | Status |
| --- | --- | --- |
| 0 | Introduction, compiling, build setup | ✅ Done|
| 1 | C++ basics: statements, variables, initialization, I/O | ✅ Done |
| 2 | Functions and files | ⏳ In Progress |
| 4–10 | Types, operators, scope, control flow, conversions | ⏳ |
| 11–17 | Overloading, references, pointers, classes, vectors | ⏳ |
| 20–28 | Lambdas, smart pointers, move semantics, inheritance | ⏳ |

## Build and run

Requires `g++` (tested with g++ 13 on Ubuntu 24.04, WSL2).

    g++ -std=c++17 -Wall -Wextra -Wpedantic -Wshadow file.cpp -o main
    ./main

## Structure

    chXX_topic/
    ├── *.cpp      # exercises and lesson examples
    └── NOTES.md   # key ideas, written from memory after each chapter

## Why

C++ is the core language of robotics software (ROS 2, real-time control). This repo is my foundation for building ROS 2 nodes and robotics systems.
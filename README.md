# Modern C++ Exercises

C++ practice for robotics software engineering (ROS 2, autonomous robots), written from scratch.

## Setup

| Item | Details |
| --- | --- |
| Language | C++17 |
| Compiler | g++ 13 |
| OS | Ubuntu 24.04 (WSL2) |
| Build | `g++ -std=c++17 -Wall -Wextra -Wpedantic -Wshadow file.cpp -o main` |
| Run | `./main` |

## Learning path

| Stage | Resource | Status |
| --- | --- | --- |
| 1. Foundations | LearnCpp.com (ch. 0–2) | ✅ |
| 2. Main course | [ENPM702 – C++ for Robotics (UMD, Fall 2026)](https://enpm702-fall-2026-docs.readthedocs.io) | ⏳ |
| 3. Concept videos | The Cherno (C++ series) | ⏳ |
| 4. Practice | Exercism C++ track | ⏳ |
| 5. ROS 2 in C++ | ENPM702 ROS 2 lectures (Jazzy + Gazebo Harmonic) | ⏳ |

## Topics

| # | Folder | Topic | Status |
| --- | --- | --- | --- |
| 1 | `ch00-01_basics/` | Compiling, variables, I/O, initialization | ✅ |
| 2 | `ch02_functions/` | Functions, parameters, return values | ✅ |
| 3 | `03_control_flow/` | Conditions, loops | ⏳ |
| 4 | `04_references_pointers/` | References, pointers, const-correctness | ⏳ |
| 5 | `05_stl/` | vector, map, algorithms, iterators | ⏳ |
| 6 | `06_classes_oop/` | Classes, constructors, inheritance, polymorphism | ⏳ |
| 7 | `07_modern_cpp/` | Move semantics, smart pointers, RAII, lambdas | ⏳ |
| 8 | `08_templates/` | Template basics | ⏳ |
| 9 | `09_concurrency/` | std::thread, mutex, atomics | ⏳ |
| 10 | `10_ros2_cpp/` | rclcpp nodes, topics, services, actions, launch | ⏳ |

## Folder layout

| File | Purpose |
| --- | --- |
| `*.cpp` | Exercises, typed by me |
| `NOTES.md` | Key ideas, written from memory |
# Modern C++ Exercises

C++ practice for robotics software engineering (ROS 2, autonomous robots). Every line written from scratch by me.

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
| Foundations | LearnCpp.com (ch. 0–2) | ✅ |
| Main course | ENPM702 – C++ for Robotics (University of Maryland, Fall 2026) | ⏳ In Progress |
| Concept videos | The Cherno (C++ series) | ⏳ Actively using |
| Practice | Exercism C++ track | ⏳ |

## C++ topics (following ENPM702)

| # | Folder | Topic | Status |
| --- | --- | --- | --- |
| 0 | `ch00-01_basics/` | Compiling, variables, I/O, initialization (LearnCpp) | ✅ |
| 0 | `ch02_functions/` | Functions and files (LearnCpp) | ✅ |
| L2 | `L02_intro_cpp/` | Variables, types, constants, namespaces | ⏳In Progress |
| L3 | `L03_pointers_memory/` | Pointers, stack vs heap, references | ⏳ |
| L4 | `L04_stl_containers/` | Strings, arrays, vectors, iterators | ⏳ |
| L5 | `L05_functions_basics/` | Declarations, parameters, overloading, recursion | ⏳ |
| L6 | `L06_functions_advanced/` | Templates, lambdas, functors, std::function | ⏳ |
| L7 | `L07_smart_pointers_move/` | unique_ptr, shared_ptr, weak_ptr, move semantics | ⏳ |
| L8 | `L08_oop_basics/` | Classes, objects, encapsulation, constructors | ⏳ |
| L9 | `L09_oop_advanced/` | Inheritance, polymorphism, abstraction | ⏳ |
| + | `extra_concurrency/` | std::thread, mutex, atomics (my addition) | ⏳ |

## ROS 2 topics (ENPM702 L10–L15)

These are ROS 2 packages, so they live in a separate ROS 2 workspace repo, not here.

| # | Topic | Status |
| --- | --- | --- |
| L10 | Nodes, publishers, subscribers, custom interfaces | ⏳ |
| L11 | Parameters, launch files, executors | ⏳ |
| L12 | Services, actions | ⏳ |
| L13 | Coordinate frames and transforms (TF2) | ⏳ |
| L14 | Lifecycle nodes | ⏳ |
| L15 | Robot autonomy architecture (sense-plan-act) | ⏳ |

## Folder layout

| File | Purpose |
| --- | --- |
| `*.cpp` | Exercises, written by me |
| `NOTES.md` | Key ideas, written from memory |

Course credit: topics follow the ENPM702 syllabus by Zeid Kootbally (UMD). All code in this repo is my own.
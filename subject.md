# C++ Module 01

## 📘 Project Overview

**C++ Module 01** focuses on memory allocation, pointers to members, references, and switch statements. This module introduces key C++ concepts that differentiate it from C programming, emphasizing object-oriented programming principles and modern memory management techniques.

> **Disclaimer:**  
> This document is an unofficial summary written for educational and documentation purposes.  
> It is not affiliated with or endorsed by 42 or its partners.  
> All 42 students are responsible for adhering to the academic integrity policy.  
> You may **not** publish or share any part of the official subject PDF, evaluation scripts, or Moulinette content.

---

## Contents

- [Introduction](#introduction)
- [General Requirements](#general-requirements)
- [Exercise 00: BraiiiiiiinnnzzzZ](#exercise-00-braiiiiiiinnnzzzz)
- [Exercise 01: Moar brainz!](#exercise-01-moar-brainz)
- [Exercise 02: HI THIS IS BRAIN](#exercise-02-hi-this-is-brain)
- [Exercise 03: Unnecessary violence](#exercise-03-unnecessary-violence)
- [Exercise 04: Sed is for losers](#exercise-04-sed-is-for-losers)
- [Exercise 05: Harl 2.0](#exercise-05-harl-20)
- [Exercise 06: Harl filter](#exercise-06-harl-filter)
- [Submission Guidelines](#submission-guidelines)

---

## Introduction

C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes". The goal of these modules is to introduce you to Object-Oriented Programming, serving as the starting point of your C++ journey.

This module will comply with the **C++98 standard** to keep things simple and build upon your existing C knowledge.

---

## General Requirements

### Compiling
- Compile with `c++` and flags `-Wall -Wextra -Werror`
- Code must compile with `-std=c++98`

### Formatting and Naming Conventions
- Exercise directories: `ex00`, `ex01`, ..., `exn`
- Class names in **UpperCamelCase** format
- Files named according to class: `ClassName.hpp`, `ClassName.cpp`
- Output messages end with newline to standard output
- No coding style enforced (goodbye Norminette!)

### Allowed/Forbidden
- ✅ Almost everything from standard library
- ✅ C++-ish versions of C functions
- ❌ External libraries (C++11, Boost, etc.)
- ❌ `*printf()`, `*alloc()`, `free()`
- ❌ `using namespace` and `friend` keywords (unless stated)
- ❌ STL Containers and Algorithms (until Module 08-09)

### Design Requirements
- Avoid memory leaks when using `new`
- Classes in Orthodox Canonical Form (Module 02-09)
- No function implementations in headers (except templates)
- Headers must be independent with include guards

---

## Exercise 00: BraiiiiiiinnnzzzZ

**Turn-in directory:** `ex00/`  
**Files:** `Makefile`, `main.cpp`, `Zombie.{h,hpp}`, `Zombie.cpp`, `newZombie.cpp`, `randomChump.cpp`

### Objective
Implement a `Zombie` class with proper memory management.

### Requirements
- **Zombie class** with private `name` attribute (string)
- **Member function:** `void announce(void)` 
  - Output: `<name>: BraiiiiiiinnnzzzZ...`
- **Functions to implement:**
  - `Zombie* newZombie(std::string name)` - Creates zombie on heap
  - `void randomChump(std::string name)` - Creates zombie on stack

### Key Concepts
- Stack vs Heap allocation
- When to use each allocation method
- Proper destructor implementation for debugging

---

## Exercise 01: Moar brainz!

**Turn-in directory:** `ex01/`  
**Files:** `Makefile`, `main.cpp`, `Zombie.{h,hpp}`, `Zombie.cpp`, `zombieHorde.cpp`

### Objective
Create multiple zombies with a single allocation.

### Requirements
- **Function:** `Zombie* zombieHorde(int N, std::string name)`
- Allocate N Zombie objects in single allocation
- Initialize all zombies with the same name
- Return pointer to first zombie
- Test with `announce()` for each zombie
- Properly delete all zombies

### Key Concepts
- Array allocation with `new[]`
- Memory management for arrays
- Proper cleanup with `delete[]`

---

## Exercise 02: HI THIS IS BRAIN

**Turn-in directory:** `ex02/`  
**Files:** `Makefile`, `main.cpp`

### Objective
Understand the relationship between variables, pointers, and references.

### Requirements
Create a program with:
- String variable: `"HI THIS IS BRAIN"`
- `stringPTR`: pointer to the string
- `stringREF`: reference to the string

**Output:**
1. Memory addresses of variable, pointer, and reference
2. Values of variable, pointer, and reference

### Key Concepts
- References vs pointers
- Memory address manipulation
- Understanding reference syntax

---

## Exercise 03: Unnecessary violence

**Turn-in directory:** `ex03/`  
**Files:** `Makefile`, `main.cpp`, `Weapon.{h,hpp}`, `Weapon.cpp`, `HumanA.{h,hpp}`, `HumanA.cpp`, `HumanB.{h,hpp}`, `HumanB.cpp`

### Objective
Implement classes demonstrating when to use pointers vs references.

### Requirements

#### Weapon Class
- Private attribute: `type` (string)
- `getType()`: returns const reference to type
- `setType()`: sets type with parameter

#### HumanA and HumanB Classes
- Both have weapon and name
- `attack()` function outputs: `<name> attacks with their <weapon type>`
- **HumanA**: Takes weapon in constructor (always armed)
- **HumanB**: May not have weapon, uses `setWeapon()`

### Key Concepts
- When to use pointers vs references
- Constructor initialization
- Object composition

---

## Exercise 04: Sed is for losers

**Turn-in directory:** `ex04/`  
**Files:** `Makefile`, `main.cpp`, `*.cpp`, `*.{h,hpp}`  
**Forbidden:** `std::string::replace`

### Objective
Create a file processing program that replaces text.

### Requirements
- **Parameters:** filename, s1, s2
- Create `<filename>.replace` with s1 replaced by s2
- Use only C++ file operations (no C file functions)
- Handle errors and unexpected inputs
- Create own tests

### Key Concepts
- File I/O in C++
- String manipulation without replace()
- Error handling

---

## Exercise 05: Harl 2.0

**Turn-in directory:** `ex05/`  
**Files:** `Makefile`, `main.cpp`, `Harl.{h,hpp}`, `Harl.cpp`

### Objective
Implement a complaint system using pointers to member functions.

### Requirements

#### Harl Class
**Private functions:**
- `void debug(void)` - Debug messages
- `void info(void)` - Information messages  
- `void warning(void)` - Warning messages
- `void error(void)` - Error messages

**Public function:**
- `void complain(std::string level)` - Calls appropriate function

### Message Examples
- **DEBUG:** "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
- **INFO:** "I cannot believe adding extra bacon costs more money..."
- **WARNING:** "I think I deserve to have some extra bacon for free..."
- **ERROR:** "This is unacceptable! I want to speak to the manager now."

### Key Concepts
- Pointers to member functions
- Avoiding if/else chains
- Function pointer arrays

---

## Exercise 06: Harl filter

**Turn-in directory:** `ex06/`  
**Files:** `Makefile`, `main.cpp`, `Harl.{h,hpp}`, `Harl.cpp`

### Objective
Filter Harl's complaints by log level using switch statements.

### Requirements
- Program takes log level parameter
- Displays messages from that level and above
- Use **switch statement** (mandatory)
- Executable name: `harlFilter`

### Example Usage
```bash
./harlFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I've been coming for years whereas you started working here since last month.

[ ERROR ]
This is unacceptable, I want to speak to the manager now.
```

### Key Concepts
- Switch statements
- Command line arguments
- Log level filtering

---

## Submission Guidelines

- Submit to assigned Git repository
- Only repository contents will be evaluated
- Double-check folder and file names
- Ensure proper compilation with required flags
- Test thoroughly before submission

---

## Key Learning Outcomes

By completing this module, you will understand:
- **Memory Management:** Stack vs heap allocation, proper cleanup
- **References:** Alternative to pointers for certain use cases
- **Pointers to Members:** Advanced function pointer techniques
- **Switch Statements:** Efficient conditional branching
- **File I/O:** C++ stream-based file operations
- **Object Composition:** Building complex objects from simpler ones

---

## Tips for Success

- **Think before coding:** Understand when to use stack vs heap
- **Memory management:** Always match `new` with `delete`, `new[]` with `delete[]`
- **Test thoroughly:** Create comprehensive tests for edge cases
- **Use your brain:** Consider the design implications of pointers vs references
- **Read completely:** Each module builds on previous concepts

---

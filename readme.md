# CPP Module 01

This repository contains the exercises for CPP Module 01, focusing on C++ memory allocation, references, pointers, and function pointers.

## Overview

This module explores memory management in C++, including heap vs. stack allocation, pointers vs. references, and introduces the concepts of class member function pointers. All code follows the C++98 standard.

## Exercises

### Exercise 00: BraiiiiiiinnnzzzZ

A simple zombie management program that demonstrates heap vs. stack memory allocation.

#### Features:
- Create zombie objects on the heap with `newZombie()`
- Create zombie objects on the stack with `randomChump()`
- Zombies announce themselves and display a message when they are destroyed

#### Implementation Details:
- `Zombie` class with name attribute and announce() method
- Memory management demonstration through proper allocation and deletion

### Exercise 01: Moar brainz!

An extension of Exercise 00 that creates multiple zombies at once.

#### Features:
- Create a horde of zombies with a single function call
- All zombies have the same name
- Proper memory allocation and deallocation

#### Implementation Details:
- `zombieHorde()` function that allocates N zombies in a single allocation
- Each zombie is named and can announce itself
- Proper deletion of all zombies when they're no longer needed

### Exercise 02: HI THIS IS BRAIN

A simple demonstration of pointers and references in C++.

#### Features:
- Display memory addresses and values
- Compare variables, pointers, and references

#### Implementation Details:
- A string variable with "HI THIS IS BRAIN" value
- A pointer to the string
- A reference to the string
- Displays all memory addresses and values

### Exercise 03: Unnecessary violence

An implementation of a weapon system with two human classes demonstrating different ways to handle weapon association.

#### Features:
- `Weapon` class that can be changed during runtime
- Two human classes with different weapon handling:
  - `HumanA`: Always has a weapon (reference)
  - `HumanB`: May not have a weapon (pointer)

#### Implementation Details:
- Weapon class with type attribute and setter/getter
- HumanA initialized with a weapon reference in constructor
- HumanB can have its weapon set after construction

### Exercise 04: Sed is for losers

A file manipulation program that replaces all occurrences of a string with another string.

#### Features:
- Read from a file
- Create a new file with modified content
- Replace all occurrences of a specified string with another string

#### Implementation Details:
- Takes three parameters: filename, string to find, and string to replace
- Creates a new file with `.replace` extension
- Error handling for file operations

### Exercise 05: Harl 2.0

A program simulating a complaining logger named Harl with different complaint levels.

#### Features:
- Four different complaint levels: DEBUG, INFO, WARNING, ERROR
- Function pointers for selecting the appropriate complaint method
- Visual formatting for each complaint level

#### Implementation Details:
- Harl class with private methods for each complaint level
- `complain()` function that takes a level string and calls the appropriate method
- Uses function pointers to associate levels with methods

### Exercise 06: Harl filter

An extension of Exercise 05 that filters complaints based on severity level.

#### Features:
- Filter complaints based on the provided level
- Display all complaints from the selected level and above
- Uses a switch statement with fall-through

#### Implementation Details:
- Takes a command-line argument to set the minimum complaint level
- Uses a switch statement without break statements to display all complaints from the specified level and above
- Same complaint messages as in Exercise 05

## Compilation

Each exercise comes with a Makefile that supports the following commands:
- `make`: Compile the program
- `make clean`: Remove object files
- `make fclean`: Remove object files and executable
- `make re`: Recompile the entire program

## Requirements

- C++ compiler with C++98 standard support
- Linux/macOS environment
- All code must compile with the following flags:
```
c++ -Wall -Wextra -Werror -std=c++98
```

## Notes

These exercises demonstrate fundamental concepts of C++ memory management and pointer usage, which are essential for efficient C++ programming.
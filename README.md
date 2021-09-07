# **Time Storm**

Time Storm is an text adventure game where the user chooses an option based on a given scenario present. The user plays Agent Johnson character whose actions can influence the outcome of the team's state.

## Table of Contents

- [Project Prompt](#project-prompt)
- [Technologies](#technologies)
- [Setup](#setup)
- [Sources](#sources)

## Project Prompt

Create a C++ text adventure with the storyline of your choosing. The program should use your knowledge of C++ conditionals, logic, and loops.

Your program should have a storyline with:

- a beginning
- at least three possible endings
- It can help to map out your ideas on paper and draw out your possible branches before you begin coding anything.

## Technologies

- C++11

## Setup

Generally, you would want to compile and execute the program locally. To do that:

1. Download `timestorm.cpp`, `functions.hpp`, `functions.cpp` and store them in a single directory/folder.
2. Open the terminal or command line and navigate to the directory where the downloaded file resides.
3. Run the following commands to compile and execute the program:

### Command Line / Bash

```git
g++ timestorm.cpp functions.cpp -o timestorm
./timestorm.cpp functions
```

### Command Prompt

```git
g++ timestorm.cpp functions.cpp -o timestorm
timestorm.cpp functions.exe
```

## Sources

The techniques utilized was based on the lessons taught in [Codecademy's Learn C++ Course](https://www.codecademy.com/learn/learn-c-plus-plus
). The challenge is also provided by Codecademy.

The plot of the game is taken from season 7, episode 9 of Agents of S.H.I.E.L.D.

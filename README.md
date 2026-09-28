# C++ Practices

The C++ programs I wrote while learning programming fundamentals, OOP, Linked List, Trees, DSA and a lot. I did all of these before starting the core, so this is basically where my foundation comes from.

They're console programs, so there's no live demo. Clone any file, compile it, run it. Steps are at the bottom.

## What's Inside

* **Basics & logic**: calculator, even/odd checker, grading program, largest of three using the ternary operator, ASCII test, `setprecision()` for formatting decimals
* **Loops**: tables, sum of even/odd numbers, adding numbers in sequence, separating numbers. Some have multiple versions (Mod vs Truncation method, Simple vs Enhanced)
* **Guess Game**: the same game written three ways, with `while`, `do-while`, and `while` with a max-tries limit
* **Functions & recursion**: prime check through a function, factorial (iterative and recursive), call by value vs call by reference
* **Arrays & matrices**: max element, search, sum of squares, reverse an array, 3×3 matrix in reverse order, matrix table and flip programs
* **Pointers**: dereferencing, pointer swap, swapping arrays through pointers
* **Data structures**:
  * Singly, doubly and circular linked lists (the circular one solves the Josephus problem)
  * Stack (with templates), postfix expression logic, queue (a bank ticketing system)
  * Heap
  * Binary search tree (with and without duplicates) and AVL tree with rotations
* **University assignments**: coursework in `00_University Assignments`, kept separate from my own practice

## How to Run

```bash
git clone https://github.com/devenahmad/CPP-Practices.git
cd CPP-Practices

g++ "Program Name.cpp" -o program
./program        # program.exe on Windows
```

No compiler? Paste any file into [OneCompiler] (https://onecompiler.com/cpp) and hit Run.

## Why This Repo

I wanted to understand how things work under the hood (memory, pointers, how data is stored) before building anything. Some of these programs are rough, and I've left them as I wrote them, because the progress is the point.

Last, and most important: all of programming rests on its fundamentals, mainly OOP and DSA concepts. Everything built on top of them, like frameworks and tools, is just the cherry on top. 🙂

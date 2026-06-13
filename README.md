# single-linked-list-in-c

# C Single Linked List Implementation

## Overview

This repository contains a basic implementation of a **Singly Linked List** in C using dynamic memory allocation.

The program demonstrates how nodes are created, linked together, traversed, displayed, and finally released from memory.

A linked list stores data dynamically where each node contains:

- Data
- Address of the next node

This project is useful for:

- Beginners learning Data Structures
- College laboratory exercises
- Understanding pointers
- Learning dynamic memory allocation
- Embedded C practice
- Logic-building exercises

---

## Features

### 1. Create Nodes Dynamically

Creates nodes using `malloc()`.

Each node contains:

- Integer data
- Pointer to next node

#### Example

```text
head = malloc(sizeof(struct Node));
```

---

### 2. Link Multiple Nodes

Connects nodes using the `next` pointer.

Structure:

```text
Head → Middle → Tail → NULL
```

Example:

```text
10 → 15 → 20 → NULL
```

---

### 3. Traverse Linked List

Traverses the complete linked list using a loop.

#### Output Example

```text
10 -> 15 -> 20 -> NULL
```

---

### 4. Dynamic Memory Cleanup

Frees allocated memory using `free()`.

#### Example

```text
free(head);
free(newnode);
free(second);
```

This prevents memory leaks.

---

## Concepts Used

- Structures
- Self Referencing Structure
- Pointers
- Dynamic Memory Allocation
- malloc()
- free()
- Linked List Traversal
- Node Linking
- NULL Pointer
- Memory Management

---

## Technologies Used

- C Programming Language
- GCC Compiler
- VS Code
- CodeBlocks
- Turbo C

---

## Project Structure

```text
c-linked-list/
│
├── singl_linked_list.c
└── README.md
```

---

## How to Compile

Compile:

```bash
gcc singly_linked_list.c -o linkedlist
```

Run:

```bash
./linkedlist
```

Windows:

```bash
linkedlist.exe
```

---

## Program Flow

```text
Create Nodes
      ↓
Store Data
      ↓
Connect Nodes
      ↓
Traverse List
      ↓
Display Output
      ↓
Free Memory
```

---

## Node Visualization

```text
+------+-------+      +------+-------+      +------+------+
| 10   |   •---|----->| 15   |   •---|----->| 20   | NULL |
+------+-------+      +------+-------+      +------+------+
```

---

## Sample Output

```text
10 -> 15 -> 20 -> NULL
```

---

## Learning Outcomes

After completing this project, you will understand:

- What a linked list is
- Node creation using structures
- Dynamic memory allocation
- Pointer connections
- Traversing linked lists
- Memory cleanup techniques
- Difference between arrays and linked lists

---

## Future Improvements

Possible future additions:

- Insert at Beginning
- Insert at End
- Delete Node
- Search Node
- Count Nodes
- Reverse Linked List
- Circular Linked List
- Doubly Linked List

---

## Author

**Harsha G**

Learning:

- Data Structures
- C Programming
- Embedded Systems
- IoT Systems
- Problem Solving

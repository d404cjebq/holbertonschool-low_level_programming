# Hash Tables

## Description
Implementation of hash tables in C, including creation, insertion, lookup, and deletion operations.

## Data Structures
- `hash_node_t`: Node containing a key-value pair and a pointer to the next node (chaining)
- `hash_table_t`: Hash table containing the array size and array of node pointers

## Files
| File | Description |
|------|-------------|
| `hash_tables.h` | Header file with structs and function prototypes |
| `0-hash_table_create.c` | Creates a new hash table |

## Compilation
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o output
```

## Learning Objectives
- What is a hash function and what makes a good one
- How hash tables work and how to use them
- What is a collision and how to handle it (chaining)
- Advantages and drawbacks of hash tables
- Common use cases of hash tables

## Author
Dhay al-dhwayan

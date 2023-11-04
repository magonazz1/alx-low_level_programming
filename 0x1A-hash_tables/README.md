# Hash Tables Project

This project focuses on creating a hash table data structure in C, implementing various functions to manipulate and manage it. The project's purpose is to help you understand the concepts of hash tables, hash functions, and collision handling.

## Learning Objectives

By the end of this project, you should be able to:

### General
- Explain what a hash function is.
- Understand what makes a good hash function.
- Describe how hash tables work and how to use them.
- Explain what a collision is and the main ways of dealing with collisions in the context of a hash table.
- Understand the advantages and drawbacks of using hash tables.
- Identify the most common use cases of hash tables.

## Copyright and Plagiarism

- You are tasked to come up with solutions for the tasks yourself to meet the learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else's work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called `hash_tables.h`
- Don't forget to push your header file
- All your header files should be include guarded

## Data Structures

Please use the following data structures for this project:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
```

## Tests

It is strongly encouraged to work together on a set of tests.

- Python Dictionaries are implemented using hash tables. When you complete this project, you will better understand the power and simplicity of Python dictionaries. If you are curious about how it works under the hood, here is a [good blog post](#) about how dictionaries are implemented in Python 2.7 (not mandatory).

## Project Tasks

### Task 0: Create a Hash Table

- Write a function that creates a hash table.
- Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
- Returns a pointer to the newly created hash table.
- If something went wrong, your function should return NULL.

### Task 1: Implement the djb2 Hash Function

- Write a hash function implementing the djb2 algorithm.
- Prototype: `unsigned long int hash_djb2(const unsigned char *str);`

### Task 2: Get the Index of a Key

- Write a function that gives you the index of a key.
- Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`

### Task 3: Add an Element to the Hash Table

- Write a function that adds an element to the hash table.
- Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`

### Task 4: Retrieve a Value Associated with a Key

- Write a function that retrieves a value associated with a key.
- Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`

### Task 5: Print the Hash Table

- Write a function that prints a hash table.
- Prototype: `void hash_table_print(const hash_table_t *ht);`

### Task 6: Delete the Hash Table

- Write a function that deletes a hash table.
- Prototype: `void hash_table_delete(hash_table_t *ht);`

## Copyright

Copyright © 2023 ALX, All rights reserved.

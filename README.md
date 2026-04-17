# C-array-pointer

# Assignment 3: Printing 2D Array Elements Using Pointer Addressing in C

## Overview

This project demonstrates how to access and print elements of a two-dimensional array in the C programming language using two different methods:

1. Standard array indexing notation  
2. Pointer/address notation  

The purpose of the assignment is to show the relationship between arrays and pointers in C and to understand how multidimensional arrays are stored in memory.

---

## Objectives

- Rewrite the given program correctly
- Print all array elements using pointer arithmetic
- Print all array elements using normal indexing
- Compare outputs from both methods
- Demonstrate understanding of memory addressing in C

---

## Technologies Used

- C Programming Language
- GCC Compiler
- Visual Studio Code
- GitHub

---

## Source Code

```c
#include <stdio.h>

int main(void)
{
    int i, j;

    const int ROW = 3;
    const int COL = 4;

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("Print using *(*(arr+i)+j)\n");

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%4d", *(*(arr + i) + j));
        }
        printf("\n");
    }

    printf("\n");

    printf("Print using arr[i][j]\n");

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

# Matrix Operations and String Handling Application

## Overview

This C application provides a menu-driven interface for performing various matrix operations, string manipulations, and list management. The program is designed to handle multiple tasks, including arithmetic operations on matrices, matrix manipulations, and operations on strings and lists. 

## Features

1. **Matrix Operations**
   - Addition of two matrices
   - Subtraction of two matrices
   - Multiplication of a matrix by a scalar
   - Multiplication of two matrices
   - Inversion of a matrix

2. **Advanced Matrix Operations**
   - Transposition of a matrix
   - Sorting a matrix
   - Calculation of the row-wise maximum vector
   - Calculation of the column-wise maximum vector
   - Extraction of sub-matrices

3. **String and List Operations**
   - Input and display of text
   - Creation and display of a word matrix
   - Creation and management of a linked list structure
   - Adding and removing words from the linked list

## Usage

1. **Compile the Program**

   To compile the program, use the following command:
   ```bash
   gcc -o matrix_app main.c fonction.c fct.c fct3.c -lm

## File Structure

- **`main.c`**: Contains the main function and menu logic.
- **`fonction.c`**: Implements matrix arithmetic functions.
- **`fct.c`**: Implements additional matrix operations.
- **`fct3.c`**: Implements string and linked list functions.
- **`fonction.h`**: Header file declaring functions used in `fonction.c`.
- **`fct.h`**: Header file declaring functions used in `fct.c`.
- **`fct3.h`**: Header file declaring functions used in `fct3.c`.

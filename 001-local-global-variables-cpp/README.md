# Global and Local Variables Example

This repository contains a simple C++ program that demonstrates the use of global and local variables, as well as function calls within functions. The program calculates the sum and mean of two variables `a` and `b`.

## Table of Contents
- [Global and Local Variables Example](#global-and-local-variables-example)
  - [Introduction](#introduction)
  - [Local Variables](#local-variables)
  - [Global Variables](#global-variables)
  - [Program Description](#program-description)
  - [Output](#output)

## Introduction

In programming, variables can be classified into two main categories: global variables and local variables.

## Local Variables

Local variables are defined within a specific function and have limited scope. They are only accessible within the block of code where they are defined. In the provided code, the `sum` function contains a local variable `s` which stores the sum of the global variables `a` and `b`.

## Global Variables

Global variables are declared outside of any function and can be accessed throughout the entire program. In the provided code, `a` and `b` are global variables.

## Program Description

The program consists of three functions:

1. `sum()`: Calculates the sum of the global variables `a` and `b` and returns the result.

2. `mean()`: Calls the `sum()` function to calculate the sum and then calculates the mean of the sum by dividing it by 2.0.

3. `main()`: Calls both `sum()` and `mean()` functions to display the sum and mean of the variables.

## Output

When the program is executed, it will output the sum of `a` and `b`, followed by the mean of the sum.

### Sample Output:
``` bash 
The sum of the two variables is 22
The mean of the two variables is 11
```


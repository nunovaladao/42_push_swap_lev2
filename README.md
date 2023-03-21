# Push_Swap 3️⃣1️⃣2️⃣ -> 1️⃣2️⃣3️⃣

## Introduction
This project is about sorting data on a stack, with a limited set of instructions, and the goal to sort the stack with the smallest number of instructions. To succeed, we must find the best compromise between the number of instructions and the processing time. In this project, we will also have to handle errors and learn how to write optimized sorting algorithms.

## Installation
1. Clone the repository via `git clone https://github.com/<username>/push_swap.git`
2. Move into the repository directory: `cd push_swap`
3. Compile the program by running `make`
4. The two programs, `checker` and `push_swap`, will be compiled to the `./checker` and `./push_swap` files.

## Usage
### Push_swap
`push_swap` is a program that takes a list of integers as arguments, and outputs instructions to sort the list.

Example usage: 
```bash
./push_swap 3 2 1
```
Example output: 
```bash
ra
sa
```

### Checker
`checker` is a program that reads instructions from standard input and checks whether they successfully sort the list of integers passed as arguments.

Example usage:
```bash
./push_swap 3 2 1 | ./checker 3 2 1
```
Example output:
```bash
OK
```

## Rules
The list of integers to sort is called `Stack A`. There can be a second stack, `Stack B`, that initially is empty. The allowed operations to manipulate the stacks are:

- **sa**: swap a - swap the first two elements of stack A
- **sb**: swap b - swap the first two elements of stack B
- **ss**: sa and sb at the same time.
- **pa**: push a - take the first element of B and put it in the first position in A. If B is empty, do nothing.
- **pb**: push b - take the first element of A and put it in the first position in B. If A is empty, do nothing.
- **ra**: rotate a - shift up all elements of stack A by 1. The first element becomes the last.
- **rb**: rotate b - shift up all elements of stack B by 1. The first element becomes the last.
- **rr**: ra and rb at the same time.
- **rra**: reverse rotate a - shift down all elements of stack A by 1. The last element becomes the first.
- **rrb**: reverse rotate b - shift down all elements of stack B by 1. The last element becomes the first.
- **rrr**: rra and rrb at the same time.

## Algorithm
There are various sorting algorithms that can be applied to solve this problem, each with its own trade-offs in terms of time and instruction count. Two such algorithms that we can use are **quicksort** and **insertion sort**. 

**Quicksort**: In quick sort, we choose a pivot element and divide the array into two partitions such that all elements in the left partition are smaller than the pivot and all elements in the right partition are greater than the pivot. This process is then applied recursively on the left and right partitions until the whole array is sorted. The pivot element can be chosen randomly from the array or we can choose the middle element as the pivot.

**Insertion sort**: Insertion sort is a simple sorting algorithm where the sorted array is built one element at a time. We start with an initially empty sorted list and insert elements from the input list into this sorted list in the correct order.

We will implement both of these algorithms and compare their performance to determine which to use when sorting the stack. We will then optimize the chosen algorithm, by taking advantage of specific stack properties, such as using the two stacks to drive the algorithm, reducing the number of instructions used.

## Conclusion
In conclusion, Push_Swap is a challenging project that requires knowledge of data structures, algorithms, and optimization techniques. By applying different sorting algorithms and optimizing them, we can sort the stack with the smallest number of instructions.

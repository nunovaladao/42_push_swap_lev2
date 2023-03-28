
# Push_Swap 3️⃣1️⃣2️⃣ -> 1️⃣2️⃣3️⃣

## Introduction
This project is about **sorting data on a stack**, with a limited set of instructions, and the goal to sort the stack with the **smallest number of instructions**. To succeed, we must find the best compromise between the number of instructions and the processing time. In this project, we will also have to handle errors and learn how to write optimized sorting algorithms.

## GRADE PROJECT ✅
- 84/100 📋
- [**Subject**](https://github.com/nunovaladao/42_push_swap_lev2/blob/main/extras/en.subject.pdf) 

## Installation

1. Clone the repository via
```bash
git clone https://github.com/nunovaladao/42_push_swap_lev2.git
```

2. Move into the repository directory:
```bash
cd 42_push_swap_lev2
```

3. Compile the program by running 
```bash
make
```

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
There are various sorting algorithms that can be applied to solve this problem, each with its own trade-offs in terms of time and instruction count. Three such algorithms that we can use are: **radixsort**, **quicksort** and **insertion sort**. 

**Quicksort**: In quick sort, we choose a pivot element and divide the array into two partitions such that all elements in the left partition are smaller than the pivot and all elements in the right partition are greater than the pivot. This process is then applied recursively on the left and right partitions until the whole array is sorted. The pivot element can be chosen randomly from the array or we can choose the middle element as the pivot.

**Insertion sort**: Insertion sort is a simple sorting algorithm where the sorted array is built one element at a time. We start with an initially empty sorted list and insert elements from the input list into this sorted list in the correct order.

### ***I use radix_sort:*** 

**Radix sort**: is a sorting algorithm that sorts elements by grouping them according to their digits, from right to left or left to right. It starts by sorting the elements based on their least significant digit, then the second least significant digit, and so on until all digits have been considered. Radix sort is useful when the number of digits in the elements is small compared to the number of elements.
##
For this project I used the radix_sort algorithm as it was the one I found easiest to understand.
But to use radix in this project I had to make some changes to the original algorithm:
- As the algorithm does not sort negative numbers, I have to adapt the positions of the numbers and their respective order from largest to smallest, for example:

Example:
```bash
50 100 78 -1
```
Positions numbers:
```bash
 1  3  2  0
```

- Then I transform the positions of the numbers into binary and do bitwise operations to order them from the least significant bit to the most significant bit, as in the original algorithm.

Positions numbers (binary):
```bash
 001  011  010  000
```
- And instead of using the **9 boxes** as in the original algorithm, I use only **2 boxes**, in which `stack_a` will receive `1` and `stack_b` will receive `0`. Then the sort is done with the binary operations and the instructions that are given.

## Conclusion
In conclusion, Push_Swap is a challenging project that requires knowledge of data structures, algorithms, and optimization techniques. By applying different sorting algorithms and optimizing them, we can sort the stack with the smallest number of instructions.

## Useful links

- https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e
- https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a
- https://push_swap.simple.ink

## Note:

[**Coding Norm**](https://github.com/nunovaladao/42_push_swap_lev2/blob/main/extras/en_norm.pdf) - All students must follow the 42 code writing standards. This standard is applied to many projects in the course.
##
Nuno Valadão | nsoares-@student.42porto.com

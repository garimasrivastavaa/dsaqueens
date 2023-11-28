Q1. Expand
Valid Sudoku
Problem Statement
Sudoku board validation algorithm
You have been tasked with developing an algorithm to validate a 9 x 9 Sudoku board. Your algorithm needs to verify the validity of the filled cells on the board, adhering to the following conditions:

Every row should contain the numbers 1-9 exactly once, without repetition.
Every column should contain the numbers 1-9 exactly once, without repetition.
Each of the nine 3 x 3 sub-boxes within the grid should contain the numbers 1-9 exactly once, without repetition.

Can you outline an algorithm or a step-by-step approach to determine if the given Sudoku board configuration is valid based on these conditions?

Important Note: Ensure that you save your solution before progressing to the next question and before submitting your answer.

Exercise-1

Input :

9
5 3 . . 7 . . . .
6 . . 1 9 5 . . .
. 9 8 . . . . 6 .
8 . . . 6 . . . 3
4 . . 8 . 3 . . 1
7 . . . 2 . . . 6
. 6 . . . . 2 8 .
. . . 4 1 9 . . 5
. . . . 8 . . 7 9

Output :

YES

Exercise-2

Input:

9
5 3 . . 7 . . . .
5 . . 1 9 5 . . .
. 9 8 . . . . 6 .
8 . . . 6 . . . 3
4 . . 8 . 3 . . 1
7 . . . 2 . . . 6
. 6 . . . . 2 8 .
. . . 4 1 9 . . 5
. . . . 8 . . 7 9

Output:
NO

Q2. Queue using Two Stacks
Problem Statement
Queue
Write a program to implement a custom queue using two stacks. The queue should support the following three types of queries:
Enqueue: This query type is denoted by "1 x", where x is an element to be enqueued. It means that you need to insert element x at the end of the queue.
Dequeue: This query type is denoted by "2". It indicates that you should remove the element at the front of the queue.
Print Front: This query type is denoted by "3". It instructs you to print the element at the front of the queue without removing it.

Exercise-1
input:
1 42,2,1 14,3

output:
14

Exercise-2
input:
1 23,2,1 14,3,2,1 78,3

Output:
14
78
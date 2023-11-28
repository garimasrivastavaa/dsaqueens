Q1. Query Kth Smallest Trimmed Number
Problem Statement
Query Kth Smallest Trimmed Number:
Given a list of strings nums, where each string has equal length and consists of only digits, and a 2D array queries containing queries in the form of [ki, trimi], you are required to perform the following steps for each query:
Trim each number in nums to its right most trimi digits by removing the left most digits until only trimi digits remain.
Determine the index of the kth smallest trimmed number in the modified nums. If two trimmed numbers are equal, consider the number with the lower index to be smaller.
Reset each number in nums to its original length.
Store the answers to each query in an array answer, where answer[i] is the answer to the ith query.

Constraints:

The input strings in nums are of equal length and consist of digits only.
The queries in the 2D array queries are 0-indexed and represented as [ki, trimi].
Trimming to the rightmost x digits means keeping only the last x digits of each number, removing the leftmost digits until only x digits remain.
The input strings in nums may contain leading zeros.
Example:

given input is 113 933 231 719,
Take first query 1 1 (here first 1 is position , second is selecting a digit from right) So each digit we need to take one digit value form right - 113 is 3, 933 is 3 231 is 1 719 is 9 [ 3 3 1 9 ] so the first smallest value is 1 , then the index value of 1
is 2.
Second query 2 2 So each digit we need to take two digit value form right.So we get [ 13 33 31 19 ] first smallest value 19 , then the index value of 19 is 3.

Important Note: Ensure that you save your solution before progressing to the next question and before submitting your answer.

Exercise-1

Input : 
113 933 231 719
4
1 1 
2 2
4 2
1 3

Note:
Line 1: input values
Line 2 : Queries count
From line 3 : query pair[ position, decimal length from right]

Output :
2 3 1 0
Exercise-2

Input:
123 456 246 369
4
1 1 
2 2
4 2
1 3

Output:
0 2 3 0

Q2. Egyptian Fraction
Problem Statement
Egyptian Fraction
You are an ancient Egyptian mathematician, and you have been tasked with representing the fraction 6/14 as a sum of unique unit fractions. You know that a unit fraction is a fraction with a numerator of 1 and a denominator of a positive integer. You also know that the sum of any number of unit fractions is always a rational number.

Example:

The first step is to find the largest possible unit fraction that is less than or equal to 6/14. This fraction is 1/3. The remaining fraction is 6/14 - 1/3 = 4/42. The largest possible unit fraction that is less than or equal to 4/42 is 1/11. The remaining fraction is 4/42 - 1/11 = 1/231.

Therefore, the Egyptian fraction representation of 6/14 is 1/3 + 1/11 + 1/231.

Exercise-1

Input:
6
14

Output:
3
11
231

Exercise-2

Input:
3
4

Output:
2
4
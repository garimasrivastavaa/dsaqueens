Q1. Longest Substring
Problem Statement
Longest Substring
You are tasked with developing a function that finds the length of the longest substring without repeating characters in a given string s. Consider different scenarios involving various characters in the input string.

Scenario: String with No Repeating Characters
Input: "abcdef"
Expected Output: 6
Explanation: In this scenario, the input string contains no repeating characters, so the entire string itself is the longest substring without repeating characters.

Scenario: String with Repeating Characters
Input: "abccba"
Expected Output: 3
Explanation: In this case, the longest substring without repeating characters is "abc" with a length of 3. The characters 'c' and 'b' are repeated, so the substring ends at the first occurrence of the repeated character

Important Note:
Ensure that you save your solution before progressing to the next question and before submitting your answer.

Exercise-1
Input :
pqrsstu

Output :
4

Exercise-2

Input:
abbedfgi

Output:
6

Q2. Simple Text Editor
Problem Statement
Create a text editor using commands
You are developing a text editor that allows users to perform various operations on the text using the "CustomStack" class. The class supports the following operations:

insert(value): Inserts a string of characters at the current cursor position in the text.
delete(value): Deletes the last value characters from the text starting from the current cursor position.
get(value): Retrieves the character at index value from the text and displays it.
undo(): Reverts the last executed command on the text.
Each command is represented by a string in the following format:

1.Command 1: '1 value' - Inserts the string value at the current cursor position in the text.
2.Command 2: '2 value' - Deletes the last value characters from the text starting from the current cursor position.
3.Command 3: '3 value' - Retrieves the character at index value from the text and displays it.
4.Command 4: '4' - Reverts the last executed command on the text.

Consider a scenario where you have a text editor with a "CustomStack" class that implements the required operations. Assume the initial text is empty.

Important Note: Ensure that you save your solution before progressing to the next question and before submitting your answer.

Exercise-1
input:
1 abc,3 3,2 2,3 1

Here
1 abc -> command and input text
3 3 -> command and index of the stack
Output:
c
a

Exercise-2
Input:

1 zxy,3 3,2 2,1 def,3 2

Output:
y
d
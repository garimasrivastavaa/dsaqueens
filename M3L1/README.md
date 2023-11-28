Q1. Problem Statement
Maximize Subsequences in String
You are given two strings, **text** and **pattern**, both consisting of only lowercase English letters. The objective is to modify the text by adding either pattern[0] or pattern[1] exactly once at any position. After the modification, you need to determine the maximum number of times the pattern can occur as a subsequence in the modified text.
A subsequence is a sequence of characters obtained by deleting some or no characters from the original sequence without changing the order of the remaining characters.

Important Note:
Ensure that you save your solution before progressing to the next question and before submitting your answer.

Example with Explanation
Input text is “abdcdbc”. Input Pattern is “ac”.
When inserting 'a' as Pattern [0] between text [1] and text [2], the resulting string is "abadcdbc." After deleting “bd” in the newly created text, we will get “aacc”. In this modified string, the subsequence "ac" appears four times.

Some other combinations are,
aabdcdbc -> aacc -> Four times
abdacdbc -> aacc-> Four times
abdcadbc -> acac -> Three times
abdccdbc -> accc -> Three times
abdcdbcc -> accc -> Three times

Input and Output format:

Exercise-1


Input: 
 
ababc
ab

Output:
5


Exercise-2


Input: 
 
ababab
ab

Output:
9


Q2. Cookies
Problem Statement
Candies
You have a collection of candies, and each candy has a certain sweetness value. Your goal is to combine the candies to create new candies until you reach a specific target sweetness level. Find how many steps need to reach candies sweetness target.

To achieve this, you can select any two candies with the least sweetness and combine them into a new candy with sweetness calculated as follows:

sweetness = (least sweet candy + 2 * second least sweet candy)

For example, consider the following scenario:

You are given a target sweetness level of 12, and you have the following candies: [2, 8, 3, 7, 4, 6]. To reach the target sweetness of 12.

you can perform the following steps:
Ascending order = 2,3,4,6,7,8

Combine the two least sweet candies: 2 + 2*3 = 8. Updated candies: [ 8, 4, 6, 7, 8].
Combine the two least sweet candies: 4 + 2*6 = 16. Updated candies: [8, 16, 7, 8].
Combine the two least sweet candies: 7 + 2*8 = 23. Updated candies: [8,16,23].
Combine the two least sweet candies: 8 + 2*16 = 17. Updated candies: [40,23].
The sweetness of the first candy in the updated candies array is now 40, which exceeds the target sweetness of 12.

Exercise-1
Input:
7
1 2 3 4 5

Note:

Line 1 : Target of the sweetness
Line 2 Each candies sweetness

output:
3

Exercise-2
input:
11
2 5 3 7 6 1
output:
4
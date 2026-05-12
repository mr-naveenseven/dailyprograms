### Palindrome Pairs

Difficulty: Hard  
Accuracy: 31.71%  
Submissions: 22K+  
Points: 8

Given an array arr[] consisting of n strings, determine whether there exists a pair of indices (i, j) such that i ≠ j and the concatenation arr[i] + arr[j] forms a palindrome.

Return true if such a pair exists; otherwise, return false.

Note: A string is considered a palindrome if it reads the same forward and backward.

Examples:

```
Input: arr[] = ["geekf", "geeks", "or", "keeg", "abc", "bc"]
Output: true
Explanation: There is a pair "geekf" and "keeg". Their concatenation "geekfkeeg" is a palindrome.
```

```
Input: arr[] = ["abc", "xyxcba", "geekst", "or", "bc"]
Output: true
Explanation: There is a pair "abc" and "xyxcba". Their concatenation "abcxyxcba" is a palindrome.
```

```
Input: arr[] = ["aa"]
Output: false
Explanation: There is only one string present, so the output is false.
```

Constraints:

```
1 ≤ n ≤ 2*10^4
1 ≤ |arr[i]| ≤ 10
```

Company Tags
- Flipkart
- Amazon

Topic Tags
- Trie
- Advanced Data Structure

#### Source: GeeksforGeeks - Problem of the Day
**Link:** [https://www.geeksforgeeks.org/problems/palindrome-pairs/1](https://www.geeksforgeeks.org/problems/palindrome-pairs/1)
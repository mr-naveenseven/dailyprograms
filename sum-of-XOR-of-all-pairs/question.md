### Sum of XOR of All Pairs

Given an integer array arr[] of size n, compute the sum of the bitwise XOR for all distinct pairs of elements. That is, consider every pair of indices (i, j) such that 0 ≤ i < j < n, and calculate the total sum of (arr[i] XOR arr[j]) over all such pairs.

Examples:

```
Input : arr[] = [7, 3, 5]
Output : 12
Explanation:
7 ^ 3 = 4
7 ^ 5 = 2
3 ^ 5 = 6
Sum = 4 + 2 + 6 = 12
```

```
Input : arr[] = [5, 9, 7, 6]
Output : 47
Explanation:
5 ^ 9 = 12
5 ^ 7 = 2
5 ^ 6 = 3
9 ^ 7 = 14
9 ^ 6 = 15
7 ^ 6 = 1
Sum = 12 + 2 + 3 + 14 + 15 + 1 = 47
```

```
Input : arr[] = [10]
Output : 0
Explanation: No pairs exist, so sum is 0
```

Constraints:

```
1 ≤ n ≤ 10^5
1 ≤ arr[i] ≤ 10^5
```

Topic Tags
- Arrays
- Bit Magic
- Data Structures

#### Source: GeeksforGeeks - Problem of the Day
**Link:** [https://www.geeksforgeeks.org/problems/sum-of-xor-of-all-pairs0723/1](https://www.geeksforgeeks.org/problems/sum-of-xor-of-all-pairs0723/1)
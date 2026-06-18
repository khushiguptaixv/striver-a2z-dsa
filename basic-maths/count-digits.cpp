#include <bits/stdc++.h>
using namespace std;
/*
Problem: Count Digits in a Number
Brute Force Approach:
Repeatedly divide the number by 10 until it becomes 0.
Count how many times division took place.
TC: O(d)   SC: O(1)

Optimal Approach:
Use log10(n) + 1 to directly calculate the number of digits.
TC: O(1)   SC: O(1)
*/
int countDigits(int n) {
    return (int)(log10(n) + 1);
}
int main() {
    int n;
    cin >> n;
    cout << countDigits(n);
    return 0;
}
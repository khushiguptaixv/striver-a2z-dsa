#include <bits/stdc++.h>
using namespace std;
/*
Problem: Check if a number is prime or not.
Brute Force Approach:
Check divisibility of the number by all integers from 2 to n-1.
TC: O(n)   SC: O(1)

Optimal Approach:
Check divisibility of the number by all integers from 2 to sqrt(n).
TC: O(√n)   SC: O(1)
*/
class Solution {
public:
    bool isPrime(int n) {
        int c = 0;
        for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
                c++;
                if (n/i!=i){
                    c++;
                }
            }
        }
        if (c == 2) {
            return true;
        } else {
            return false;
        }
    }};
int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (sol.isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}
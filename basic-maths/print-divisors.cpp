#include <iostream>
using namespace std;
/*
Brute Force Approach:
Using loop from 1 to x and check if the number is a divisor of x. 
If it is, then print it.
TC: O(x) SC: O(1)
Optimal Approach:
Using loop from 1 to sqrt(x) and check if the number is 
a divisor of x. if it is, then print 
it and also print x/i if it is not equal to i.
TC: O(sqrt(x)) SC: O(1)
*/
class Solution {
public:
    int divisors(int x) {
        for (int i = 1; i * i <= x; i++) {
            if (x % i == 0) {
                cout << i << " ";
                if (i != x / i) {
                    cout << x / i << " ";
                }
            }
        }
        
    }
};
int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    Solution sol;
    cout << "Divisors of " << x << " are: ";
    sol.divisors(x);
    return 0;
}   
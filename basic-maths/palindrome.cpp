#include <iostream>
using namespace std;
class Solution {
public:
    int palindrome(int x) {
        int rev = 0, og = x;
        while(og > 0){
            rev = rev * 10 + og % 10;
            og /= 10;
        }
        if (rev == x) return 1;
        else return 0;
    }
};
int main() {
    Solution s;
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (s.palindrome(x)) {
        cout << x << " is a palindrome." << endl;
    } else {
        cout << x << " is not a palindrome." << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern(int N) {
        for (int i = 0; i < N; i++) {
            for (char ch = ('A' + N - 1) - i; ch <= ('A' + N - 1); ch++) {
                cout << ch << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    Solution s;
    int N = 5;
    s.pattern(N);
    return 0;
}

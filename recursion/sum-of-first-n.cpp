#include <bits/stdc++.h>
using namespace std;

class Sol {
public:
    int sum(int N) {
        if (N == 1) {
            return 1;
        }
        return N + sum(N - 1);
    }
};
int main() {
    Sol s;
    int N;
    cin >> N;
    cout << s.sum(N) << endl;
    return 0;
}

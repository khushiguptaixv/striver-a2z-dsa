#include <bits/stdc++.h>
using namespace std;

class Sol {
public:
    void print(int current, int n) {
        if (current > n)
            return;
        cout << current << " ";
        print(current + 1, n);
    }
};
int main() {
    Sol s;
    int n = 10;
    s.print(1, n);
    cout << "\n";
    return 0;
}

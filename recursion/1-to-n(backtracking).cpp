#include <bits/stdc++.h>
using namespace std;

class Sol {
public:
    void print(int c, int n) {
        if (c> n)
            return;
        print(c + 1, n);
        cout << c << " ";
    }
};
int main() {
    Sol s;
    int n = 10;
    s.print(1, n);
    cout << "\n";
    return 0;
}

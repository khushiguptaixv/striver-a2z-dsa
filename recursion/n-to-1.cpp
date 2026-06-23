#include <bits/stdc++.h>
using namespace std;

class Sol {
public:
    void print(int c) {
        if (c< 1)
            return;
        cout << c << " ";
        print(c - 1);
    }
};

int main() {
    Sol s;
    int n = 10;
    s.print(n);
    cout << "\n";
    return 0;
}

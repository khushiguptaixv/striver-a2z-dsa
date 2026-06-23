#include <bits/stdc++.h>
using namespace std;

class Sol {
public:
    void print(int current) {
        if (current < 1)
            return;
        print(current - 1);
        cout << current << " ";
    }
};

int main() {
    Sol s;
    int n = 10;
    s.print(n);
    cout << "\n";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
class Sol{
public:
    void print(string name, int count, int N) {
        if (count == N)
            return;
        cout << name << "\n";
        print(name, count + 1, N);
    }
};

int main() {
    Sol s;
    int N = 5;
    string name = "Ashish";
    s.print(name, 0, N);
    return 0;
}
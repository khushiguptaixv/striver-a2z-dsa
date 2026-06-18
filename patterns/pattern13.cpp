#include <bits/stdc++.h>
using namespace std;
void pattern(int N) {
    int c = 1;  
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << c << " ";  
            c = c + 1;  
        }
        cout << endl;
    }
}
int main() {
    int N = 5;  
    pattern(N);  
    return 0;
}

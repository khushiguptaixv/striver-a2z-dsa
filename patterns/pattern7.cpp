#include <iostream>
using namespace std;
void print2(int n) {
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n-i-1; j++) {
            cout << " ";
        }
        for (int j = 1; j < 2*i-1; j++) {
            cout << "*";
        }
        for (int j = 1; j < n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    print2(n);
    return 0;
}
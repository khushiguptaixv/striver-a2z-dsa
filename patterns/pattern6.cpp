#include <iostream>
using namespace std;

void print2(int n) {
    for(int i = n;i>0; i--) {
        for(int j = i; j>=1; j--) {
           cout << j;}
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
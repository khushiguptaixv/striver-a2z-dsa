#include <bits/stdc++.h>
using namespace std;
int fibonacci(int N) {
    if (N <= 1) {
        return N;
    }
    int last = fibonacci(N - 1);   
    int slast = fibonacci(N - 2);  

    return last + slast;
}

int main() {
    int N;
    cout << "Enter the number of terms: ";
    cin >> N;
    cout << "The " << N << "th Fibonacci number is: " << fibonacci(N) << endl;
    return 0;
}

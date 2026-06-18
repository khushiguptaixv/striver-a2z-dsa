#include <bits/stdc++.h>
using namespace std;
class solution
{public:
    int reverse (int n){
        int rev=0;
        while (n>0){
            int rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        return rev;
    }
};
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    solution sol;
    cout<<"reverse of the number is: "<<sol.reverse(n);
    return 0;
}
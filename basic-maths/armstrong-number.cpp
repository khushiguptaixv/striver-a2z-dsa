#include <bits/stdc++.h>
using namespace std;
class solution{
public:
int armstrong(int n){
    int sum=0;
    int temp=n;
    int k= to_string(n).length();
    while(temp>0){
        int digit=temp%10;
        sum+=pow(digit,k);
        temp/=10;
  
    }
    if(sum==n) return 1;
    else return 0;
} 
};
int main(){
    int n;
    cin>>n;
    solution obj;
    if(obj.armstrong(n)) cout<<"Yes";
    else cout<<"No";
}
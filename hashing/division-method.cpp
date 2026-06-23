#include<bits/stdc++.h>
using namespace std;    
int main() {
   int n;
   int arr[n];
   cin>>n;
   for (int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int hash[10]={0};
   for (int i=0;i<n;i++)
   {
       hash[arr[i]%10]++;
   }
   for (int i=0;i<10;i++)
   {
       cout<<i<<"-"<<hash[i]<<endl;
   }
    return 0;
}


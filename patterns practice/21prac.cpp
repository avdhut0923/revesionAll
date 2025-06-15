#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==1 || j==1 || i==n || j==n){
            cout<<"*";
        }
        else cout<< " ";
        
    }
    cout<<endl;
   }
}

int main(){
    int test ;
    cout<<"enter no. of test cases to check";
    cin>>test;
    for(int i=1;i<=test;i++){
        int n;
        cin>>n;
        pattern(n);
    }
}
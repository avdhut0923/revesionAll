#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
   for(int i=1;i<=2*n-1;i++){

    int stars = i;
    if(n<i)stars=2*n-i;

    for(int j=1;j<=stars;j++)
    cout<<"*";
    
    cout<<endl;
   }
}

int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        pattern(n);
    }
}
#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    // upper half
  for(int i=n;i>=1;i--){
    for(int j=i;j>=1;j--){
        cout<<"*";
    }
    //spaces
    for(int j=(n-i)*2;j>=1;j--){
        cout<<" ";
    }
     for(int j=i;j>=1;j--){
        cout<<"*";
    }   
   cout<<endl;

  }

//   lower half
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    //spaces
    for(int j=1;j<=2*(n-i);j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
 }
}

int main(){
    int numOfTests;
    cout<<"enter number of test cases you want to check"<<endl;
    cin>>numOfTests;
    for(int i=1;i<=numOfTests;i++){
        int n;
        cin>>n;
        pattern(n);
    }
    return 0 ;
}
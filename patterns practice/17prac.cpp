#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    
  for(int i=1;i<=n;i++){

    // spaces
    for(int j=1;j<=n-i;j++)
     cout<<" ";

    char ch = 'a'-1;
    for(int j=1;j<=2*i-1;j++) {
        if(j>i)ch--;
        else ch++;
        cout<<ch;

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
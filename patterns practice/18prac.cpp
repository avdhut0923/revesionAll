#include <bits/stdc++.h>
using namespace std;

//more generic code than other versions of this code

void pattern(int n){
    
  for(int i=0;i<n;i++){
     
   for(char j='A'+n-1-i;j<='A'+n-1;j++){
    cout<<j;
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
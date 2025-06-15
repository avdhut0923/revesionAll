#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
          
//   int spaces = 2*n - 2;

  for(int i=1;i<=2*n-1;i++){
 
    // stars
   int stars=i;
   if(n<i)stars=2*n-i;

   for(int j=1;j<=stars;j++)
   cout<<"*";

   //spaces
   int spaces =2*(n-i);
   if(i>n)spaces = (i-n)*2;
   for(int j=1;j<=spaces;j++){
    
    cout<<" ";
   }

   //stars
    
   for(int j=1;j<=stars;j++)
   cout<<"*";

   
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

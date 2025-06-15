#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    
   for (int i=n;i>=1;i--){
    // method 1
     for(char j = 'a';j<='a'+ i-1;j++)
     cout<<j<<" ";

    //  method 2
    //  char ch = 'a';
    // for(int j=1;j<=i;j++){
    //     cout<<(char)(ch+j-1)<<" ";        
    // }
    
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
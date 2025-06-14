#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    int boolnum=1;
   for (int i=1;i<=n;i++){

    if(i%2==0)boolnum=0;
    else boolnum = 1;
    
    for(int j=1;j<=i;j++){
        cout<<boolnum<<" " ;
        boolnum = 1-boolnum;
    }
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
#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i=n;i>=1;i--){
        int num=1;
        for(int j=1;j<=i;j++){
            cout<<num;
            num++;
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
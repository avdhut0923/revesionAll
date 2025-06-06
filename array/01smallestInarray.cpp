# include <bits/stdc++.h>
using namespace std;

void smallestEle(int arr[],int n){
    int small=arr[0];
    for(int i=1;i<n;i++){
        if(small>arr[i]){
            small=arr[i];
        }

    }
    cout<<"smallest element is "<<small;
}

int main(){
    int arr[] = {3,4,2,6,4,5};
    int n=sizeof(arr) / sizeof(arr[0]);
    // cout<<n;
    smallestEle(arr,n);
    return 0 ;
}
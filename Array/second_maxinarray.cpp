#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    
    int max1,max2 = INT_MIN;
    for(int i=0; i<n; i++){
        max1 = max(max1,arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]<max1 && arr[i]>max2){
            max2 = arr[i];
        }
    }
    cout<<max2;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n],arr1[n],arr2[n];

    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int evencount=0;
    int oddcount=0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            arr1[evencount]=arr[i];
            evencount++;
        }
        else{
            arr2[oddcount]=arr[i];
            oddcount++;
        }
    }

    for(int i=0;i<evencount;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<oddcount;i++){
        cout<<arr2[i]<<" ";
    }
}
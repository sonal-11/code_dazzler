#include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int start, int end){
    if(start>end){
        for(int i=0; i<end; i++){
            cout<<arr[i];
        }
        return;
    }

    PrintArray(arr, start+1, end);
}

int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;

    int arr[n];

    cout<<"enter the elements in the array";
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }

    PrintArray(arr, 0,n);

    return 0;
}

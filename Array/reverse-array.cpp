#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k=0;
    int j=n-1;
    while(k<j){
        int temp=arr[k];
        arr[k]=arr[j];
        arr[j]=temp;
        k++;
        j--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;

int SumOfArray(int start,int end, int arr[]){
    //base condition
    if(start>=end){
        return 0;
    }
    //logic
    return arr[start] + SumOfArray(start+1,end,arr);
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
    cout<<SumOfArray(0,n,arr);
}
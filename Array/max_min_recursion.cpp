#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int MaxElement(int arr[], int s, int e){

    if(s>=e){
        return -999999;
    }
    return max(arr[s] , MaxElement(arr,s+1,e));   
}

int MinElement(int arr[], int s, int e){

    if(s>=e){
        return 9999999;
    }
    return min(arr[s] , MinElement(arr,s+1,e));   
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Maximum element = ";
    cout<<MaxElement(arr, 0, n)<<"\n";
    cout<<"Minimum element = ";
    cout<<MinElement(arr, 0, n);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    //cout<<"enter the size of array :";
    cin>>n;

    int arr[n];

    //cout<<"enter the elements in the array";
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    int count = 0;

    for(int i=0; i<n; i++){
        if(arr[i]<0){
            //cout<<arr[i];
            count++;
        }
    }
    cout<<count;
    return 0;

}
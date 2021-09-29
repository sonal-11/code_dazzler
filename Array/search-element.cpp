#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n],arr1[n],arr2[n];

    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<i;
            break;
        }
    }

}
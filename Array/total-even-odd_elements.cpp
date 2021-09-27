#include<bits/stdc++.h>
using namespace std;

int Even(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            //return arr[i];
            count++;
        }
    }
    return count;
}

int Odd(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 != 0){
            //return arr[i];
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Total even elements: ";
    cout<<Even(arr,n)<<"\n";
    cout<<"Total odd elements: ";
    cout<<Odd(arr,n);

    return 0;
}
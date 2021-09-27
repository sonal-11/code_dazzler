#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,pos,num;
    cin>>size>>pos>>num;

    int arr[size];

    for(int i=0; i<size;i++){
        cin>>arr[i];
    }

    if(pos>size+1 || pos<=0){
        printf("invalid position");
    }
    else{
        for(int i=size; i>=pos; i--){
            arr[i] = arr[i-1];
        }
        arr[pos-1]=num;
        size++;

        for(int i=0; i<size ;i++){
        cout<<arr[i]<<" ";
        }
    }

    
}
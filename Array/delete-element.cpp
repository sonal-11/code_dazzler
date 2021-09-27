#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,pos,num;
    cin>>size>>pos>>num;

    int arr[size];

    for(int i=0; i<size;i++){
        cin>>arr[i];
    }
    if(pos<0||pos>size){
        printf("invalid position");
    }
    else{
        for(int i=pos-1; i<=size-1; i++){
            arr[i]=arr[i+1];
        }
        size--;
        for(int i=0; i<size;i++){
            cout<<arr[i]<<" ";
        }
    }

}
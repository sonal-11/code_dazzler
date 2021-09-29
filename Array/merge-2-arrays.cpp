#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int n=n1+n2;

    int arr1[n1],arr2[n2],arr[n];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    int a;
    int b;

    for(int j=0;j<n;j++){
        if(a>=n1&&b>=n2){
            break;
        }

        if(arr1[a]<arr2[b]){
            arr[j]=arr1[a];
            a++;
        }
        else{
            arr[j]=arr2[b];
            b++;
        }

    }
    int j=1;
    while(a<n1){
        arr[j]=arr1[a];
        j++;
        a++;
    }
    while(b<n2){
        arr[j]<arr2[b];
        j++;
        b++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }


}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n],freq[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[i]=-1;
    }

    for(int i=0; i<n; i++)
    {
        int count = 1;
        for(int j=i+1; j<n; j++)
        {
            /* If duplicate element is found */
            if(arr[i]==arr[j])
            {
                count++;

                /* Make sure not to count frequency of same element again */
                freq[j] = 0;
            }
        }

        /* If frequency of current element is not counted */
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    for(int i=0; i<n;i++){
        if(freq[i]==1){
            cout<<arr[i]<<" ";
        }
    }

    return 0;

}
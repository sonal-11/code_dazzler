#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin>>size;

    int arr[size],freq[size];

    for(int i=0; i<size;i++){
        cin>>arr[i];

        freq[i] = -1;
    }

    
    for(int i=0; i<size; i++)
    {
        int count = 1;
        for(int j=i+1; j<size; j++)
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
    for(int i=0; i<size;i++){
        if(freq[i] != 0)
        {
            cout<<arr[i]<<"="<<freq[i]<<"\n";
        }

    }



}
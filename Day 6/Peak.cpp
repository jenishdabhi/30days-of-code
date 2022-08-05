#include<iostream>
using namespace std;
int findPeak(int arr[],int n)
{
    if(n==1)
        return 0;
    if(arr[0]>=arr[1])
        return 0;
    if(arr[n-1]>=arr[n-2])
        return n-1;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
            return i;
    }
}   
int main()
{
     int arr[] = { 1, 3, 20, 4, 1, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"peak Element is at index "<<findPeak(arr,n);

    return 0;
}
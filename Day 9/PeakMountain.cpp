#include<iostream>
using namespace std;
int mountain(int arr[],int n,int x)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
while (s<=e)
{
    if(arr[mid]<arr[mid+1])
        s=mid+1;
    else
        e=mid;
}
    return s;
}
int main()
{
    int arr[]={1,2,3,4,5,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=3;
    cout<<"mountain array is "<<mountain(arr,n,x);

    return 0;
}
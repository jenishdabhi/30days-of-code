
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
   while (start<=end)
   {
        if(arr[mid]==key)
            return mid;
        if(arr[mid]<key)
            start=mid+1;
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
   }
   return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int key = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int index=binarySearch(arr,n,key);
    cout<<"key is at index "<<index;
    
    return 0;
}

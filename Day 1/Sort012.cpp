#include<iostream>
using namespace std;
void sort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while (mid<=high)
    {
        switch(arr[mid])
        {
            case 0: swap(arr[low++],arr[mid++]);
                    break;
            case 1: arr[mid++];
                    break;
            case 2: swap(arr[mid],arr[high--]);
                    break;
        }
    }
    
}
void print(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={0,0,0,1,2,1,0,2,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,n);
    print(arr,n);

 return 0;
}
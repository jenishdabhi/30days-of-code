#include<iostream>
using namespace std;
void rotate(int arr[],int n){

    int i=0;
    int j=n-1;
    while (i!=j)
    {
        swap(arr[i],arr[j]);
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
}
int main()
{

    int arr[]={2,4,6,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    rotate(arr,n);
    

 return 0;
}
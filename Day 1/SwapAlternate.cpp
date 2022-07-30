#include <iostream>
using namespace std;
void swap(int arr[],int n){

    for (int i = 0; i < n ; i+=2)
    {
        swap(arr[i], arr[i+1]);
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    swap(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
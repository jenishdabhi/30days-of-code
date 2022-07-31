#include<iostream>
using namespace std;
int findSingle(int arr[],int n){

    int unique=arr[0];
    for(int i=1;i<n;i++)
    {
        unique=unique^arr[i];
    }
    return unique;
}
int main(){

    int arr[] = { 2, 3, 5, 4, 5, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Element occurring once is "
         << findSingle(arr, n)<<endl;
         return 0;
}
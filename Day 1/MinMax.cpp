#include<iostream>
using namespace std;
int maximum(int arr[],int n){

    int maxi=arr[0];
    for(int i=0;i<n-1;i++){
        if(maxi<=arr[i]){
            maxi=arr[i];
        }
    }
    return maxi;
}
int minimum(int arr[],int n){

    int min=arr[0];
    for(int i=0;i<n-1;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int main()
{
   int arr[]={4,6,2,8,70,50,10};
   int n=sizeof(arr)/sizeof(arr[0]); 


   cout<<"maximum is "<<maximum(arr,n)<<endl;
   cout<<"minimum is "<<minimum(arr,n)<<endl;

 return 0;
}
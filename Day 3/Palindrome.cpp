#include<iostream>
using namespace std;
void palindrome(int arr[],int n){
    int start=0;
    int end=n-1;
    int flag;

   
    while(start!=end){
        if(arr[start]!=arr[end]){
            flag=1;
            break;
        }
    }
    
    if(flag==1)
        cout<<"Array is Palindrome";
    else
        cout<<"Array is not Palindrome";
        
}
int main()
{
      int arr[] = { 1, 2, 3, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
        palindrome(arr, n);

 return 0;
}
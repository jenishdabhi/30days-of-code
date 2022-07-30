#include<iostream>
using namespace std;
void findPair(int arr[],int n){
    int sum = 6;
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                cout<<arr[i]<<" and "<<arr[j]<<endl;
                count++;
            }
        }
    }
    cout<<"Count of pair is "<<count<<endl;
}
int main()
{
    int arr[] = { 1, 5, 7, -1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findPair(arr,n);
    
 return 0;
}
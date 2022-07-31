#include<iostream>
using namespace std;
int FindSum(int arr[],int n,int sum){

    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                    cout<<"Sum is "<<arr[i]<<','<<arr[j]<<','<<arr[k]<<endl;
                }
            }
        }
    }
    return 0;
}

int main(){

int arr[]={1,4,45,6,10,8};
int n=sizeof(arr)/sizeof(arr[0]);
int sum=22;

FindSum(arr,n,sum);

    return 0;
}
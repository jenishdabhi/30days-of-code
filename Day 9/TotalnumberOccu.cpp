#include<iostream>
using namespace std;
int countoccurance(int arr[],int n,int x)
{
    int total=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            total++;
        }
    }
    return total;
}
int main()
{
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 7 ,8 ,8 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=8;
    cout<<"Total Number Of Occurance is "<<countoccurance(arr,n,x);

    return 0;
}
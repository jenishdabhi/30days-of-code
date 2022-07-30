#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,6,8,7,6};
    int key=8;

    for(int i=0;i<6;i++)
    {
        if(arr[i]==key){
            cout<<"Key is "<<arr[i]<<endl;
        }
    }
 return 0;
}
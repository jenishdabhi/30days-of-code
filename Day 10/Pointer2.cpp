#include<iostream>
using namespace std;
void dummy(int *arr,int n)
{
    cout<<"Size of Array "<<sizeof(arr)<<endl;
}
int main()
{
    int arr[]={1,2,3,4,5};
    // dummy(arr,5);

    char ch[5]="abcd";
    // char *p=ch;
    // cout<<*p<<endl;

    char santence[]="my name is jenish";
    char *p=santence;

    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;


    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<*(arr+3)<<endl;
    // cout<<*(arr+4)<<endl;
    

    return 0;
}
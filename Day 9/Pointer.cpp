#include<iostream>
using namespace std;
void func(int *p)
{
    p=p+1;
}
int main()
{
    // int a=5;
    // int *p=&a;
    // cout<<sizeof(p)<<endl;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // // cout<<*a<<endl;   error
    // cout<<p<<endl;
    // cout<<&p<<endl;
    
    int a=5;
    int *p=&a;

    cout<<"before"<<p<<endl;
    cout<<"before"<<*p<<endl;
    func(p);
    cout<<"before"<<p<<endl;
    cout<<"before"<<*p<<endl;

    return 0;
}
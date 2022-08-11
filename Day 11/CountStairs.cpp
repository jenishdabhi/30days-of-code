#include<iostream>
using namespace std;
int Count(int n)
{
    if(n==1 || n==2 )
    {
        return n;
    }
    int rec1=Count(n-1);
    int rec2=Count(n-2);

    int result=rec1+rec2;
    
    return result;
}
int main()
{
    int n=4;

    cout<<"Number of ways is "<<Count(n)<<endl;
}
#include<iostream>
using namespace std;

bool helper(string str,int start,int end)
{
    if(start==end)
    {
        return true;
    }
    //check first and last character does not match
    if(str[start]!=str[end])
    {
        return false;
    }
    //check middle is palindrome or not
    if (start <= end)

    return helper(str,start+1,end-1);
    return true;
}
bool isPalindrome(string str)
{
     int n = str.size()-1;

    return helper(str,0,n);
}
int main()
{
    string str = "jenish";
 
    if (isPalindrome(str))
    cout << "Yes";
    else
    cout << "No";
 
    return 0;
}
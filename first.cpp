#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    // 10^6  globally maximum sized array that we can declare outside main function
    // 10^6  maximum sized array that we cna declare inside main function

    // array<int,5>arr;
    // arr.fill(10);

    // for(int i=0;i<5;i++){
    //     cout<<arr.at(i)<<"";
    // }
    array<int, 5> arr = {1, 2, 3, 4, 5};

    for (auto it : arr)
    {
        // cout << it << " ";
    }

    string s = "ababab";
    for (auto i : s)
    {
        // cout<<i<<" ";
    }
    // create Vector
    vector<int> vec(4, 0);   // {0,0,0,0}
    vector<int> vec2(4, 10); // {10,10,10,10}

    // copy vector
    vector<int> vec3(vec2);

     

    return 0;
}
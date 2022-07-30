#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    // pair<int, int> pr = {1, 2};

    // pair<pair<int, int>, int> pr = {{1, 2}, 1};
    

    pair<pair<int,int>,pair<int,int>>prr={{3,4},{5,6}};
    cout<<prr.first.second<<endl; // 4
    cout<<prr.second.second<<endl; //6

    return 0;
}
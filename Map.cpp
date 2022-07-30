#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mpp;
    mpp["raj"]=27;
    mpp["sandy"]=23;
    mpp["tank"]=71;
    mpp["baby"]=47;

    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }


 return 0;
}
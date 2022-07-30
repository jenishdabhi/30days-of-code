#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // set<int> st;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     st.insert(x);
    //     }
    // st.insert(5);
    // st.insert(4);
    // st.insert(3);

    // for (auto it : st)
    // {
    //     cout << it << " " << endl;
    // }
    // // other way
    // for (auto it = st.begin(); it != st.end(); it++)
    // {
    //     cout << *it << " "<< endl;
    // }

    
    unordered_set<int>st;
    
    st.insert(1);
    st.insert(9);
    st.insert(10);
    st.insert(90);


     for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " "<< endl;
    }

    //Multiset is used to store all the elements
    multiset<int>ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(1);
    ms.insert(5);

    for(auto itr=ms.begin();itr!=ms.end();itr++){
        cout<<*itr<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    
    set<int> count;

    while (i < m)
    {
        count.insert(arr1[i++]);
    }

    while (j < n)
    {
        count.insert(arr2[j++]);
    }
    cout << "Size of count " << count.size() << endl;
}

int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    printUnion(arr1, arr2, m, n);

    return 0;
}
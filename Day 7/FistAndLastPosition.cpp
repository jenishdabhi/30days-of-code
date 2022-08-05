#include <iostream>
using namespace std;
int first(int arr[], int n, int x)
{
    int start = 0, end = n - 1, ans = -1;

    while (start <= end)
    {
        int mid = start + end / 2;

        if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
        mid = start + end / 2;
    }
    return ans;
}
int last(int arr[], int x, int n)
{
    int start = 0, end = n - 1, res = -1;
    while (start <= end)
    {

        // Normal Binary Search Logic
        int mid = (start + end) / 2;

        if (arr[mid] > x)
            end = mid - 1;
        else if (arr[mid] < x)
            start = mid + 1;

        else
        {
            res = mid;
            start = mid + 1;
        }
    }
    return res;
}

int mian()
{

    int arr[] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
    int n = sizeof(arr) / sizeof(int);

    int x = 8;
    cout << "First Occurrence = " << first(arr, x, n);
    cout << "Last Occurrence = " << last(arr, x, n)<<endl;

    return 0;
}
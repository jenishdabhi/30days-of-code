#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, 5);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int moveNegative(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
    return 0;
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveNegative(arr, n);
    printarray(arr, n);
    return 0;
}
#include <iostream>
using namespace std;
void palindrome(int arr[], int n)
{
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1])
        {
            flag == 1;
            break;
        }
    }

    if (flag == 1)
        cout << "Array is not Palindrome";
    else
        cout << "Array is Palindrome\n";

}
int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    palindrome(arr, n);

    return 0;
}
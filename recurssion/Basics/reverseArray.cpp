#include <bits/stdc++.h>
using namespace std;

void swapArr(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void reverseArr(int arr[], int n, int left, int right)
{
    if (left >= right)
        return;
    swapArr(arr[left], arr[right]);
    reverseArr(arr, n, left + 1, right - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int left = 0;
    int right = n - 1;

    reverseArr(arr, n, left, right);

    // for(auto x: arr)
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
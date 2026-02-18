#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {6, 6, 6, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool sorted = false;
    if (n == 1)
    {
        sorted = true;
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            sorted = true;
            continue;
        }
        sorted = false;
        break;
    }

    if (sorted)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }
    return 0;
}

/*
   SIMPLER VERSION
    take sorted as true intially

    bool sorted = true;

for (int i = 1; i < n; i++)
{
    if (arr[i] < arr[i-1])
    {
        sorted = false;
        break;
    }
}

*/
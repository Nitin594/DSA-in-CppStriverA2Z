#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 43, 6, 3, 768, 35, 62};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout<<n;  7*4 = 28
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest: " << largest;

    return 0;
}

// TC: O(n)
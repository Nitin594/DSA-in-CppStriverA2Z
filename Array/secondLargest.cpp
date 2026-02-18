#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 14, 1, 5, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int sLargest = INT_MIN;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (n == 1)
        {
            cout << "There is no second Largest.";
            break;
        };
        if (arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
            found = true;
        }
        else if (arr[i] > sLargest)
        {
            sLargest = arr[i];
            found = true;
        }
    }
    if (found)
    {
        cout << "sLargest: " << sLargest;
    }
    else
    {
        cout << "No second Largest";
    }
    return 0;
}

// TC: O(n)


/*

OPTIMAL CODE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 14, 1, 5, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2) {
        cout << "No second largest";
        return 0;
    }

    int largest = arr[0];
    int sLargest = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > sLargest)
        {
            sLargest = arr[i];
        }
    }

    if (sLargest == INT_MIN)
        cout << "No second largest";
    else
        cout << "Second Largest: " << sLargest;

    return 0;
}
*/
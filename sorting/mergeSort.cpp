#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            if()
            arr.push_back()
        }
        arr.push_back()
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low == high)
        return;
    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    vector<int> arr = {3, 5, 2, 7, 9, 45, 1, 8};
    int n = 8;
    int low = 0;
    int high = n - 1;

    mergeSort(arr, low, high);

    return 0;
}
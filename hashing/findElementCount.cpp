#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = 6;

    int hashArray[16] = {0};
    for (int i = 0; i < n; i++)
    {
        hashArray[arr[i]] += 1;
    }

    // for (int x : hashArray)
    // {
    //     cout << x << " ";
        
    // }

    for (int i = 0; i < 16; i++)
    {
    if(hashArray[i] != 0)
    {
        cout<< i <<" -> "<<hashArray[i]<<"\n";
    }
    }


    return 0;
}
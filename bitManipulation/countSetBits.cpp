#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 13;

    int count = 0;
    while (n > 1)
    {
        if (n % 2 == 1)
        {
            count += 1;
            n = n / 2;
        }
        else
        {
            n = n / 2;
        }
        if (n == 1)
            count += 1;
    }
    cout << count;

    return 0;
}
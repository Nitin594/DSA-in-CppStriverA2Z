#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 13;
    int i = 0;

    // move to the i th bit and flip if its 1 to  0 this can be done by and with 1 left shift i time and the negation
    n = n & (~(1 << i));
    cout << n;

    return 0;
}
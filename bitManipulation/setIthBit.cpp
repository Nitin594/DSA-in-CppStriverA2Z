#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 13;
    int i = 1;

    // this shifts 1 to target bit and with the help of OR operation it flips 0 bit 
    n = n | (1 << i);

    cout<<n;

    return 0;
}
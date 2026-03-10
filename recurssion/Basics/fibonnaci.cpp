#include <bits/stdc++.h>
using namespace std;

int evaluateFibonnaci(int n)
{
    if (n == 0 || n==1)
    return n;
    return evaluateFibonnaci(n - 1) + evaluateFibonnaci(n - 2);
}

int main()
{
    int n = 5;
    

    // cout<<evaluateFibonnaci(n);

    for(int i = 0; i < n; i++) {
        cout << evaluateFibonnaci(i) << " ";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    // swapping without third variable;
    // using bitwise XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int a = 8;
    int b = 4;
    cout << "Before swap: (a,b) = " << "(" << a << "," << b << ")" << endl;
    swap(a, b);
    cout << "After swap: (a,b) = " << "(" << a << "," << b << ")";

    return 0;
}

// more methods like addition - subtraction / multiplication - division can also be used

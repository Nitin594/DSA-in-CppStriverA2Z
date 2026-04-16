#include <bits/stdc++.h>
using namespace std;

int getDecimalValue(string s, int n)
{
    int decimal = 0;
    int power = 1;
    for (int i = n; i >= 0; i--)
    {
        decimal += (s[i]-'0') * power;
        power = power * 2;
    }
    return decimal;
}

int main()
{
    string s = "1011";
    int n = s.size() - 1;

    int value = getDecimalValue(s, n);
    cout << "Decimal Value: " << value;
    return 0;
}
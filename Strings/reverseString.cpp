#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";
    char temp;
    for (int i = 0; i < (s.length()) / 2; i++)
    {
        temp = s[i];
        s[i] = s[s.length() - i - 1];
        s[s.length() - i - 1] = temp;
    }
    cout << s;

    return 0;
}
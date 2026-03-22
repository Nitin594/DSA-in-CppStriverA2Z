#include <bits/stdc++.h>
using namespace std;

void reverseString(string &s)
{
    stack<char> temp;
    for (int i = 0; i < s.length(); i++)
    {
        temp.push(s[i]);
    }

    for (int i = 0; i < s.length(); i++)
    {
        s[i] = temp.top();
        temp.pop();
    }
}

int main()
{
    string s = "hello";
    reverseString(s);

    cout << s;

    return 0;
}
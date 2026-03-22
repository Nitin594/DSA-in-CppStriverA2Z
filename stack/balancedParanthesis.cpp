#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkBalance(string s)
    {
        stack<char> temp;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '[' || s[i] == '(' || s[i] == '{')
            {
                temp.push(s[i]);
            }
            else if (s[i] == ']' || s[i] == ')' || s[i] == '}')
            {
                temp.pop();
            }
        }
        if (temp.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Solution sol;
    string s = "[(c+d)(a+b)]";
    bool balance = sol.checkBalance(s);

    if (balance)
    {
        cout << " Given string " << s << " is balanced.";
    }
    else
    {
        cout << " Given string " << s << " is not balanced.";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// brute
/*
bool checkRotation(string &s, string &goal)
{
    int n = s.length();
    if (s.length() != goal.length())
    {
        return false;
    }
    for (int i = 0; i < n; i++)
    {
        char temp = s[n - 1];
        // cout << temp << endl;
        for (int j = n - 1; j > 0; j--)
        {
            s[j] = s[j - 1];
        }
        s[0] = temp;
        if (s == goal)
        {
            return true;
            break;
        }
    }
}
*/

// Optimal
bool checkRotation(string &s, string &goal)
{
    if (s.length() != goal.length())
        return false;

    string doubledS = s + s;
    return doubledS.find(goal) != string::npos;
}

int main()
{
    string s = "rotation";
    string goal = "ionrotta";
    // return true if matched else false

    bool result = checkRotation(s, goal);
    if (result)
    {
        cout << "Given string and goal string are rotation of each other";
    }
    else
    {
        cout << "Mismatched :( ";
    }

    return 0;
}
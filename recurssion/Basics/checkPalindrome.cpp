#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string name, int left, int right)
{
    if (left >= right)
        return true;
    if (name[left] != name[right])
    {
        return false;
    }

    checkPalindrome(name, left + 1, right - 1);
}

int main()
{
    string name = "nitin";
    int left = 0;
    int right = name.length() - 1;

    bool ans = checkPalindrome(name, left, right);
    if (!ans)
    {
        cout << "Yes Palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }

    return 0;
}
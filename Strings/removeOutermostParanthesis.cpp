#include <bits/stdc++.h>
using namespace std;

int main()
{
    // premitive decomposition of string: we have to first divide string in chunks of () and then remove this paranthesis
    /*
        () is called a valid paranthesis
         for ( we have to do +1;
         for ')' we have to do -1;
    */
    string s = "()(()())(())";
    string result = "";
    int count = 0;
    for (char ch : s)
    {
        if (ch == '(')
        {
            // if we are inside '('
            if (count > 0)
                result = result + ch;
            count++;
        }
        else if (ch == ')')
        {
            // if we are outside the parathesis
            count--;
            if (count > 0)
                result = result + ch;
        }
    }
    cout << result;

    return 0;
}
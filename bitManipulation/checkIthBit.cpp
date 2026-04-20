#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 13;
    int i = 0;

    // using left shift
    // cout << (n & (1 << i));
    if( (n & (1 << i)) == 0){
        cout<<"Not Set"<<endl;
    }else{
        cout<<"Set"<< endl;
    }

    // right shift
    if (((n >> i) & 1) == 0)
        cout << "Not set";
    else
    {
        cout << "Set";
    }
    return 0;
}
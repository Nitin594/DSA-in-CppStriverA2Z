#include <bits/stdc++.h>
using namespace std;

void printNtimes(int n)
{
    int count = n;
    if (n == 0)
        return;
    cout << count;
    // count--;
    printNtimes(n-1);
}
void printName(string name, int n)
{
    if(n == 0) return;
    cout<<name<<" ";
    printName(name, n-1);
}

int main()
{
    int n = 3;
    printNtimes(n);

    // print name n times
    printName("Nitin",n);

    return 0;
}
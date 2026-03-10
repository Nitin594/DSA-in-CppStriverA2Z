#include <bits/stdc++.h>
using namespace std;

void printNtimes(int n, int count)
{
    if (count == 0)
        return;
    cout << n;
    count--;
    printNtimes(n, count);
}
void printName(string name, int n)
{
    if (n == 0)
        return;
    cout << name << " ";
    printName(name, n - 1);
}

void print12N(int n)
{
    if (n == 0)
        return;
    print12N(n - 1);
    cout << n << "\n";
}
void printN21(int n)
{
    if (n == 0)
        return;
    cout << n << "\n";
    printN21(n - 1);
}

int sum = 0;
int sumofN(int n)
{
    if (n == 0)
        return sum;
    sum = sum + n;
    sumofN(n - 1);
}

int fact = 1;
int factorial(int n)
{
    if (n < 0)
        return 0;
    if (n == 0 || n == 1)
        return fact;
    fact = n * (factorial(n - 1));
}

int main()
{
    int n = 5;
    // printNtimes(n, n);

    // print name n times
    // printName("Nitin",n);

    // print12N(n);
    // printN21(n);

    // cout << sumofN(n);

    cout << factorial(n);

    return 0;
}
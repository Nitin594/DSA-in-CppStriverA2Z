#include <iostream>
using namespace std;

int evaluateXOR(int n)
{
    if (n % 4 == 1)
    {
        return 1;
    }
    else if (n % 4 == 2)
    {
        return n+1;
    }
    else if (n % 4 == 3)
    {
        return 0;
    }
    else if (n % 4 == 0)
    {
        return n;
    }
}

int main()
{
    int n = 7;
    int x =4;
    int y =8;
    int result = evaluateXOR(n);
    int rangeResult = evaluateXOR(x-1) ^ evaluateXOR(y);
    cout<<"Result: "<<result<<endl;
    cout<<"Result Range: "<<rangeResult;

    return 0;
}
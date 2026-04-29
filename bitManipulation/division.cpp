#include <iostream>
#include <climits>
using namespace std;

int evaluate(int divident, int divisor)
{
    // special case
    if (divident == divisor)
        return 1;
    // check for sign of number and decides sign of answer
    bool sign = true;
    if (divident >= 0 && divisor < 0)
        sign = false;
    else if (divident < 0 && divisor >= 0)
        sign = false;

    // converting values to its absolute
    int n = abs(divident);
    int d = abs(divisor);

    divisor = abs(divisor);

    int quotient = 0;
    while (n >= d)
    {
        int cnt = 0;
        while (n >= (d << (cnt + 1))) // this checks number is greater than 2 to the power of count --- d* pow(2, count+1)
        {
            cnt += 1;
        }
        quotient += 1 << cnt;
        n -= (d << cnt);
    }

    // to handle overflow of bits
    if (quotient == (1 << 31) && sign)
    {
        return INT_MAX;
    }
    if (quotient == (1 << 31) && !sign)
    {
        return INT_MIN;
    }
    return sign ? quotient : -quotient;
}

int main()
{
    int divident = 22;
    int divisor = 3;

    int result = evaluate(divident, divisor);

    cout << result;

    return 0;
}

// TC - O(log n)^2
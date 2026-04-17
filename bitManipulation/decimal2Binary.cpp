#include<bits/stdc++.h>
using namespace std;

string decimal2Binary(int n)
{
    int remainder = 0;
    string res ="";
    while(n!=1){
        remainder = n%2;
        res =  to_string(remainder)+res;
        n = n/2;
    }
    res = to_string(n) +res;
    return res;
}

int main()
{
    int n = 10;
    string result = decimal2Binary(n);
    cout<<"Conversion of "<<n<<" to binary gives "<<result;

    return 0;
}
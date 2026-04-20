#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 13;
    // int i =0;
    // for(int i = 0; i<n;i++){
    //    if( (n & (1 << i)) == 0){
    //     continue;
    //    }else{
    //     n = n ^ (1 << i);
    //     break;
    //    }
    // }

    // optimisted solution
    n = n & (n-1);
    cout<<n;


    return 0;
}
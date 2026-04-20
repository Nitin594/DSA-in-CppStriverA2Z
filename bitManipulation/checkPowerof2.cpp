#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 32;
    // cout<<n&(n-1);
    if((n&(n-1)) == 0){
        cout<<"Power is 2";
    }else{
        cout<<"Power is not 2";
    }
    return 0;
}
// how many minimum bit flips to convert a number to another number
/*
    core logic 
    get the position where they diff in bits and count that bits thats all
*/

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int start = 13;
    int target = 2;

    // perform xor of start and end to get the differnt but positions
    int ans = start ^ target;
    int count = 0;
    for( int i = 0; i<32 ; i++){
        if(ans & (1<<i)){
            count += 1;
        }
    }
    cout << count;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // map is a data structure which stores values in a key-value pair in a sorted manner
    // keys are always unique
    map<string, int> marks;

    marks["Nitin"] = 45;
    marks["Adi"] = 435;
    marks["Suresh"] = 35;

    for (auto& mark : marks)     // auto keyword automatically defines the type of variable
    {
        cout<< mark.first <<"->"<< mark.second <<endl;
    }

    unordered_map<string,int> age;
    age["Rohan"]=99;
    age["Sohan"]=24;
    age["Mohan"]=66;

    for(auto &a: age)
    {
        cout<<a.first<<" -> "<< a.second<<endl;
    }
}
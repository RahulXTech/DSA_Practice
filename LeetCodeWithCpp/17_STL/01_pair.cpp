#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){

    pair<string, int>p;
    //Inset methods
    p.first = "rahul";
    p.second = 100;

    pair<int, string>pr = {2,"mohit"};

    pair<int, int>val;
    val = make_pair(3,4);
    cout<<val.first<<endl;

    //Add the three values in pair : name, age, weight.
    pair<string,pair<int,int>>values;

    values.second.first = 22;
    values.second.second = 33;
    values.first = "Mohit";

    values = make_pair("Rohit",make_pair(11,88));
    cout<<values.second.first<<endl;
    cout<<values.second.second<<endl;
    cout<<values.first<<endl;

    


    return 0;
}
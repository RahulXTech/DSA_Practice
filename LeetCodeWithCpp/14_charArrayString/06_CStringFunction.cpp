#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //You can't initialize value like this that why strcpy function here.
    char name[30];
    // name = "Rahul Sharma kumar";
    // cout<<name<<

    strcpy(name, "Rahul Sharma kumar");


    //===================To concatenate / join string one with two====================
    char namef[30] = "Rahul";
    char lastN[30] = "Kumar";


    strcat(namef,lastN);
    cout<< namef<<endl;

//===================Comparision string based values====================
char one[] = "mohit";
char two[] = "mohit";
cout<<"Couparision output is : "<<strcmp(one, two)<<endl;

    return 0;
}
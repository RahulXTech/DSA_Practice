#include<iostream>
#include<string>
using namespace std;

int main(){

string name = "Mohit khanaa";

cout<<name.length()<<endl;

//bothe code will be same output but code writting is different
cout<<name[2]<<endl;
cout<<name.at(2)<<endl;

//it will be get the sub string of string
cout<<name.substr(1,3)<<endl;


cout<<name.find('h')<<endl;//return maching value of index


    return 0;
}
#include<iostream>
#include<string>
#include<map>
using namespace std;

//Definition - A set in C++ is a container that stores unique elements in a sorted order automatically.
int main(){

    map<int,string>m = {
        {1,"one"},
        {2,"two"},
        {3,"three"},
        {4,"four"},
        {5,"five"}
    };

    for(auto &x : m){
        cout<<x.first<<" -> "<<x.second<<endl;
    };
    if(m.find(20) != m.end())
        cout<<"Key 2 found"<<endl;
    else
        cout<<"Key not found!!!!!!"<<endl;

    cout<<"Size: "<<m.size()<<endl;
    m.erase(1);
    cout<<"Size: "<<m.size()<<endl;


    
return 0;
}
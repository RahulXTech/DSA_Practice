#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;


int main(){
    //decleration and insertion in set.
    unordered_set<int>us = {2,4,6,8,1,9,2,3,4,4,5,5};
    us.insert(4);
    us.insert({0,2,5,7});

    // oprations-
    // inset(), erase(), find(), count(), size(), empty(), clear()
    

    
    for(auto x : us){
        cout<<x<<" ";
    }

    
    return 0;
}
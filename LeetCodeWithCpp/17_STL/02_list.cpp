#include<iostream>
#include<string>
#include<list>

using namespace std;
int main(){


//Insertion operations
    list<int>L1 = {3,5,7,8,2};
    
    list<int>l2;
    l2.push_back(4);
    l2.push_back(5);
    l2.push_back(6);
    l2.push_back(7);
    l2.push_front(3);
    l2.push_front(2);
    l2.push_front(1);

//Deletion operations.
    l2.pop_back();
    l2.pop_front();

//Traversal operations
    for(auto val : l2){
        cout<<val<<" ";
    }
    cout<<endl;

    l2.reverse();

    for(auto val : l2){
        cout<<val<<" ";
    }
    cout<<endl;
    for(auto it = l2.begin(); it!=l2.end(); it++){
        cout<<*it<<" ";
    }  

//Advance operations
    l2.reverse();
    l2.sort(); //assending order.

    l2.merge(L1);

    for(auto iterator1 = l2.begin(); iterator1!=l2.end(); iterator1++){
        cout<<*iterator1<<" ";
    }
    cout<<endl;  
    
    

    
    return 0;
}
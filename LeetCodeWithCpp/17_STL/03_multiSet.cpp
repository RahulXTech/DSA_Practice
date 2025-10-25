#include<iostream>
#include<set>
using namespace std;
//Dublicate elements will be present. 
//Sorted order will not arrange.
//Red-black, AVL tree.
//Similar all opration will apply.
int main(){
    multiset<int>s;
    s.insert(40);
    s.insert(20);
    s.insert(30);
    s.insert(30);

    for(auto x : s){
        cout<<x<<" ";
    }
    cout<<endl;
       
    
    for(auto x : s){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
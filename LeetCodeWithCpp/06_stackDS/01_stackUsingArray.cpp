#include<iostream>
#include<vector>
using namespace std;

class stack{
    vector<int> v;
public:
    void push(int val){//O(1) Constant time complexity.
        v.push_back(val);
    }
    void pop(){//O(1) Constant time complexity.
        v.pop_back();
    }
    int top(){//O(1) Constant time complexity.
        return v[v.size()-1];
    }
    bool empty(){
        return v.size() == 0;
    }
};

int main(){

stack s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);

while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}
cout<<endl;
    return 0;
};
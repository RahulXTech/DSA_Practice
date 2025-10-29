#include<iostream>
#include<vector>
#include<list>

using namespace std;

class Mystack{
    list<int> ll;
    public:
        void push(int val){
            ll.push_front(val);
        }
        void pop(){
            ll.pop_front();
        }
        int top(){
            return ll.front();
        }
        bool empty(){
            return ll.size() == 0;
        }
};
int main(){
Mystack s;

s.push(32);
s.push(54);
s.push(62);
s.push(22);
s.push(91);

while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
};
cout<<endl;
    return 0;
};

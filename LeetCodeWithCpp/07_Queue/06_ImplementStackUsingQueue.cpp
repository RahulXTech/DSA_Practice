#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

queue<int>q1;
queue<int>q2;

void push(int val){
    while (!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(val);
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
};
int pop(){
    if(q1.empty()){
        cout<<"Stack is empty";
        return -1;
    }
    int ans = q1.front();
    q1.pop();
    return ans;
};
int top(){
    return q1.front();
};
bool empty(){
    return q1.empty();
}
int main(){

push(2);
push(5);
cout<<top();


return 0;
};
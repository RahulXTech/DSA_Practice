#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>Q;
    Q.push(2);
    Q.push(4);
    Q.push(5);
    Q.push(1);
    Q.push(8);
    while(!Q.empty()){
        cout<<Q.front()<<endl;
        Q.pop();
    }
};
#include<iostream>
#include<deque>
using namespace std;

int main(){
deque<int>dq;
dq.push_back(1);
dq.push_back(2);
dq.push_back(3);
dq.push_front(4);

while(!dq.empty()){
    cout<<dq.front()<<endl;
    dq.pop_front();

}

    return 0;
}

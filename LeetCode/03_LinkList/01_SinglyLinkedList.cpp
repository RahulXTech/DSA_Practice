#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data, Node next1){
            this->data = data;
            this->next = next1;
        }
};

int main(){
Node* node1 = new Node(232, nullptr);
cout<<node1<<endl;
// cout<<node1->next<<endl;

return 0;
}
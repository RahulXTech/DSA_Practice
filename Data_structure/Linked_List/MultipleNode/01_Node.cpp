#include<iostream>
#include<string>

using namespace std;

class LinkedList{
    int information;
    LinkedList* Next;

    public:
    LinkedList(int data){
        information = data;
        Next = NULL;
    }
};

void push_front(int val){
    LinkedList* L_node;
    L_node = new LinkedList(val);
    LinkedList L_node(val);

}

int main(){
LinkedList L_list(22);
push_front(20);
    return 0;
}
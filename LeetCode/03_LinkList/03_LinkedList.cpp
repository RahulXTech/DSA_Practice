#include<iostream>
#include<string>
using namespace std;

struct Node{
        int data;
        Node* next;
    Node(int val){
        data = val;
        next= NULL;
    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = NULL;
        tail = NULL;
    };
    push_front(int values){
        Node* newNode = new Node(values);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    printNodes(){
        Node* temp =  head;
        while(head != NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){

List LL;
LL.push_front(3);
LL.push_front(4);
LL.push_front(7);
LL.printNodes();
    return 0;
}
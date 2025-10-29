#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class List{
    public:
        Node* head;
        Node* tail;
        List(){
            head = NULL;
            tail = NULL;
        }

        void push_front(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }
        void printLL(){
            Node* temp = head;
            while(temp != NULL){
               cout<<temp->data<<" -> ";
               temp = temp->next;
            }
            cout<<" NULL ";
        }
};
int main(){
    List LL;
    LL.push_front(32);
    LL.push_front(54);
    LL.push_front(65);
    LL.push_front(77);
    LL.push_front(92);
    LL.printLL();
    return 0;
}
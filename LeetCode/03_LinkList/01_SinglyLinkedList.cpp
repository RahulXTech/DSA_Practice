#include<iostream>
#include<string>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void printList(Node* head){
    Node* temp = head;
    while(head!=NULL){
        cout<<temp->data << " -> ";
        temp = temp->next;
    }
    cout<<"Null\n";
}
int main(){
    Node* head = new Node{1, NULL};
    head->next = new Node {2, NULL};
    head->next->next = new Node {3, NULL};

    printList(head);

    return 0;
}
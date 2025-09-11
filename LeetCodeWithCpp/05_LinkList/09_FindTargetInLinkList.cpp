#include<iostream>
#include<string>
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
        void push_back(int val){
            Node* newNode = new Node(val);

            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        void printNodes(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" -> ";
                 temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }

        int findTarget(int targets){
            Node* tempHead = head;
            while(tempHead != NULL){
                if(tempHead->data == targets){
                    cout<<"Your target is ablaible on : "<<tempHead->data<<endl; //It will be print data note index number.
                    return 1;
                }
                tempHead = tempHead->next;
            }
            return -1;
        }
};
int main(){
    int target = 98;
    List ll;
    ll.push_back(32);
    ll.push_back(76);
    ll.push_back(87);
    ll.push_back(12);
    ll.push_back(98);
    ll.push_back(21);
    ll.push_back(22);
    ll.printNodes();
    cout<<ll.findTarget(target);
}
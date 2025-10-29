#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        };
};       

class List{
    public:
        Node* head;
        Node* tail;
        List(){
            head = tail = NULL;
        }
        void push_front(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;
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
        int findTarget(int target){
            Node* temp = head;
            int index = 0;
            while(temp!=NULL){
                if(target == temp->data){
                    cout<<"Target is avlaible on index : "<<index<<endl;
                    return 0;
                }
                index++;
                temp = temp->next;
            }
            cout<<"Target is not Found!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;

            return 0;
        }

        int getsize(){
            Node* temp = head;
            int sz = 0;
            while(temp!=NULL){
                temp = temp->next;
                sz++;
            }
            return sz;
        }
        void deleteTargetVal(int n){
            int size = getsize();
            Node* temp = head;
            for(int i=0; i<(size-(n+1)); i++){
                temp = temp->next;
            }
            cout<<"going to delete : "<<temp->next->data<<endl;
            temp->next = temp->next->next;
        }
};
int main(){
    List li;
    li.push_front(4);
    li.push_front(7);
    li.push_front(4);
    li.push_front(0);
    li.push_front(3);
    li.push_front(1);
    li.push_front(8);
    li.printNodes();
    li.findTarget(63);
    li.deleteTargetVal(2);
    li.printNodes();
return 0;
}
#include<iostream>
#include<string>
using namespace std;

struct Node{
    public:
        int data;
        Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
    Node* head;
    Node* tail;
    public:
        List(){
            head = NULL;
            tail = NULL;
        }
//Push front the data in linkedList
    void push_front(int val){
        Node* newNode = new Node(val);
        // Node* newNode(val) //it's statics so don't try to use.
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head; 
            head = newNode;
        }
    }
//Push back the data in linkedList
    void push_back(int vals){
        Node* newNode =  new Node(vals);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }

    }

    //POP front the data in linkedList
    void pop_front(){
        if(head == NULL){
            cout<<"LinkedList is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    //POP back opraton in linkedlist.
    void pop_back(){
        if(head == NULL){
            cout<<"Linkedlist is empty"<<endl;
            return;
        }
        Node* temp =  head;
        while( temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail =  temp;
    }
    //Inset data in middle of linkedList.
    void insert(int val, int posiotion){ //o(n)
        if(posiotion < 0){
            cout<<"Invalid position"<<endl;
            return;
        }
        if(posiotion == 0){
            push_front(val);
            return;
        }

        Node* temp = head;
        for(int i =0; i<posiotion-1; i++){
            if(temp == NULL){
                cout<<"invalid position"<<endl;
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    //Search in linkedList
    int searchVal(int key){ //O(n)
        Node* temp = head;
        int index = 0;
        while(temp != NULL){
            if(temp->data == key){
                return index;
            }
            temp = temp->next;
            index++;
        }
        return -1;
    }
    void PrintLL(){//o(n)
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    List ll;
        ll.push_front(1);
        ll.push_front(2);
        ll.push_front(3);
        ll.push_front(4);
        ll.push_front(5);
        ll.push_back(11);
        ll.pop_front();
        ll.pop_back();
        ll.insert(22, 2);
        ll.PrintLL();
        cout<<ll.searchVal(2);
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class List
{
public:
    Node *head;
    Node *tail;
    List()
    {
        head = NULL;
        tail = NULL;
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void displayNodes()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void findMidNode()
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout << "your mid node is : " << slow->data;
    }
};
int main()
{
    List LL;
    LL.push_back(32);
    LL.push_back(23);
    LL.push_back(43);
    LL.push_back(65);
    LL.push_back(93);
    LL.push_back(67);
    LL.push_back(86);
    LL.push_back(32);
    LL.push_back(4444);
    LL.push_back(3464);
    LL.push_back(464);
    LL.push_back(355);
    LL.push_back(34634);
    LL.push_back(3);
    LL.displayNodes();
    LL.findMidNode();
    return 0;
}
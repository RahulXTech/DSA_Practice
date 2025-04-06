#include <iostream>
#include <string>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class list
{
    node *Head;
    node *Tail;

public:
    list()
    {
        Head = NULL;
        Tail = NULL;
    }
    void push_front(int val)
    {
        node *newNode = new node(val);
        node newNode(val); // for the statics.
    }
};
int main()
{

    return 0;
}
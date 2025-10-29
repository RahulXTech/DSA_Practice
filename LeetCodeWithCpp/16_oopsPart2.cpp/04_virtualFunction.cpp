#include<iostream>
#include<string>
using namespace std;
//redefine is compusory
class Parent{
    public:
    virtual void Hello(){
        cout<<"Hello parent class"<<endl;
    }
        
};
class Child : public Parent{
    public:
        void Hello(){
            cout<<"Hello child class"<<endl;
        }
};
int main(){
    Parent *paretn1;
    Child child1;
    paretn1 = &child1; //runtime buinding.

    paretn1->Hello();

    return 0;
}
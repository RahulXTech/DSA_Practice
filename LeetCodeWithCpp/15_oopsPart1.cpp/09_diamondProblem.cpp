#include<iostream>
#include<string>
using namespace std;

class A{
    public:
        void Display(){
            cout<<"Datas and member functions of class A";
        }
};
class B:public A{};
class C:public A{};
class D : public B , public C{};

int main(){
D obj1;

obj1.Display();

    return 0;
}

#include<iostream>
#include<string>
using namespace std;

class A{
    public:
        A(){
            cout<<"Constructor call of Class A ................."<<endl;
        }
        ~A(){
            cout<<"Distroctor call of class A..............."<<endl;
        }
};

class B : public A{
    public:
        B(){
            cout<<"Constructor call of class B...................."<<endl;
        }
        ~B(){
            cout<<"Destructor call of class B....................."<<endl;
        }
};


//##########Please predict wich code will be run first************************
int main(){
    B obj1;

    return 0;
}
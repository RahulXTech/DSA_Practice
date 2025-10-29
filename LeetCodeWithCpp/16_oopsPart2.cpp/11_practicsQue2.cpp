#include<iostream>

class Base{
    public:
        virtual void print(){
            std::cout<<"Base"<< std::endl;
        }
};
class Derived : public Base{
    public: 
        void print() override {
            std::cout<<"Derived of function in the class........."<<std::endl;
        }
};
int main(){
    Base* b= new Derived();
    b->print();
    delete b;

    return 0;
}
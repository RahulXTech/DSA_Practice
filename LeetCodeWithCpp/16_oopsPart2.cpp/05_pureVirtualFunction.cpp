#include<iostream>
#include<string>
using namespace std;

//This is the abstract class you can't create object of abstract class.
class Shape{
    public:
        virtual void draw() = 0; //abstract function / pure virtual functoin
        //unimplemented pure virtual function
};
class circle : public Shape{
    public:
        void draw(){
            cout<<"draw circle shap...........\n";
        }
};
class rectangle : public Shape{
    public:
        void draw(){
            cout<<"draw rectangle shap................\n";
        }
};

int main(){

circle cricle1;
cricle1.draw();

rectangle rec1;
rec1.draw();

return 0;
}
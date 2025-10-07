#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string name;
        string color;

    Car(string name, string color){
        this->name = name;
        this->color = color;
    }
    
    Car(Car &Original){
        cout<<"Custom constructor is working"<<endl;
        name = Original.name;
        color = Original.color;
    }
};


int main(){
    Car c1("Scorpio 800", "black");
    Car c2(c1);//Custom constructor

    cout<<c2.name<<endl;
    cout<<c2.color<<endl;

    return 0;
}
#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string name;
        string color;
        int *mileage;
    Car(string name1, string color){
        this->name = name1;
        this->color = color;
        mileage = new int;
        *mileage = 50;
    }
    Car(Car &original){
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }
};


int main(){
    Car c1("maruti 800", "Gray");
    Car c2(c1);


    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    *c2.mileage = 20;//it will chage but second dynamic variable please check notes.
    cout<<*c1.mileage;



    return 0;
}
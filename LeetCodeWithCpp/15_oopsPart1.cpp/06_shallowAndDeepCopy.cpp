#include<iostream>
#include<string>
using namespace std;
//==========================shallow copy=======================================
class Car{
    public:
        string name;
        string color;
        int *mileage;
    Car(string name, string color){
        this->name = name;
        this->color = color;
        mileage = new int;
        *mileage = 50;
    }
    Car(Car *original){
        name = original->name;
        color = original->color;
        mileage = original->mileage;
    }
};
int main(){
Car c1("scorpio", "brown blue");

Car c2(c1);
cout<<c2.name<<endl;
cout<<c2.color<<endl;
cout<<*c2.mileage<<endl;

*c2.mileage = 20;
cout<<*c2.mileage;

return 0;
}
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
    ~Car(){
        cout<<"object deleted.....\n";
        if(mileage!=NULL){
            delete mileage;
            mileage = NULL;
        }
    }
};


int main(){
    Car c1("maruti 800", "Gray");


    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;
 


    return 0;
}
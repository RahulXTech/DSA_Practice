#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string name;
        string color;
    Car(string name, string col){
        this->name = name; 
        this->color = col;
    }
};
int main(){
    Car c1("maruti 800", "black");
    Car c2(c1);

    cout<<c2.name<<endl;
    cout<<c2.color<<endl;

    return 0;
}
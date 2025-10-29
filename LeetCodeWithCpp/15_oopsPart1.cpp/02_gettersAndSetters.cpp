#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string name;
        int age;

    public:
    //setters............
        void setName(string name){
            this->name = name;
        }
    //getters............
        string getName(){
            return name;
        }
};



int main(){
    // Create an object named st1 of type Student using the class definition.
    Student st1;
    st1.setName("Rahul");
    cout<<st1.getName()<<endl;

    return 0;
}
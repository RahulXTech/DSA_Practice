#include<iostream>
#include<string>
using namespace std;

class Student{
        string name;
        int enrollment;
    public:
    //I am a Constructor.
        Student(){
            cout<<"Constructor will call automaticaly when you create a object if you will not cretate manualy constructor then compiler will create internely"<<endl;
        }
};

int main(){
Student std1;

    return 0;
}
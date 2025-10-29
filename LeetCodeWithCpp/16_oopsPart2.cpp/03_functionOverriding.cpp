#include<iostream>
#include<string>
using namespace std;

class Parent{
    public:
        void Show(){
            cout<<"Parent class......."<<endl;
        }
};
class Child{
    public:
        void Show(){
            cout<<"Child class................."<<endl;
        }
};

int main(){
    //It totaly depend on class function createion wich function will be call.
    Child obj1;
    obj1.Show();
       
    return 0;
}
 
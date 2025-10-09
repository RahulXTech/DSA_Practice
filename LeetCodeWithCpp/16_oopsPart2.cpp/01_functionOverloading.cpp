#include<iostream>
#include<string>
using namespace std;

//this is the concept of over loading in cpp
class Print{
    public:
        void Show(string val){
            cout<<"string funcation has been call with "<<val<<endl;
        }
        void Show(int val){
            cout<<"integer funcation has been call with "<<val<<endl;
        }
};

int main(){
    Print obj1;
    obj1.Show("Rahul");
    Print obj2;
    obj2.Show(222);
return 0;
}

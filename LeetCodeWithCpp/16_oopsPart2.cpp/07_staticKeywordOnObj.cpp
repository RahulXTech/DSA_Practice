#include<iostream>
#include<string>
using namespace std;

class Example{
    public: 
        Example(){
            cout<<"Constroctor call...."<<endl;
        };
        ~Example(){
            cout<<"Destroctor call...."<<endl;
        } 
};
//you can check working principle of code without static keyword.
int main(){
    int val = 0;
    if(val ==0){
     static Example obj1; 
    }
    cout<<"Code ending........."<<endl;

    return 0;
}
#include<iostream>
#include<string>
using namespace std;

void passRef(int &x){ //pass by refrence using .
    x = 20;
}
int main(){
    int a = 10;
    passRef(a);
    cout<<"your pass by refrence value is : "<<a<<endl;

    //Array pointer.
    int arr[] = {6,2,9,4,5};
    cout<<arr<<endl;//it will be print the address of index number 0.
    cout<<*arr<<endl;//it will be print the value of index number 0.
    
    //It's posible to change the value.
    int c =10, b =20;
    int* ptr = &c;
    ptr = &b;
    cout<<"This is the current address of ptr : "<<ptr<<endl;
    cout<<"This is the current value of ptr : "<<*ptr<<endl;
    
    //It's not posible to change the value,
    //  Because this pointer is a constant.
    // int z = 22;
    // arr = &z;

    cout<<arr;
   

    
   
    return 0;
}
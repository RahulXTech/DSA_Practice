#include<iostream>
#include<string>

using namespace std;


// There is changing values with the help of a pointer.
void changeValue(int* x){
    *x = 30;
}

int main(){

// Printing the variable memory address.
int a = 10;
int* ptr = &a;
int** prptr = &ptr;
changeValue(&a);


cout<<a<<endl;
cout<<*(ptr)<<endl;
cout<<**(prptr)<<endl;
cout<<*(prptr)<<endl;



    return 0;
}
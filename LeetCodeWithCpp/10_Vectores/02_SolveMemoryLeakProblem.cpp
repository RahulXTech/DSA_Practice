#include<iostream>
using namespace std;
int* func(){
    int *ptr = new int;
    *ptr = 2000;
    cout<<"ptr point to : "<<*ptr<<endl;
    delete ptr;
return ptr; 
};

int main(){
   int *x = func();
   cout<<*x;

   delete x; //It will be solve the memory leak problem.
    return 0;
}
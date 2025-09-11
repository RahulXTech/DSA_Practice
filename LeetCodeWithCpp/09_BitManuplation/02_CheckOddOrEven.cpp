#include<iostream>
#include<string>
using namespace std;
 
void checkEvenOrOdd(int val){
    if(!(val&1)){
        cout<<"This is the Odd number"<<endl;
    }else{
        cout<<"This is the Even number"<<endl;
    }
}


int main(){
    checkEvenOrOdd(10);
    checkEvenOrOdd(11);
    return 0;
}
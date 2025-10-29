#include<iostream>
#include<string>
using namespace std;
class CircularQueue{
    int* arr;
    int currSize, cap;
    int f=0, r=-1;
public:
    CircularQueue(int size){
        cap = size;
        arr = new int[cap];
        f=0;
        r= -1;
    }
    void push(int data){
        
    }
    void pop(){

    }
    bool empty(){
        return currSize == 0;
    }
};

int main(){

    return 0;
}
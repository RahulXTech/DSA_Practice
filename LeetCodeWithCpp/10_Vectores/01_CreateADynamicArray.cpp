#include<iostream>
using namespace std;

void func(){
    int *ptr = new int[5];
    ptr[0] = 22;
    cout<<ptr[0]<<endl;
}


int main(){

int size;
cout<<"Enter the array size : ";
cin>>size;

int *arr = new int[size];
int x = 2;
for(int i =0; i<size; i++){
    arr[i] = x;
    cout<<arr[i]<<endl;
    x+=2;
}


return 0;
}
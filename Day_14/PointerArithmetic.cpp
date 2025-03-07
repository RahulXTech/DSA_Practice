#include<iostream>
#include<string>

using namespace std;

int main(){

//Increment and Decrement opration in pointer
int a = 10;
int* ptr = &a;
cout<<"Befor memory space size as a hexaDecimalNumber"<<ptr<<endl;
ptr++;
cout<<"After Increase the memory space as a byte"<<ptr<<endl;


//Add or subtract number in pointer

int b = 20;
int* ptr1 = &b;
cout<<"Your mororay space size is : "<<ptr1<<endl;
ptr1 += 1;
cout<<"After adding the number your memory size is : "<<ptr1<<endl;
ptr1-=2;
cout<<"After subtract the number your memory size is : "<<ptr1<<endl;

//Subtract pointer to pointer.
int* ptr11;
int* ptr22 = ptr11+2;
cout<<ptr22-ptr11<<endl;

//Comparision oprator pointer to pointer is comparing.
int* ptr21;
int* ptr23;

cout<<"The value of ptr21 is : "<<ptr21<< endl;
cout<<"The value of ptr23 is : "<<ptr23<< endl;
cout<<(ptr21 < ptr23)<<endl;
cout<<(ptr21 <= ptr23)<<endl;
cout<<(ptr21 > ptr23)<<endl;
cout<<(ptr21 >= ptr23)<<endl;
cout<<(ptr21 == ptr23)<<endl;
cout<<(ptr21 != ptr23)<<endl;

int arr[] = {2,6,2,8,4,9};
int* ptr0 = arr;

cout<<*(arr)<<endl;
cout<<*(ptr0+1)<<endl;
ptr0++;
cout<<*(ptr0+3)<<endl;




    return 0;
}
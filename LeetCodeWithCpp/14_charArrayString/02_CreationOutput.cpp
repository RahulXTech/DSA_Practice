#include<iostream>
#include<string>
using namespace std;

int main(){

    
char work[] = "code"; //memory storage 5 byte Extra space NON.
char work1[10] = "code"; // memory storage 10 byte Extra space NON.
char work0[] = {'c','o','d','e','\0'}; //memory storage 5 byte Extra space NON.
char work2[10] = {'c', 'o', 'd', 'e', '\0'}; // memory storage 10 byte Extra space NON.


cout<<work<<endl; 

 
return 0;
}
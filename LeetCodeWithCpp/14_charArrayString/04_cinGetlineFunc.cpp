#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;


int main(){

char name[20];
cout<<"Plese enter charecter : ";
cin.getline(name,20);//this function is allows to take input includeing space
cout<<"you all charecter is : "<< name<<endl;
cout<<"you all charecter size is : "<<strlen(name)<<endl;




char paragraph[30];
cin.getline(paragraph, 20, '$'); //Delimitar will be break the line after the symbol.
cout<<paragraph<<endl;

    return 0;
}
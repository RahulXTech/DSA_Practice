#include<iostream>
#include<string>
using namespace std;


int main(){
//manual value
string str = "Rahul kumar";
cout<<str<<endl;

// user input with cin
//cin can't take the value after the space.
cout<<"Please enter the input values : ";
string str11;
cin>>str11;
cout<<str11<<endl;

//user input with getline
cout<<"Please enter the input values : ";
string str1;
getline(cin, str1);
cout<<str1<<endl;

return 0;
}
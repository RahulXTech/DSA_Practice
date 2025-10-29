#include<iostream>
#include<string>
using namespace std;
int main(){
//getline() is a standard library function that is used to read a string or a line from an input stream. 
// ------------------------------------------------------------------------
//Please take the input - Rahul kum$ar sharma from india
//Out put will be - Rahul kum

cout<<"Please enter your name : ";
char arr[20];
cin.getline(arr, 20, '$');
// cin.getline(arr, 20);
cout<<arr<<endl;
for(char val : arr){
    cout<<val<<"  ";
}



    return 0;
}
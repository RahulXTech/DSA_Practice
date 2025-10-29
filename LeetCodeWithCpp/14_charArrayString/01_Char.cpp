#include<iostream>
#include<string>
using namespace std;


int main(){

char chr1 = 'a';
char chr2 = 'b';
char chr3 = 'c';
// char chr4 = '/t'; //also in this case cpp is considering only one char.
// char chr4 = '/n'; //cpp is considering only one char.

//print the ASCII value
char chr11 = 'A';
char chr12 = 'a';
cout<< (int) chr11<<endl;
cout<< (int) chr12<<endl;

//Check the posigion of F
char pos = 'F';
char pos1 = 'f';
cout<<pos-'A'<<endl;
cout<<pos1-'a'<<endl;



return 0;
}
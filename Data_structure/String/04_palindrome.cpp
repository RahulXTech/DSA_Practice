#include<iostream>
#include<string>

using namespace std;

int main(){
//Check if string is a palindrome or not. like racecar
cout<<"Please enter the string : ";
string name;
cin>>name;
string values = name;

string name1 = "racecar";

int start = 0;
int n = values.length();
int end = n-1;

while(start < end){
    swap(values[start], values[end]);
    start++;
    end--;
}
if(name == values){
    cout<<"True, It's palindrome ";
}else cout<<"False, It's not palindrome";


    return 0;
}
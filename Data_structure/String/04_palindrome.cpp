#include<iostream>
#include<string>
#include<typeinfo>

using namespace std;

int main(){
//Check if string is a palindrome or not. like racecar
//Check the strict mode data types.
cout<<"Please enter the string : ";
string name;
cin>>name;
string values = name;


int start = 0;
int n = values.length();
int end = n-1;

while(start < end){
    if(values[start]){

    }
    if(typeid(values[start]).name() != typeid(string).name()){
        start++;
        continue;
    };
    if(typeid(values[end]).name() != typeid(string).name()){
        end--;
        continue;
    };

    swap(values[start], values[end]);
    start++;
    end--;
}
if(name == values){
    cout<<"True, It's palindrome ";
}else cout<<"False, It's not palindrome";

    return 0;
}
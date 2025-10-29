#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;
// Example 1:
// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"
// Example 2:

// Input: address = "255.100.50.0"
// Output: "255[.]100[.]50[.]0"
string DefangingIpAddress(string address){
    string result = "";
    for(char ch : address){
        if(ch == '.'){
            result+="[.]";
        }else{
            result+=ch;
        }
    }
    return result;
}
int main(){
    string address = "1.1.1.1";
    cout<<DefangingIpAddress(address);
    return 0;
}
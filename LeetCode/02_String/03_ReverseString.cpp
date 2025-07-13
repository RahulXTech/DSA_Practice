#include<iostream>
#include<string>
using namespace std;

string ReverseWord(string inp){
    int start = 0;
    int n = inp.size()-1;
    int end = n;
    while(start<end){
        swap(inp[start], inp[end]);
        start++;
        end--;
    }
    cout<<inp;
};
int main(){
//input
string inputStr = "MrDing";

//Call the reverse word function
ReverseWord(inputStr);

    return 0;
}
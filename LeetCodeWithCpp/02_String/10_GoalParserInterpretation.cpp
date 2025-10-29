#include<iostream>
#include<string>
using namespace std;
string GoalParserString(string command){
    string result = "";
    for(int i=0; i<command.length(); i++){
        string sample = string() + command[i] + command[i+1];
        if(sample == "()"){
            result+='o';
        }
        if(command[i]!='(' && command[i]!=')') result+=command[i];
    }
    return result;
};
int main(){
    string inp = "G()od_M()rning";
    cout<<GoalParserString(inp);
    return 0;
};

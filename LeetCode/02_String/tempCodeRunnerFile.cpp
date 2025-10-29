#include<iostream>
#include<string>
using namespace std;
string GoalParserString(string command){
    string result = "";
    for(int i=0; i<command.length(); i++){
        int sample = command[i] + command[i+1];
        if(sample == "()"){
            result+='o';
            cout<<"yes open and close breaket is avlaible";
        }
        if(command[i]!='(' && command[i]!=')') result+=command[i];
    }
    return result;
};
int main(){
    string inp = "G()od";
    cout<<GoalParserString(inp);
    return 0;
};

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printPermutations(string str, string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        string newStr = str.substr(0,i) + str.substr(i+1);
        printPermutations(newStr,ans+ch);
    }
}
int main(){
string str = "abc";
string ans = "";
printPermutations(str, ans);

return 0;
}
#include<iostream>
#include<string>
#include<vector>
using namespace std;

string ShffStrs(string str, vector<int>&indic){
    string result = str;
    for(int i=0; i<str.length(); i++){
        result[indic[i]] = str[i];
        // result+=str[indic[i]];
    }
    return result;
}

int main(){
string s = "codeleet";
vector<int>indi = {4,5,6,7,0,2,1,3};
cout<<ShffStrs(s, indi);
return 0;
};
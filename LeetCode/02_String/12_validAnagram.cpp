#include<iostream>
#include<string>
using namespace std;

bool validAnagram(string s, string t){
    int count =0;
    for(int i=0; i<s.length(); i++){
        for(int j=0; j<t.length(); j++){
            if(s[i] == t[j]){
                count++;
                break;
            }
        }
    }
    if(count == s.length()) return true;
    return false;
}
int main(){

string s = "ram";
string t = "ram";
cout<<validAnagram(s,t);

    return 0;
}
#include<iostream>
#include<string>
#include<vector>
using namespace std;
string LongestCommonPrefix(vector<string>strr){
    string ans = "prifix_.";
    if(strr.empty()) return "";
    if(strr.size()<1) return strr[0];
    for(int i=0; i<strr[0].length(); i++){
       char ch = strr[0][i];
       int match = 1;
       for(int j=1; j<strr.size(); j++){
        if(ch != strr[j][i]){
            return ans;
        }else {
            match++;
        }
        if(match == strr.size()) ans.push_back(ch);
       }
    }
    return ans;
}
int main(){
vector<string> strs = {"x"};
cout<<LongestCommonPrefix(strs);
    return 0;
}
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// class StringProblems{
//     public:
//     string originalStr(string s){
//         string result = "";
//         for(int i=0; i<s.size(); i++){
//             for(int j=1; j<s.size(); j++){
//                 if(s[i]==s[j]){
//                     i++;
//                     j++;
//                 }
//             }
//             result+=s[i];
//         }
//         return result;
//     }
// };

// int main(){
//     string s = "cbacdcbc"; //acdb
//     StringProblems strr;
//     cout<<strr.originalStr(s);
// };


#include<iostream>
#include<string>
#include<set>

using namespace std;

class RemoveDublicate{
    public:
        string rdStr(string str){
            set<char>mySets;
            for(char ch : str){
                mySets.insert(ch);
            }
            string result =  "";
            for(char ch : mySets){
                result+=ch;
            }
            return result;
        }
};
int main(){
    string strs = "9494156465412";
    RemoveDublicate RD;
    cout<<RD.rdStr(strs);
};
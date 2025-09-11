#include<iostream>
#include<string>
#include<list>
using namespace std;

bool validParentheses(string str){
    list<char>s;
    for(int i = 0; i<str.size(); i++){
        if(str[i] == '{' || str[i] == '[' || str[i] == '('){
            s.push_front(str[i]);
        }else{
            if(s.front() == '[' && str[i] == ']' ||
               s.front() == '{' && str[i] == '}' ||
               s.front() == '(' && str[i] == ')' ){
               s.pop_front();
            }else{ 
                return false;
            }
        }
    }
    return s.size() == 0;
};
int main(){
string str =  "{[()]}";
cout<<validParentheses(str);
    return 0;
};

//solotion on leedcode with constraint
// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char>storage;

//         for(int i=0; i<s.size(); i++){
//             if(s[i] == '[' || s[i] == '{' || s[i] == '('){
//                 storage.push(s[i]);
//             }else{
//                 if(storage.size() == 0) return false;
//             if((storage.top() == '[' && s[i] == ']') || 
//             (storage.top() == '{' && s[i] == '}') ||
//             (storage.top() == '(' && s[i] == ')')){
//                 storage.pop();
//             }else{
//                 return false;
//             }
//         }
//         }
//         return storage.size() == 0;
//     }
// };


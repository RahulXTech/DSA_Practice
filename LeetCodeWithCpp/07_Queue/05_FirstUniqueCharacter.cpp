#include<iostream>
#include<string>
#include<queue>
#include<unordered_map>
using namespace std;
int FirstUniqueCharecter(string s){
    queue<int>q;
    unordered_map<char, int>m;
    for(int i=0; i<s.size(); i++){
        if(m.find(s[i]) == m.end()){
            q.push(i);
        }
        m[s[i]]++;
        while(q.size()>0 && m[s[q.front()]] > 1){
            q.pop();
        }
    }
    return q.empty() ? -1 : q.front();
};
int main(){
string std = "level";
cout<<FirstUniqueCharecter(std);
    return 0;
}
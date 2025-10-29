#include<bits/stdc++.h>
using namespace std;

// str = "abc";
// subSets = "";

void subSetsofstr(string str, string subSets){
    if(str.length()==0){
        cout<<subSets<<endl;
        return;
    }
    char ch = str[0];
    subSetsofstr(str.substr(1, str.length()-1), subSets+ch); // yes choice
    subSetsofstr(str.substr(1, str.length()-1), subSets);  // No choice
}
int main(){
string str = "abc";
string subss = "";
subSetsofstr(str, subss);

return 0;
}
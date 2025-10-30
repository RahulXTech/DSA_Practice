#include<iostream>
#include<string>
using namespace std;

void removeDublicates(string str, string ans, int i, bool arrMap[26]){
    if(str.size()==i){
        cout<<ans<<endl;
        return;
    }
    int ch  = str[i];
    int mapIdx  = (int)(ch-'a');
    if(arrMap[mapIdx])
    removeDublicates(str,ans,i+1,arrMap);
    else{
        arrMap[mapIdx] = true;
        removeDublicates(str,ans+str[i],i+1,arrMap);
    }

}

int main(){

string srt = "appanacollegess";
string ans = "";
int i = 0;
bool map[26] = {false};

removeDublicates(srt, ans, i, map);
return 0;
}
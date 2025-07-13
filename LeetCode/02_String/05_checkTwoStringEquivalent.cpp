// Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
// Output: true
#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool CheckStringEquileOrNot(vector<string>input1, vector<string>target){
    for(int i=0; i<input1.size(); i++){
        for(char ch : input1[i]){
            cout<<"one chars : "<<int(ch)<<endl;
        }
    }
}
int main(){
vector<string> InputArr = {"abc", "d", "defg"};
vector<string> TragetArr = {"abcddefg"};
CheckStringEquileOrNot(InputArr, TragetArr);
return 0;
}
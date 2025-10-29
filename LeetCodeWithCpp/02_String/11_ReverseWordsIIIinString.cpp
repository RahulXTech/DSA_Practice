#include<iostream>
#include<string>
#include<vector>
using namespace std;
// Input: s = "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"
// Example 2:
// Input: s = "Mr Ding"
// Output: "rM gniD"
class Solution{
    public:
        string ReverseStrIII(string str){
            vector<string>arr;
            string eleme = "";
            for(char ch : str){
                if(ch != ' ') eleme+=ch;

                if(ch == ' '){
                    arr.push_back(eleme);
                    eleme = "";
                }
            };
            for(int i=0; i<arr.length(); i++){

                int HalfS = arr[i].length()/2;
                int endP = arr[i].length()-1;

                while(HalfS<endP){
                    swap(arr[i][HalfS], arr[i][endP]);
                    HalfS++;
                    endP--;
                }
            }
            return true;
        }
};

int main(){
string names = "rahul kumar";
Solution Sol;
Sol.ReverseStrIII(names);

    return 0;
}
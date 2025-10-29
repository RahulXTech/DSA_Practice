#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool ArrayComparision(vector<string>word1, vector<string>word2){
    string input1 = "";
    string input2 = "";

    for(int i=0; i<word1.size(); i++){
        for(char ch : word1[i]){
            input1+=ch;
        }
    }
    for(int i=0; i<word2.size(); i++){
        for(char ch : word2[i]){
            input2+=ch;
        }
    }
    if(input1 == input2) return true;
    return false;
}

int main(){
    vector<string>Str1 = {"ab", "c"};
    vector<string>Str2 = {"a", "bc"};
    cout<<ArrayComparision(Str1, Str2);
    return 0;
}

// Example 1:

// Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
// Output: true
// Explanation:
// word1 represents string "ab" + "c" -> "abc"
// word2 represents string "a" + "bc" -> "abc"
// The strings are the same, so return true.
// Example 2:

// Input: word1 = ["a", "cb"], word2 = ["ab", "c"]
// Output: false
// Example 3:

// Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
// Output: true
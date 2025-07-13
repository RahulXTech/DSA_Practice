#include<iostream>
#include<string>
using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);
    return ch=='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

bool DetermineHalfString(string s){
    int half = s.length() / 2;
    int one = 0;
    int two = 0;

    for(int i = 0; i < half; i++){
        if(isVowel(s[i])) one++;
    }

    for(int i = half; i < s.length(); i++){
        if(isVowel(s[i])) two++;
    }

    if(one == two){
        cout << "Yes this is true" << endl;
        return true;
    }

    cout << "Wrong output!!!!!!" << endl;
    return false;
}

int main(){
    string str = "book";
    cout << DetermineHalfString(str);
    return 0;
}

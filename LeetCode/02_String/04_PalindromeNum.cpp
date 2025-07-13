#include<iostream>
#include<string>

using namespace std;

int PalindromNum(int n){
    string val =  to_string(n);
    int left = 0;
    int right = val.size() -1;

    while(left<right){
        if(val[right--] != val[left++])
            return false;
    };
    return true;
};
int main(){
cout<<PalindromNum(112211);
   return 0;
};
#include<iostream>
#include<string>
using namespace std;
int FirstOccurrence(string needle, string haystack){
    int inx = 0;
      for(int i=0; i<haystack.size(); i++){
        if(needle[inx] == haystack[i]){
            inx++;
            if(needle.size()==inx) {
                i-=inx-1;
                return i;
            }
        }else {
            i-=inx;
            inx = 0;
        }
      }
      return -1;
};

int main(){
string hay = "mississippi";
string needle = "issip";
cout<<FirstOccurrence(needle, hay);
    return 0;
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool validAnagram(string s, string t){
   int a = s.length();
   int b = t.length();
   if(a!= b) return false;

   sort(s.begin(), s.end());
   sort(t.begin(), t.end());

   return (s==t);
}
int main(){
    string s = "mrp";
    string t = "ram";
cout<<validAnagram(s,t);

    return 0;
}
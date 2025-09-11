#include<iostream>
#include<string>
using namespace std;

int main(){
    //STL function
   //string.find();
   //string.erase(strting_point, end_point);
   string s = "daabcbaabcbc";
   string part = "abc";
   while (s.find(part) < s.length() && s.length() > 0)
   {
    cout<<"this is the answer : "<< s.erase(s.find(part), s.length()) <<endl;
   }
    return 0;
}
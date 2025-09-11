#include<iostream>
#include<string>
using namespace std;
int CalculateFectorial(int num){
   if(num == 1){
    return 1;
   };
   return num*CalculateFectorial(num-1);
   
}
int main(){
    cout<<CalculateFectorial(13);
    return 0;
}
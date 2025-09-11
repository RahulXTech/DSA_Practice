#include<iostream>
#include<string>

using namespace std;

void PrintNums(int num){

if(num == 1){
    cout<<num;
    return;
}
cout<<num<<" ";
PrintNums(num-1);
}
int main(){

PrintNums(10);

    return 0;
}
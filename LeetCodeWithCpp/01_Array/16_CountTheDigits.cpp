#include<iostream>
#include<string>
using namespace std;
int CountDigit(int num){
    int count = 0;
    int digit;
    int temp = num;
   while(temp>0){
        digit = temp%10;
        if(num%digit==0){
            count++;
        }
        temp/=10;
    }
    return count;
}
int main(){
int nums = 121;
cout<<CountDigit(nums);
return 0;
}
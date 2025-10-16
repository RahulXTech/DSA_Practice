#include<iostream>
#include<string>

//you have to devide with 4 and if year is like this 2000, 1900 you have to devide 400.

void isLeapYear(int year){
    if((year%400 == 0) || (year%4 == 0 && year %100 != 0)){
        std::cout<<"This is the leap year"<<std::endl;
    }else{
        std::cout<<"This is not leap year"<<std::endl;
    }
};

int main(){
    isLeapYear(200);

    return 0;
}
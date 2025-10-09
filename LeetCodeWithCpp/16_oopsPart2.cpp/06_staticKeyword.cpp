#include<iostream>
#include<string>
using namespace std;

//counter value will be not change it will be fix in memory.
void count(){
    static int coutnt =0;
    coutnt++;
    cout<<coutnt<<endl;
};


int main(){
count();count();count();count();count();

    return 0;
}
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int mySqrt(int x) {
        for(int i =0; i<=x; i++){
            if(i*i == x){
                cout<<"Your root of squire answer is : "<<i;
                return 0;
            }
        }
        return 0;
    }


int main(){
mySqrt(6);
    return 0;
}
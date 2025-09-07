#include<iostream>
using namespace std;
 void updateBitUser(int num, int i, bool val){
    num = num & ~(1<<i); //clear ith bit
    num = num|val<<i;
    cout<<num<<endl;
    
};
int main(){
    updateBitUser(7,2,0);
    return 0;
}

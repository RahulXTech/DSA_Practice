#include<iostream>
#include<vector>
using namespace std;

// int numTiling(int n){
//     if(n==0 || n==1) return 1;
//     int horizontal = numTiling(n-2);
//     int vertical = numTiling(n-1);
//     int total = horizontal + vertical;
//     return total;
// }

//simple way.............
int numTiling(int n){
    if(n==0 || n==1) return 1;
    
    return numTiling(n-1)+numTiling(n-2);
}


int main(){
    cout<<numTiling(5);
    
    return 0;
}
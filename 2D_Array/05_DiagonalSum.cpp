#include<iostream>
#include<string>    
using namespace std;

int DiagonalSum(int arr2D[][4], int n){
    int PD = 0;
    for(int i=0; i<n; i++){
        PD += arr2D[i][i];
    };
    return PD;
}



int main(){
int arr[4][4] ={{2,4,6,3},
                {7,3,8,2},
                {9,2,5,3},
                {8,3,1,6}};

cout<<DiagonalSum(arr,4);
    return 0;
}
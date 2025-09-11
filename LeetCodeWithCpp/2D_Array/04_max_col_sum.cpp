#include<iostream>
#include<climits>
using namespace std;


int MaxSumOfCol(int arr[][7], int rows, int cols){
    int MaxColVal = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j =0; i<cols; j++){
        MaxColVal +=MaxSumOfCol[i][];

        }
    }
    
}

int main(){
int 2Darray[5][7] = {
    {3,5,7,1,2,8,3},
    {6,7,2,3,2,6,3},
    {2,4,5,0,44,6,3},
    {9,1,8,3,66,6,3},
    {1,0,0,22,2,6,3},
};


    return 0;
}
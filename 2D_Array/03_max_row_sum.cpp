#include<iostream>
#include<string>
#include <climits>  // Required for INT_MIN
using namespace std;

int MaxRowSum(int matrix[][4], int rows, int cols){
    int maxsum  = INT_MIN;
        for(int i=0; i<rows; i++){
    int RowSum = 0;
            for(int j=0; j<cols; j++){
                RowSum += matrix[i][j];
            }
            if(maxsum < RowSum){
                maxsum = RowSum;
            }
        }
        return maxsum;
};
int main(){
    int matrix[3][4] = {{3,2,6,1},
                        {6,8,9,3},
                        {6,8,9,1}};

    cout<<MaxRowSum(matrix, 3, 4);
    
    return 0;
}
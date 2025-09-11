#include<iostream>
#include<string>
#include <utility> // For std::pair
using namespace std;
bool Linear(int matrix[][4], int row, int col, int target){//You can skip the row values but you have to fill column value. it's compulsory to take values
    for(int i=0; i< row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j] == target){
                cout<<"Your target is : "<<matrix[i][j]<<" and index number is "<<i<<","<<j;
                // STL pair 
                pair<int, int> tars;
                tars.first = i;
                tars.second = j;
                cout<<tars.first<<tars.second;
                return true;
            }
        }
    }
    cout<<"Target is not found sorry!!!!!";
    return false;
};

int main(){
int matrix[3][4] = {
                    {3,5,2,6},
                    {6,8,2,6},
                    {8,1,0,2}};
int target  = 6;
Linear(matrix, 3, 4, target);

pair<int, int> vals;
    return 0;
};

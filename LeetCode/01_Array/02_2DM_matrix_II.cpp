#include<iostream>
#include<string>
#include<vector>
//LeetCode
// https://leetcode.com/problems/search-a-2d-matrix-ii/description/?envType=study-plan-v2&envId=top-100-liked
using namespace std;

bool Matrix2(vector<vector<int>> mat, int target){
    //It will be count row values.
int m = mat.size();
//It will be coutn column values.
int n = mat[0].size();

int row = 0;
int col = n-1;

while(row<m && col>=0){
    if(target == mat[row][col]){
        return true;
    }else if (target < mat[row][col]){
        col--;
    }else{
        row++;
    }
}
return -1;
};

int main(){

vector<vector<int>>matrix={{1,4,7,11,15},
                           {2,5,8,12,19},
                           {3,6,9,16,22},
                           {10,13,14,17,24},
                           {18,21,23,26,30}};
int target = 16;


cout<<Matrix2(matrix, target);
return 0;
};


#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

vector<vector<int>> SpiralMatrix = {
                                    {1,2,3,4},
                                    {5,6,7,8},
                                    {9,10,11,12},
                                    {13,14,15,16} };
int SRow = 0;
int SCol = 0;
int n = SpiralMatrix.size();
int m = SpiralMatrix[0].size();
int ERow = n - 1;
int ECol = m - 1;


cout<<SpiralMatrix[ERow][ECol];

return 0;
};
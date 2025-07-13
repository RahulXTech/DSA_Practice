// LeetCode problem.
// https://leetcode.com/problems/search-a-2d-matrix/
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
vector<vector<int>> Matrix = {
                            {2,5,8,10,12},
                            {15,19,22,24,27},
                            {30,33,34,36,39},
                            {40,42,43,49,100}};
int Target = 42;

 int SR = 0;
 int ER = Matrix.size()-1;
 int midR = SR + (ER-SR)/2;

for(int i =0; i< ER; i++){
    if(Matrix[midR][i] >= Target || Matrix[midR][])
}

cout<<Matrix.size();

    return 0;
}
#include<iostream>
#include<string>
using namespace std;

int main(){
//Creation of 2D array.
int matrix[2][4] = {{3,6,4,7},{7,3,9,5}};
cout<<"Your values of arr is : "<< matrix[1][1]<<endl;

int secondMat[2][3] = {{3,5,1},{3,8,9}};
int row = 2;
int col = 3;
cout<<"Second 2D array values is : "<<secondMat[1][1]<<endl;

//Print all element in array.
for(int i = 0; i<row; i++){
    for(int j = 0; j<col; j++){
        cout<<secondMat[i][j];
    }
    cout<<endl;
}
int arr2D[2][3];

// User input in 2D array
// for(int i =0; i<row; i++){
//     for(int j = 0; j<col; j++){
//         cin>>arr2D[i][j];
//     }
// }

//Output of user i

return 0;
}
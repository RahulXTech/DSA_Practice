#include<iostream>
#include<string>

using namespace std;

int main(){
    int row,col;
cout<<"Enter the row : ";
cin>>row;
cout<<"Enter the col : ";
cin>>col;

int* *matrix = new int*[row];
for(int i =0; i<col; i++){
    matrix[i] = new int[col];
}

//Data store.
int x =2;
for(int i=0; i<col; i++){
    for(int j = 0; j<row; j++){
        matrix[i][j] = x+=2;
        cout<<matrix[i][j]<<"  ";
    }
    cout<<endl;
}



    return 0;
}
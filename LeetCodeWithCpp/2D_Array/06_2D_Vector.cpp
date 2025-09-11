#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){
    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}};

    for(int i =0; i<=vec.size(); i++){
        for(int j =0; j<=vec.size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;

    };


    return 0;
};
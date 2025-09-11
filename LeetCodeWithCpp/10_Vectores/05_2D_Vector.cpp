#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<vector<int>>vec1 = {
    {1,2,3,4,52,1,2,1,34},
    {5,6,7,8},
    {9,10,11,12}
};
for(int i=0; i<vec1.size(); i++){
    for(int j = 0; j<vec1[i].size(); j++){
        cout<<vec1[i][j]<<"  ";
    }
    cout<<endl;
}
return 0;
}
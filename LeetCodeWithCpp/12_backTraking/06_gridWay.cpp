#include<string>
#include<vector>
#include<iostream>
using namespace std;

int gridWays(int r, int c, int n, int m, string ans){
    if(r==n-1 && c==m-1){
        cout<<ans<<" "<<endl;
        return 1;
    }  
    if(r>=n || c>=m) return 0;
    //right
    int val2 = gridWays(r, c+1, n, m, ans+'R');
    //down
    int val1 = gridWays(r+1, c, n, m, ans + 'L');

    return val1+val2;
}

int main(){
    int NRows = 3;
    int NCols = 3;
    string ans = "";

    cout<<"Total_Count :"<< gridWays(0,0,NRows,NCols,ans);

    return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;


int identifyCelebrity(vector<vector<int>>arr){
    int n = arr.size();
    stack<int>s;
    for(int i = 0; i<n; i++){
        s.push(i);
    }
    while(s.size() > 1){
        int i = s.top();
        s.pop(); 
        int j = s.top();
        s.pop();
        if(arr[i][j] == 0){
            s.push(i);
        }else{
            s.push(j);
        }
    }
    int celb = s.top();

    for(int i=0; i<n; i++){
        if((i != celb ) && (arr[i][celb] == 0 || arr[celb][i] == 1)){
            return -1;
        }
    }
    return celb;
}
int main(){
    vector<vector<int>> arr = {{0, 1, 0},
                            {0, 0, 0},
                            {0, 1, 0}
                            };
    int ans = identifyCelebrity(arr);
    cout<<"Celebrity is : "<< ans<<endl;



    return 0;
}
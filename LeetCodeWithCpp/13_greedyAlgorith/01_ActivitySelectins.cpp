#include<iostream>
#include<string>
#include<vector>
using namespace std;

int maxActivitySelection(vector<int>start, vector<int>end){
    int ans = 1;
    cout<<"Selecting activity : A0"<<endl;
    int endPoint = end[0];

    for(int i=0; i<start.size(); i++){
        if(start[i]>=endPoint){
            cout<<"Selecting activity : A"<<i<<endl;
            ans++;
            endPoint = end[i];
        }
    }
    return ans;
}
int main(){
    vector<int>start = {1,3,0,5,8,5};
    vector<int>end = {2,4,5,6,7,9,9};

    cout<<"Total Activitye is : "<<maxActivitySelection(start,end);
    
    return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include<bits\stdc++.h>
using namespace std;

bool compair(pair<int, int>p1, pair<int, int>p2){
    return p1.second > p2.second;
}
int jobSequencing(vector<pair<int, int>>jobs){
     sort(jobs.begin(), jobs.end(), compair);
    int safeDeadline = jobs[0].first;
    int profit = jobs[0].second;

    for(int i=1; i<jobs.size(); i++){
        if(jobs[i].first > safeDeadline){
            profit+=jobs[i].second;
            safeDeadline = jobs[i].first;
        }
    }
    return profit;
}
int main(){
    int n = 4;
    vector<pair<int, int>>jobs(n, make_pair(0,0));

    jobs[0] = make_pair(4,20);
    jobs[1] = make_pair(1,10);
    jobs[2] = make_pair(1,40);
    jobs[3] = make_pair(1,30);

   cout<<"Total profit is : "<<jobSequencing(jobs)<<" under the deadline"<<endl;
   
 
    return 0;
}
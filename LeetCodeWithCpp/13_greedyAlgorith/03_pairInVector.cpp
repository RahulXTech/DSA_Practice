#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<bits\stdc++.h>

using namespace std;
bool compair(pair<int, int>p1, pair<int, int>p2){
    return p1.second < p2.second; ///assending order.
}

int main(){
    int start[] = {0,1,3};
    int end[] = {9, 2, 4};
    vector<pair<int, int>>activity(3, make_pair(0,0));

    activity[0] = make_pair(0, 9);
    activity[1] = make_pair(1, 3);
    activity[2] = make_pair(3, 4);

    for(auto element : activity){
        cout<<element.first<<" "<<element.second<<endl;
    }
    cout<<"--------------After sorting-------------------"<<endl;
    sort(activity.begin(), activity.end(), compair);
    
    for(auto element : activity){
        cout<<element.first<<" "<<element.second<<endl;
    }
    return 0;
}
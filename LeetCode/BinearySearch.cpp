#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
vector<int>arr = {2,4,6,8,11,14,23,26,27};
int n=arr.size();
int target = 23;

int start = 0;
int end = n-1;

while( start <= end ){

int mid = start + (end - start) / 2;

//  int mid = (start + end)/2;
        // cout<<"your answer"<<endl;
    if(arr[mid] == target){
        cout<<"Target found at index : "<<mid;
        // return mid;
        return 0;
    }else if(arr[mid] > target){
        end = mid -1;
    }else{
        start = mid +1;
    }   
}
    return 0;
}

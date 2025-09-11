#include<iostream>
#include<string>
#include<vector>

using namespace std;

int BinearSearch(vector<int> arr, int target){
    int left = 0;
    int right = arr.size()-1;
while(left<=right){
    int mid = (right + left)/2;
    if(arr[mid]==target){
        cout<<"Your target is available on index : "<<mid<<endl;
        return 1;
    }
    if ( target > arr[mid] ){
        mid++;
        left=mid;

    }
    if(target<arr[mid]){
        mid--;
        right=mid;

    }
}
return -1;
};
int main(){

vector<int> arrs = {2,3,4,5,6,7,8,9,10,12};

cout<<BinearSearch(arrs, 112);
// cout<<"your code is working";
    return 0;
}
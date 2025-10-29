#include<iostream>
#include<string>
#include<vector>

using namespace std;

int binarySearch(vector<int>arr, int target){
    int st = 0;
    int end = arr.size()-1;
    while(st <= end){
        int mid = (st + end) / 2;
        if(tar > arr[mid]){
            st = mid +1;
        }else if(tar < arr[mid]){
                end = mid - 1;
        }else{
            return mid;
        }
        }
        cout<<"Invalid target.";
        return -1;
    }


int main(){
    
vector<int>arr = {-1, 0, 3, 4, 5, 9, 12, 14};
int target = 14;
cout<<"Yout target index number is : "<<binarySearch(arr);
    return 0;
}
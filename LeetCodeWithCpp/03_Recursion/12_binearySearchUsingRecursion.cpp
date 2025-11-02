//Assignment question......
// Question 1 : Write a recursive function to perform Binary Search. 
// Input : arr[ ] = {1, 2, 3, 4, 5, 6, 7}, n = 7, key = 5 
// Output : 4 (index of key) 
// *Use the starting index & ending index logic used in rotated, sorted array Qs. 

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int binearySearchRecursion(vector<int>&arr, int target, int start, int end){
    if(start>end) return -1;

    int mid = start + (end - start)/2;

    if(arr[mid]==target){
        return mid;
    }else if(arr[mid]<target){
        return binearySearchRecursion(arr, target, mid++, end);
    }else{
        return binearySearchRecursion(arr, target, start, mid--);
    }
}

int main(){
vector<int>arr = {2,5,8,9,11,24,27,34,29,222,432,675};
int target = 24;
cout<<"your target at index : "<<binearySearchRecursion(arr,target,0,arr.size()-1);

    return 0;
}
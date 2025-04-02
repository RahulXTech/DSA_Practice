#include<iostream>
#include<string>
using namespace std;

int main(){

int arr[] = {10,20,35,40,60,80};
int n = sizeof(arr) / sizeof(int);
int target = 35;

//This is woriing linearSearch for the find target element.
for(int i = 0; i<n; i++){
    if(arr[i] == target){
        cout<<"your index number is : "<<i<<" and a values of indes number is : "<<arr[i];
    }
}

int start = arr[0];
int end = arr[n-1];
int mid = (arr[0] + arr[n-1])/2;

while(start > end){
    if(arr[mid] == target){
        cout<<"your target index number is : "<<mid;
    }
    else if (arr[mid] < target){
        mid = start + mid+1;
    }
    else if (arr[mid] > target){
        mid = end + mid+1;
    }
}
    return 0;
}
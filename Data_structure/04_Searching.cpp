#include<iostream>
#include<string>
using namespace std;

int main(){

int arr[] = {10,20,35,40,60,80};
int n = sizeof(arr) / sizeof(int);

int target = 80;
//This is woriing linearSearch for the find target element.
// for(int i = 0; i<n; i++){
//     if(arr[i] == target){
//         cout<<"your index number is : "<<i<<" and a values of indes number is : "<<arr[i];
//     }
// }
int start = 0;
int end = n-1;
// int mid;

while(start <= end){
int mid = (start + end)/2;
// cout<<mid;
    if(arr[mid] == target){
        cout<<"Your targe is available index number :  "<<mid;
        return 0;
    }
    if (arr[mid] < target){
        start = mid+1;

    }
    if (arr[mid] > target){
        end =mid-1;
    }
}
    return 0;
}
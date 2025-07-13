#include<iostream>
#include<string>

using namespace std;

int main(){

int arr[] = {2,2,3,4,4,6,6,7,7,8,8};

int n = sizeof(arr) / sizeof(arr[-1]);

int mid;

while(arr[0] <= arr[-1]){
    int sta = 1;
    int end = n -1;
    mid = (arr[end] +arr[sta]) / 2;

    if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid + 1]){
        cout<<"your total number: "<<mid<<endl;
        cout<<"your total number: "<<arr[mid -1]<<endl;
        cout<<"your total number: "<<arr[mid];

    return 0;
    }

    if(mid%2 == 0){
        cout<<"it's apply for the even number";
        if(arr[mid -1] == arr[mid]) end = mid -1;
        else sta = mid + 1;
    }else{
        if(arr[mid + 1] == arr[mid]){
        cout<<"it'r";
            sta = mid +1;
        }else end = mid-1; 

           }
}
    return 0;
}
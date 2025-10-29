#include<iostream>
#include<vector>
using namespace std;
void bubbleSortAssendingOrder(vector<int>&arr, int n);
void printArrays(vector<int>arr, int n);

void printArrays(vector<int>arr, int n){
    for(int i = 0; i<= n-1; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

//Please focus this loop is working only second loop.
void bubbleSortAssendingOrder(vector<int>&arr, int n){
    for(int i =0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
    printArrays(arr, n);
};
void bubbleSortDesendingOrder(vector<int>&arr, int n){
    for(int i =0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] < arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
    printArrays(arr, n);
};


int main(){
    vector<int>arr = {6,5,4,3,2};
    int n = arr.size();
    
    bubbleSortAssendingOrder(arr,n);
    bubbleSortDesendingOrder(arr, n);

    return 0;
}
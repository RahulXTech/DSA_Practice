#include<iostream>
#include<vector>
using namespace std;
void countingSort(vector<int>arr, int n);
void printElements(vector<int>arr, int n);


void printElements(vector<int>arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
};

void countingSort(vector<int>arr, int n){
    for(int i=0; i<n; i++){

    }


    printElements(arr,n);
}


int main(){
vector<int>arr = {4,3,5,2,2,1,0,3,5,7,9};
int n = arr.size();
countingSort(arr, n);

return 0;
}
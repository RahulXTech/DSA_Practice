#include<iostream>
#include<vector>
using namespace std;

void printElements(vector<int>arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionSort(vector<int>arr, int n){
    for(int i =0; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev] > curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        arr[prev+1] = curr;
        }
    }
    printElements(arr,n);
}

int main(){
vector<int>arr =  {2,4,3,5,7,8,1,2};
int n = arr.size();
insertionSort(arr, n);

    return 0;
}
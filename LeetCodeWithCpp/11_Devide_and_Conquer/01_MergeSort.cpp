#include<iostream>
#include<string>
#include<vector>
using namespace std;

void mergeSort(int arr[], int si, int ei){
    //mid = (si + ei)/2; but it can create data over flow in the case of large size array. (barack datatype capacity ) 
    if(si>=ei) return;
    int mid = si + (ei-si) / 2;

    mergeSort(arr, si, mid); //left half
    mergeSort(arr, mid+1, ei); //right half

}
void merge(int arr[], int si, int mid, int ei){
    vector<int>temp;
    int i = si;
    int j = mid+1;

    while(i<=mid&&j<=ei){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }
    //vector -> org arr
    for(int idx = si; x=0; idx<=ei; idx++){ //org arr
       arr[idx] = temp[x]
    }
};

int main(){
    int arr[6] = {6,3,7,5,2,4};
    int n = 6;

    mergeSort(arr, 0, n-1);
return 0;
}

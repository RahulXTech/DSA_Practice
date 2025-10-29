#include<iostream>
#include<vector>
using namespace std;
//Squire array
void SquaresorArr(vector<int>&arr2){
    int n = arr2.size();
    for(int i=0; i<n; i++){
        arr2[i] *=arr2[i];
    }

}
//Sorting array
void SortintArr(vector<int>&arr){
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
};
//master calling function
void SortingElement(vector<int> &arr2){
    SquaresorArr(arr2);
    SortintArr(arr2);
};
int main(){
vector<int>arr1 = {-4,-1,0,3,10,2};
SortingElement(arr1);
for(int i = 0; i<arr1.size(); i++){
    cout<<arr1[i]<<" ";
}
    return 0;
}
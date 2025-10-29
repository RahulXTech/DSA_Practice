#include<iostream>
#include<vector>
using namespace std;

void selectionSortAssendingOreder(vector<int>&arr, int n);
void selectionSortDesendingOrder(vector<int>&arr, int n);
void printSortedElement(vector<int>arr, int n);

//0(n*logn) is better than 0(n^2)

void printSortedElement(vector<int>arr, int n){
    for(int i = 0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSortAssendingOreder(vector<int>&arr, int n){
    for(int i = 0; i<n; i++){
        int minimumIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minimumIndex]) minimumIndex = j;
        }
        swap(arr[i], arr[minimumIndex]);
    }
    printSortedElement(arr, n);
}

void selectionSortDesendingOrder(vector<int>&arr, int n){
    for(int i =0; i<n; i++){
        int maxidx = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] > arr[maxidx]) maxidx = j;
        }
        swap(arr[i], arr[maxidx]);
    }
    printSortedElement(arr,n);
}

int main(){
vector<int> arr = {2,5,7,1,8,9,3,5,8,0};
int n = arr.size();
selectionSortAssendingOreder(arr, n);
selectionSortDesendingOrder(arr, n);

    return 0;
}
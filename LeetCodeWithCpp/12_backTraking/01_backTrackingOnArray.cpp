#include<iostream>
#include<string>
#include<vector>
using namespace std;
void changeArrayUsingBacktrack(int arr[], int n, int i);
void printElements(int arr[], int n);

void changeArrayUsingBacktrack( int arr[], int n, int i){
            if(i==n){
                printElements(arr, n);
                return;
            }
            arr[i] = i+1;
            changeArrayUsingBacktrack(arr, n, i+1);
            arr[i]-=2;
}

void printElements(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10] = {0};
    int n = 10;
    changeArrayUsingBacktrack(arr,n,0);
    printElements(arr,n);

    return 0;
}
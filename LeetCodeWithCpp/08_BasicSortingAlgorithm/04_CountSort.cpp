#include <iostream>
#include <climits>
using namespace std;

void printElements(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countingSort(int arr[], int n){
    int minVal = INT_MAX, maxVal = INT_MIN;

    // Find min and max
    for(int i = 0; i < n; i++){
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    int range = maxVal - minVal + 1;
    int* freq = new int[range](); // dynamic array, initialized to 0

    // Count frequency
    for(int i = 0; i < n; i++){
        freq[arr[i] - minVal]++;
    }

    // Reconstruct sorted array
    for(int i = minVal, j = 0; i <= maxVal; i++){
        while(freq[i - minVal] > 0){
            arr[j++] = i;
            freq[i - minVal]--;
        }
    }

    delete[] freq; // free memory
    printElements(arr, n);
}
int main(){
    int arr[] = {4, 3, 5, 2, 2, 1, 0, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    countingSort(arr, n);

    return 0;
}

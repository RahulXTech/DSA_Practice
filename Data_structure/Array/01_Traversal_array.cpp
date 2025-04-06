#include <iostream>
#include <string>

using namespace std;

int main()
{
    //================Traversal opratoin apply on array.===================
    // Traversing an array means visiting each element of the array to perform some operation, such as printing, modifying, or calculating a value based on the elements.
    int arr[] = {2,3,4,5,4,3,4,3,4};
    int n = sizeof(arr) / sizeof(int);
    string name = "Rahul_kumar";

    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    //=============Insertion opration apply on array.======================
    // Insertion in an array involves adding an element at a specific position
    // Here are the different methods to insert elements in an array

    int pos = 2876872;
    arr[0] = pos;

    return 0;
}
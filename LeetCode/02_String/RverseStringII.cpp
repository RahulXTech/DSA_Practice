#include<iostream>
#include<string>
#include<vector>
using namespace std;

string ReverseString2(string inputString, int k) {
    int n = inputString.length();

    for (int i = 0; i < n; i += 2 * k) {
        // Determine the end of the section to reverse
        int left = i;
        int right = min(i + k - 1, n - 1); // Ensure we don't go out of bounds
        // Reverse the characters from left to right
        while (left < right) {
            swap(inputString[left], inputString[right]);
            left++;
            right--;
        }
    }

    return inputString;
}

int main() {
    string strr = "123456789";
    cout << "Input : " << strr << endl;
    cout << "Output : " << ReverseString2(strr, 4);
    return 0;
}

#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
// //it is converting number into charector.
// int num = 97;
// cout<<char(num)<<endl;

// //This is converting charector into number.
// string cha = "rdsf";
// cout<<"Char to num : "<<int('a')<<endl;

vector<string>arr = {"ab", "c"};
int i=0;
while(i<arr.size()){
    for(char ch : arr[i]){
        cout<<ch<<endl;
    }
    i++;
}
return 0;
}
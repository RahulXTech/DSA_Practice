#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

int NumWithEvenNum(vector<int>&arr){
    int count=0;
    for(int j=0; j<arr.size(); j++){
        string ans = to_string(arr[j]);
        if(ans.length()%2 == 0){
            count++;
        }
    }
return count;
};

int main(){
    //there is two even number elent avlaible according to lenght()
vector<int>arra = {12,345,2,6,7896};
cout<<NumWithEvenNum(arra);

return 0;
}
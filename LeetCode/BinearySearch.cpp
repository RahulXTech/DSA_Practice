#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

vector<int>arr = {2,4,5,7,9,11,15,16,19,21,25,32,35,38};

 int n=nums.size(), start = 0, end = n-1, mid;
 int target = 32;

        while(target = ){
            mid = (start + end)/2;
            if(target == mid){
                cout<<"target matched in first condition";
            }else if(mid < target){
                start = mid +1;
            }else if(mid > target){
                end  = mid - 1;
            }else cout<<"Your target is not maching";
        }

    return 0;
}
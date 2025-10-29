#include<iostream>
#include<string>
#include<vector>

using namespace std;
 int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp=0;
        int rp=height.size()-1;
        while(lp<rp){
            int w = rp -lp;
            int ht = min(height[lp],height[rp]);
            int currWater = w * ht;
            maxWater = max(maxWater, currWater);

            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
 }
int main(){
    vector<int> height = {2,3,5,8,2,9,4,9};
     cout<<maxArea(height)<<endl;

    return 0;
}
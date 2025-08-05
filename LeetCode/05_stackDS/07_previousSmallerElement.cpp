#include<iostream>
#include<string>
#include<vector>
#include<stack>

using namespace std;
    void previousSmallestElem(vector<int>elements){
    vector<int>ans(elements.size(), 0);
    stack<int>s;

    for(int i = 0; i<elements.size(); i++){
        while(s.size()>0 && elements[i] < s.top()){
            s.pop();
        }
        if(s.empty()){
            ans[i] = -1;
        }else{
            ans[i] = s.top();
        }
        s.push(elements[i]);
        }


        for(int vals : ans){
            cout<<vals<<" , ";
        }
    };
int main(){
vector<int>arr = {3,1,0,8,6};
previousSmallestElem(arr);

return 0;
}
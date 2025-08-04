#include<iostream>
#include<string>
#include<vector>
#include<stack>

using namespace std;

class Element{
    public:
        void NextGreaterElement(vector<int>elems){
            vector<int>ans(elems.size(), 0);
            stack<int>s;
                for(int i=elems.size()-1; i>=0; i--){
                    while(s.size() > 0 && s.top() <= elems[i]){
                        s.pop();
                    }
                    if(s.empty()){
                        ans[i] = -1;
                    }else{
                        ans[i] = s.top();
                    }
                s.push(elems[i]);
                }
                for(int i=0; i<ans.size(); i++){
                    cout<<ans[i]<<" ";
                }
            }
};
int main(){
    vector<int>values = {6,8,0,1,3};
Element el;
el.NextGreaterElement(values);
// el.printEmidiateGretestELements();


    return 0;
}
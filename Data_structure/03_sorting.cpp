#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
vector<int>elem = {2,4,6,8,3,11,9,12,10};


int n = elem.size();

for (int i = 0; i < n; i++)
{
  for (int j = 0; j < n; j++)
  {
   if(elem[j]>elem[j+1]){
    swap(elem[j], elem[j+1]);
   }
  }
  
}
for(int p : elem){
    cout<<p<<endl;
}
    return 0;
}
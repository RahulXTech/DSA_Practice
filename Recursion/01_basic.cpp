#include<iostream>
#include<string>
using namespace std;

void Nums(int n){
    if(n==1){
        cout<<"1\n";
        return;
    };
   cout<<n<<endl;
   Nums(n-1);
};
int main(){
    Nums(10);
    return 0;
};
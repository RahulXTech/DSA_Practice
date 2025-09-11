#include<iostream>
#include<string>
using namespace std;

int Febonachi(int n){
    if(n == 0 || n == 1){
        return n;
    }
   return Febonachi(n-1) + Febonachi(n-2);
};

int main(){
int n;
cout<<"Enter the values : ";
cin>>n;
for(int i = 0; i<n; i++){
    cout<<Febonachi(i)<<endl;
};
 return 0;
}
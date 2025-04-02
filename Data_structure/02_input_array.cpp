#include<iostream>
#include<string>
using namespace std;

int main(){


int n;
int array[10];
cout<<"Enter the array size : "<<endl;
cin>>n;
cout<<"Enter the array element values : ";
for(int i = 0; i<n; i++){
    cin>>array[i];
}

for (int i = 0; i < n; i++)
{
    cout<<array[i];
}
    return 0;
}
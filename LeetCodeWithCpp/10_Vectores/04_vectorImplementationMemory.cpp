#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>vec1 = {1,2,3,4};
    cout<<"Size : "<< vec1.size()<<endl; //4
    cout<<"Capacity : "<<vec1.capacity()<<endl; //4
    vec1.push_back(5);
    cout<<"Size : "<<vec1.size()<<endl; // 5
    cout<<"Capacity : "<<vec1.capacity()<<endl; // 8 It wiil be double if you will try to decrease the size then also it will stay 8 capacity.

    return 0;
}
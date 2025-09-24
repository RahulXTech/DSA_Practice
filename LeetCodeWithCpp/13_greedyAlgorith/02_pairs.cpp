#include<iostream>
#include<string>
#include<utility>
#include<vector>
using namespace std;



int main(){
    //simple structute of pair in cpp
pair<int, string>student(1, "rahu");
cout<<student.first<<' '<<student.second<<endl;

    //pair in vector
vector<pair<int, string>>stu;

stu.push_back({1, "Mohit"});
stu.push_back({2, "amit"});
stu.push_back({3, "rakesh"});
stu.push_back({4, "rahul"});
stu.push_back({5, "rohit"});

for(auto e: stu){
    cout<<e.first<<" "<<e.second<<endl;
}
    return 0;
}
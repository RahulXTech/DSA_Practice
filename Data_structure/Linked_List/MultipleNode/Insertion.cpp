#include<iostream>
#include<string>
using namespace std;
struct ListNode{
//Structure is a user define data types  in c++.
    int val;
    ListNode* next;
    public:
    ListNode(int n): val(n), next(nullptr){};
    int sum(int a , int b){
        return a+b;
    }
};

int main(){
    ListNode* obj = new ListNode(5);

    return 0;
}
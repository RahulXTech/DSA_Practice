//Goldman sachs
#include<iostream>
#include<string>
using namespace std;


int findPairFriend(int n){

    if(n==1 || n==2) return n;
    return findPairFriend(n-1) + findPairFriend(n-2)*n-1;

}




int main(){

    cout<<findPairFriend(4);
    return 0;
}
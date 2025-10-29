#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;
int main(){


//=======Using Swap method=======
string name = "Rahul_kumar";
// int start = 0;
// int n = name.length();
// int end = n-1;
// while (start < end)
// {
//     swap(name[start], name[end]);
//     start++;
//     end--;
// }
// cout<<name;

//=========Using reverse method ============
reverse(name.begin(), name.end()); //iterators

cout<<"Using reverse method : "<<name;




    return 0;
}
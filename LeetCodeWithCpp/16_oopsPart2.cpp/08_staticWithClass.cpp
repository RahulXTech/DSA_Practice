#include<iostream>
#include<string>
using namespace std;

class Example{
    public:
        static int count;
};

int Example::count = 0;

int main(){
    Example obj1;
    Example obj2;
    Example obj3;

    cout<<obj1.count++<<endl;
    cout<<obj2.count++<<endl;
    cout<<obj3.count++<<endl;



    return 0;
}
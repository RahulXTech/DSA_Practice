#include<iostream>
#include<string>
using namespace std;

class A{
    private:
        string privateMassage = "praveteMessage........";
        friend class B;
        friend void revelSecreateByFunction(A &orgs);
};
class B{
    public:
        void getSecreate(A &org){
            cout<<org.privateMassage<<endl;
        }
};

void revelSecreateByFunction(A &orgs){
    cout<<orgs.privateMassage<<endl;
};
//friend class and friend function can get the private & protected data;
int main(){
    A obj1;
    B obj2;
    
    // obj2.getSecreate(obj1);
    revelSecreateByFunction(obj1);

    return 0;
}
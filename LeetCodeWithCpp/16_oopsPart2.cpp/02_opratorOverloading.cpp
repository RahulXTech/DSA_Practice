#include<iostream>
#include<string>
using namespace std;
class Complex{
        int real;
        int img;
    public:
        Complex(int r, int i){
            real = r;
            img = i;
        }
        void showNum(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
            
    //Oprator overloading in cpp
    Complex operator - (Complex &c2){
        int resRel = this->real = c2.real;
        int resImg = this->img = c2.img;
        Complex c3(resRel, resImg);
        cout<<" res= ";
        c3.showNum();
    }

};
int main(){
    Complex obj1(22, 44);
    Complex obj2(52, 60);

    obj1.showNum();
    obj2.showNum();
    

    obj1 - obj2;
    
    return 0;
};
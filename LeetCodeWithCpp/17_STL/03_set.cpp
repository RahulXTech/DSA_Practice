#include<iostream>
#include<set>
using namespace std;
// Only Unique value will be stored
// Store value in sorted order (ascending).
// Insertion, deletion, and search operations have algorithm (O(log n)), making them fast for most use cases.
// Generally Implemented using Red-Black Tree
// We can sort it in descending order also using greater<type>
class Person{
    public:
        string name;
        int age;
    bool operator < (const Person &other)const{
        return age<other.age;
    }
};

int main(){
    set<int>s;//store in assending order.
    set<int, greater<int>>s1; // store in deassending order.
    s.insert(100);
    s.insert(10);
    s.insert(20);
    s.insert(60);
    s.insert(10); //it will Ignor due to dublicate element.

// it will print sorted order 
    for(auto iterator = s.begin(); iterator != s.end(); iterator++){
        cout<<*iterator<<" ";
    }
//Search the element.   
    //find
    if(s.find(1300) != s.end())
        cout<<"Present \n";
    else
        cout<<"Absetn \n";

//count
    if(s.count(100))//count will return 1(1==True) // that'why if condition will run.
        cout<<"Present\n";
    else
        cout<<"Abset\n";
//count
    cout<<s.count(100)<<endl; //return: 0 or 1

//Delete
    s.erase(10);

    set<Person>s3;
    Person p1, p2, p3, p4;
    p1.name = "Rahul", p1.age = 22;
    p2.name = "Sahul", p2.age = 25;
    p3.name = "Jahul", p3.age = 26;
    p4.name = "Jahul", p4.age = 26;

    s3.insert(p1);
    s3.insert(p2);
    s3.insert(p3);

    for(auto itre = s3.begin(); itre != s3.end(); itre++){
        cout<<(*itre).name<<" "<<(*itre).age<<" "<<endl;
    }
    for(auto x : s3){
        cout<<x.name<<" "<<endl;
    }
    return 0;
}
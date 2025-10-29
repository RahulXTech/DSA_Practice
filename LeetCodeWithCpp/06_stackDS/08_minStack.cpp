#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class MinStack
{
public:
    stack<pair<int, int>> s;
    MinStack()
    {
    }
    void push(int val)
    {
        if (s.empty())
        {
            s.push({val, val});
        }
        else
        {
            int minVal = min(val, s.top().second);
            s.push({val, minVal});
        }
    }

    void pop()
    {
        s.pop();
    }

    int top()
    {
        return s.top().first;
    }

    int getMin()
    {
        return s.top().second;
    }
};

int main(){
MinStack ms;
ms.push(-2);
ms.push(0);
ms.push(-3);
cout<<ms.getMin()<<endl;
cout<<ms.top()<<endl;

return 0;
}
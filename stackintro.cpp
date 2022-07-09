#include <iostream>
#include <vector>
using namespace std;

class stack
{
public:
    vector<int>arr;
    int top;
    // int size;
    stack()
    {
        // this->size = size;
        // arr = new int[size];
        top = -1;
    }

public:
    void push(int element)
    {
        // if (size - top > 1)
        // {
        //     top++;
        //     arr[top] = element;
        // }
        top++;
        arr.push_back(element);
        // else
        // {
        //     cout << "stack overflow " << endl;
        // }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        return false;
    }
    int peek()
    {
        // if (top >= 0 and top < size)
        if(top>=0)
            return arr[top];
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
};
int main()
{
    stack s;
    cout << s.peek() << endl;
    while (!s.isEmpty())
    {
        cout << s.peek() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}
#include<iostream>

using namespace std;

class Stack{
    public:

    int top;

    int arr[100];

    

    Stack(){
        top = -1;
    }

    void push(int x)
    {
        if(top >= 99){
            cout << "stack overflow" << endl;
            return;
        }

        arr[++top] = x;
        cout << "Pushed " << x << " to stack\n";
    }

    int pop()
    {
        if(top <0 ){
            cout << "Stack underflow" << endl;
            return 0;
        }

        return arr[top--];

    }

    int peek()
    {
        if(top < 0){
            cout  << "Stack is empty " << endl;
            return 0;
        }

        return arr[top];
    }

};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    return 0;
}
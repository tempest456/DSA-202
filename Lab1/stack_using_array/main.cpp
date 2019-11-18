#include <iostream>
#define MAX 100

using namespace std;

class Stack{
    private:
        int top;
        int arr[MAX];

    public:
        Stack()
        {
            top = -1;
        }

        ~Stack(){}

        bool isEmpty()
        {
            if (top == -1)
                return true;
            else
                return false;
        }

        bool isFull()
        {
            if (top == MAX-1)
                return true;
            else
                return false;
        }

        void push(int element)
        {
            if(isFull())
                cout<<"Stack Overflow"<<endl;
            else
            {
                top++;
                arr[top] = element;
            }
        }

        int pop()
        {
            if(isEmpty())
            {
                cout<<"Stack Underflow"<<endl;
                return -1;
            }

            else
            {
                int topvalue = arr[top];
                top--;
                return topvalue;
            }
        }

        int Top()
        {
            if(isEmpty())
            {
                cout<<"Stack underflow"<<endl;
                return -1;
            }

            else
            {
                return arr[top];
            }
        }

};

int main()
{
    Stack s;
    cout<<s.isEmpty()<<endl;
    cout<<s.isFull()<<endl;
    s.push(5);
    s.push(100);
    s.push(200);
    s.push(500);
    cout<<s.Top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.Top()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.isFull()<<endl;
    return 0;
}

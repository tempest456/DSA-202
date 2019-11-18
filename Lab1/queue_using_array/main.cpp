#include <iostream>
#define MAX 100
using namespace std;

class Queue{
    private:
        int front;
        int rear;
        char arr[MAX];

    public:

        Queue()
        {
            front = -1;
            rear = -1;
        }

        ~Queue(){}

        bool isEmpty()
        {
            if(front == -1 && rear == -1)
                return true;
            else
                return false;
        }

        bool isFull()
        {
            if(rear == MAX-1)
                return true;
            else
                return false;
        }

        void enqueue(char element)
        {
            if(isFull())
            {
                cout<<"Queue Overflow"<<endl;
            }

            else if(isEmpty())
            {
                front = 0;
                rear = 0;
                arr [rear] = element;
            }

            else
            {
                rear ++;
                arr [rear] = element;
            }
        }

        char dequeue()
        {
            char x;
            if(isEmpty())
            {
                cout<<"Queue Underflow."<<endl;
                return '-';
            }
            else if (front == rear)
            {
                x = arr[front];
                front = -1;
                rear = -1;
                return x;
            }
            else
            {
                x = arr[front];
                front++;
                return x;
            }
        }

        char peekFront()
        {
            if(isEmpty())
            {
                cout<<"Queue underflow."<<endl;
                return '-';
            }
            else
            {
                return arr[front];
            }
        }

        char peekRear()
        {
            if(isEmpty())
            {
                cout<<"Queue underflow."<<endl;
                return '-';
            }
            else
            {
                return arr[rear];
            }
        }
};

int main()
{
    Queue Q;
    cout << Q.isEmpty() << endl;
    cout << Q.isFull() << endl;
    Q.enqueue('a');
    Q.enqueue('b');
    Q.enqueue('c');
    Q.enqueue('d');
    cout << Q.peekFront() << endl;
    cout << Q.peekRear() << endl;
    cout << Q.dequeue() << endl;
    cout << Q.dequeue() << endl;
    cout << Q.dequeue() << endl;
    cout << Q.dequeue() << endl;
    cout << Q.dequeue() << endl;
    cout << Q.peekFront() << endl;
    cout << Q.peekRear() << endl;
    return 0;
}

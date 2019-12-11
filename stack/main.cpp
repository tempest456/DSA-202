#include <iostream>
#include "stack.h"
#define MAX 5

using std :: cout;
using std :: endl;

int count {0};

Stack :: Stack(){
    HEAD = NULL;
}

Stack :: ~Stack(){};

bool Stack :: isEmpty(){
    return (HEAD == NULL);
}

void Stack :: push(int data){
    if (count == MAX){
        cout << "Stack overflow!" << endl;
    }
    else{
        Node *newNode = new Node();
        newNode -> info = data;
        newNode -> next = HEAD;
        HEAD = newNode;
        count++;
    }
}

int Stack :: pop(){
    if (isEmpty()){
        cout << "Stack Underflow" << endl;
        return -1;
    }
    else{
        Node *toDelete;
        int value;
        toDelete = HEAD;
        value = toDelete -> info;
        HEAD = toDelete -> next;
        delete toDelete;
        count--;
        return value;
    }
}

int Stack :: top(){
    if(isEmpty()){
        cout << "Stack Underflow" << endl;
        return -1;
    }
    else{
        return (HEAD -> info);
    }
}

void Stack :: traverse(){
    Node *temp = HEAD;
    while (temp != NULL)
    {
        cout << temp -> info << endl;
        temp = temp -> next;
    }
}

int main(){
    Stack S;
    cout << S.isEmpty() <<endl;
    cout << endl;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(15);
    S.traverse();
    S.push(100);
    cout << endl;
    cout << S.top() << endl;
    cout << S.pop() <<endl;
    cout << S.top() << endl;
    cout << S.pop() <<endl;
    cout << endl;
    S.push(200);
    S.push(300);
    S.push(400);
    S.traverse();
    return 0;
}

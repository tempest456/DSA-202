#include <iostream>

class Node{
public:
  int info;
  Node *next;
};

class List{
private:
  Node *HEAD;
  Node *TAIL;
public:
  List();
  ~List();

  //insertion
  bool isEmpty();
  void addtoHead(int data);
  void addtoTail(int data);
  void add(int data, Node* &predecessor);

  //removal
  void removefromHead();
  void remove(int data);

  bool search(int data);
  void traverse();
  bool retrieve(int data, Node* &outputPtr);
};

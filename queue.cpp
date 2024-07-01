#include <iostream>
#include <queue>
using namespace std;
class Node 
{
  int data;
  Node* next;
  Node (int data)
  {
    this->data = data;
    this->next = NULL;
  }
};
class Queue {
  Node* head;
  Node* tail;
  int size;
  public:
  Queue () {
    this ->head = NULL;
    this ->tail = NULL;
    this ->size = 0;
  }
  void enqueue (int data)
  {
    Node* newnode = new node (data);
    if (this ->head = Null)
    {
      this ->head = this -> tail = newnode;
      this -> tail = newnode;
    }
    this -> size ++;
  }
  void dequeue ()
  {
    if (this -> head = NULL)
    {
      return ;
    }
    else 
    {
      Node* oldHead = this ->head;
      Node* newHead = this ->head->next;
      this ->head = newHead;
      if (this->head == NULL) this ->tail = NULL;
      oldHead ->next = NULL;
      delet oldHead;
      this -> size --;
    }
  }
  int getsize ()
  {
    return this->size;
  }
  boll isEmpty ()
  {
    return this ->head = NULL;
  }
  int front ()
  {
    if (this->head == NULL) return -1;
    return this -> head -> data;
    
  }
};


int main ()
{
  Queue qu;
  qu.enqueue (10);
  qu.enqueue (40);
  qu.enqueue (50);
  qu.dequeue();
  qu.enqueue (30);

  while (not qu.isEmpty ())
  {
    cout << qu.front() << " ";
    qu.dequeue();
  }
  return 0;

}
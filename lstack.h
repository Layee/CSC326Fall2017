
// linked stack
#ifndef LinkedStack_
#define LinkedStack_

#include <iostream>
using namespace std;



class LinkedStack {
   public:
      LinkedStack() {top = 0;}
      ~LinkedStack();
      bool IsEmpty() const {return top == 0;}
      int Top() const;
      void push(const int& x);
      void pop(int& x);
   private:
	   class Node {
		public:
			int data;
			Node *ptr;
		};

      Node *top; // pointer to top node
};


LinkedStack::~LinkedStack()
{// Stack destructor..
   Node *next;
   while (top) {
      next = top->ptr;
      delete top;
      top = next;
      }
}


int LinkedStack::Top() const
{// Return top element.
   if (IsEmpty()) cout << "Stack is empty." << endl;
   else return top->data;
}


void LinkedStack::push(const int & x)
{// Add x to stack.
   Node *p = new Node;
   p->data = x;
   p->ptr = top;
   top = p;
   
}


void LinkedStack::pop(int& x)
{// Delete top element and put it in x.
   if (IsEmpty()) cout << "Stack is empty" << endl;
   x = top->data;
   Node *p = top;
   top = top->ptr;
   delete p;
  
}

#endif;

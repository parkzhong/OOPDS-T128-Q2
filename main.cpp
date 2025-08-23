#include <iostream>
using namespace std;

// Array-based Stack Class handling incoming items

class Stack{
private:
    int top;
    int MAX_SIZE;
    string *items;

public:
   // Constructor
   Stack(int size = 100) {
    MAX_SIZE = size;
    items = new string[MAX_SIZE];
    top = -1;  // Empty Stack because we start counting from 0 
   }

   // Destructor
   ~Stack(){
    delete[] items;
   }

   // Check if stack is empty
   bool isEmpty(){
    return (top == -1); 
   }

   // Check if stack is full
   bool isFull(){
    return (top == MAX_SIZE - 1);
   }

   // Push item onto stack
   void push(string item) {
    if(isFull()) {
        cout << "Error: Inventory is full. Cannot add items.\n";
        return;
    }
     items[++top] = item;
     cout << "Item \"" << item << "\" added to inventory.\n";
  }

  // Pop item from stack
  string pop(){
    if (isEmpty()) {
        cout << "Error: No items in inventory to process.\n";
        return "";
    }
    return items[top--];
  }
  
  // Peek at top item (latest item)
  string peek() {
    if(isEmpty()){
        cout << "No incoming items\n";
        return "";
    }
    return items[top];
  }
};

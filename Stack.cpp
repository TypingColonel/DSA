#include <iostream>
#include "Node.cpp"

class Stack {
  private:
    int size;
    Node* top;
  public:
    Stack() {
      this->size = 0;
      this->top = nullptr;
    }

    int size() {
      return this->size;
    }

    Node* get_top() {
      return this->top;
    }

    void push(int value) {
      Node* new_node = new Node(value);

      if (this->top == nullptr) {
        this->top = new_node;
        this->size ++;
      }

      new_node->previousNode = this->top;
      this->top = new_node;
    }

    Node* pop() {
      if (this->top == nullptr) {
        std::cout << "The stack is empty\n";
        return;
      }

      Node* temp = this->top;
      this->top = this->top->previousNode;
      return temp;
    }
};  
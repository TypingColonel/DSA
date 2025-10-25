#include <iostream>
#include "Node.cpp"

using namespace std;

class Queue {
    public: 
        Node* front;
        Node* tail;

        Queue() {
            this->front = this->tail = nullptr;
        }

        bool is_empty() {
            return this->front == nullptr;
        }

        int size() {
            int i;
            Node* current;
            for (i = 0, current = this->front; current != nullptr; i ++, current = current->previousNode);
            return i;
        }

        void enqueue() {
                      
        }
};
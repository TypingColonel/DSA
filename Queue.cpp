#include <iostream>
#include "Node.cpp"

using namespace std;

class Queue {
    public: 
        Node* front;
        Node* tail;
        int size;

        Queue() {
            size = 0;
            this->front = this->tail = nullptr;
        }

        bool is_empty() {
            return this->front == nullptr;
        }

        int size() {
            return this->size;
        }

        Node* front() {
            return this->front;
        }

        Node* tail() {
            return this->tail;g
        }

        void enqueue(Data data) {
            Node* new_node = new Node(data);
            if (this->front == nullptr) {
                this->front = this->tail = new_node;
                this->size ++;
                return;
            }

            this->tail->previousNode = new_node;
            this->tail = new_node;
            this->size ++;
        }

        Node* dequeue() {
            if (this->tail == nullptr) {
                cout << "The queue is empty\n";
                return nullptr;
            }

            Node* temp = this->front;
            this->front = this->front->previousNode;
            
            if (this->front == nullptr) {
                this->tail = this->front;
            }

            this->size --;
            return temp;
        }
};
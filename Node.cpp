#include <iostream>

using namespace std;

typedef int Data;

class Node {
    public:
        Data data;
        Node* previousNode;
        Node(Data data) {
            this->data = data;
            this->previousNode = nullptr;
        }
};
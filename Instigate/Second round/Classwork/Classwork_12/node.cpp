#include <iostream>

struct Node {
    int value;
    Node* next;
};

void addNumber(int num, Node * root) {
    Node obj;
    obj.value = num;
    obj.next = nullptr;
    if(root = nullptr) {
        root = &obj;
    }
    else {
        Node * temp;
        temp = root;
    }
    while(temp != nullptr) {
        temp = temp -> next;
    }
    temp = &newNode;
}

int maxValue(Node * root) {
    Node * temp;
    int max = 0;
    if()
}

int main() {
    Node* root = nullptr;
    while(true) {
        int num;
        std::cin >> num;
        addNumber(num, root)
    }
}

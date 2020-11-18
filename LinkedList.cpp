#include <iostream>
#include <string>

class Node {
    public:
    Node() 
    {

    }
    Node* next;
    std::string value;
};

class LinkedList {
    public:
    LinkedList()
    {
        
    }
    Node* head;
};

int main() {
    Node *test;
    std::cout << test->next << std::endl;
    delete test;
}
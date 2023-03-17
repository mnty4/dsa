//
// Created by lukas on 12/03/23.
//

struct Node {
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val = val;
    };
};

class LinkedList {
private:
    Node* head_;
    Node* tail_;
public:
    Node* push_back(int val);
    Node* push_front(int val);
    Node* insert_after(int val, Node* node);
    Node* insert_before(int val, Node* node);
    Node* head();
};
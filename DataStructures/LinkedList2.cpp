//
// Created by lukas on 12/03/23.
//
#include "LinkedList2.h";
Node* LinkedList::push_back(int val) {
    if (head_ == nullptr) {
        tail_ = head_ = new Node(val);
    } else {
        Node* temp = tail_;
        tail_->next = new Node(val);
        tail_ = tail_->next;
        tail_->prev = temp;
    }
    return tail_;
}

Node* LinkedList::push_front(int val) {
    if (head_ == nullptr) {
        tail_ = head_ = new Node(val);
    } else {
        Node* temp = head_;
        head_ = new Node(val);
        head_->next = temp;
        temp->prev = head_;
    }
    return head_;
}

Node* LinkedList::insert_after(int val, Node* node) {
    if (node == tail_) {
        tail_ = node->next = new Node(val);
        tail_->prev = node;
        return tail_;
    }
    Node* temp = node->next;
    Node* newNode = temp->prev = node->next = new Node(val);
    newNode->next = temp;
    newNode->prev = node;
    return newNode;
}

Node* LinkedList::insert_before(int val, Node* node) {
    if (node == head_) {
        head_ = node->prev = new Node(val);
        head_->next = node;
        return head_;
    }
    Node* temp = node->prev;
    Node* newNode = node->prev = temp->next = new Node(val);
    newNode->next = node;
    newNode->prev = temp;
    return newNode;
}

Node *LinkedList::head() {
    return head_;
}
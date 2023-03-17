//
// Created by lukas on 12/03/23.
//
#include "Deque.h"
#include <iostream>

Deque::Deque() {
    arrLeft = new std::vector<int>();
    arrRight = new std::vector<int>();
}

void Deque::push_back(int val) {
    arrRight->push_back(val);
}
void Deque::push_front(int val) {
    arrLeft->push_back(val);
}

int Deque::size() {
    return arrLeft->size() + arrRight->size();
}

void Deque::pop_back() {
    if (arrRight->size()) {
        arrRight->pop_back();
    } else {
        rebalance();
        if (arrRight->size()) {
            arrRight->pop_back();
        }
    }
}

void Deque::pop_front() {
    if (arrLeft->size()) {
        arrLeft->pop_back();
    } else {
        rebalance();
        if (arrLeft->size()) {
            arrLeft->pop_back();
        } else if (size()) {
            arrRight->pop_back();
        }
    }
}

void Deque::rebalance() {
    std::vector<int>* left = new std::vector<int>();
    std::vector<int>* right = new std::vector<int>();
    if (!arrLeft->size()) {
        for (int i = (arrRight->size() / 2) - 1; i >= 0; --i) {
            left->push_back((*arrRight)[i]);
        }
        for (int i = arrRight->size() / 2; i < arrRight->size(); ++i) {
            right->push_back((*arrRight)[i]);
        }
    }
    if (!arrRight->size()) {
        for (int i = arrLeft->size() / 2; i < arrLeft->size(); ++i) {
            left->push_back((*arrLeft)[i]);
        }
        for (int i = (arrLeft->size() / 2) - 1; i >= 0; --i) {
            right->push_back((*arrLeft)[i]);
        }
    }
    delete arrLeft;
    delete arrRight;
    arrRight = right;
    arrLeft = left;
}

int &Deque::operator[](int i) {
    if (!size()) throw;
    if (i < arrLeft->size()) {
        return (*arrLeft)[arrLeft->size() - i - 1];
    }
    else {
        return (*arrRight)[i - arrLeft->size()];
    }
}

int main() {
    Deque deque {};
    deque.push_back(1);
    deque.push_back(2);
    deque.push_back(3);
    deque.push_back(4);
    deque.push_front(0);
    deque.push_front(-1);
//    deque.push_front(-2);
//    deque.push_front(-3);
//    deque.push_front(-4);
//    deque.pop_back();
//    deque.pop_back();
//    deque.pop_back();
    deque.pop_front();
    deque.pop_front();
    deque.pop_front();
    deque.pop_front();

    std::cout<<deque[0];
    return 0;
}
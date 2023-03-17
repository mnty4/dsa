//
// Created by lukas on 12/03/23.
//
#include <vector>

class Deque {
private:
    std::vector<int>* arrLeft;
    std::vector<int>* arrRight;
    void rebalance();
public:
    Deque();
    void push_back(int val);
    void push_front(int val);
    void pop_back();
    void pop_front();
    int size();
    int& operator[](int i);


    };
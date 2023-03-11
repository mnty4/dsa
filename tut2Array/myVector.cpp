#include <iostream>
#include <initializer_list>
#include "myVector.hpp"

MyVector::MyVector() {}

MyVector::MyVector(int n) {
    if (n < 0) {
        // print some error message
        std::cout<<"error";
        return;
    }
    arrayPointer_ = new int(n);
    capacity_ = n;
    for (int i = 0; i < n; ++i) {
        *(arrayPointer_ + i) = 0;
        std::cout<<*(arrayPointer_ + i)<<std::endl;
    }
    // allocate an array for n ints and zero it out
}

// We write this constructor for you to serve as an example
// An initializer_list is a very lightweight container
// which is used to initialize a vector with a list of values
// std::vector<int> vec {1, 2, 3, 4};
// This constructor implements the same functionality for MyVector.
MyVector::MyVector(std::initializer_list<int> vals) {
    size_ = capacity_ = vals.size();
    arrayPointer_ = new int[size_];
    int i = 0;
    for (int x : vals) {
        arrayPointer_[i++] = x;
    }
}

MyVector::~MyVector() {
    // free memory
    delete[] arrayPointer_;
}

void MyVector::push_back(int val) {
    // interesting one!
    if (size_ == capacity_) {
        // add memory
        // int *temp = arrayPointer_;
        if (capacity_ == 0) {
            capacity_ = 1;
        } else  {
            capacity_ *= 2;
        }
        arrayPointer_ = new int[capacity_];

        // delete[] temp;
    }
    *(arrayPointer_ + size_) = val;
    ++size_;
}

void MyVector::pop_back() {
    --size_;

}

int MyVector::back() {
    return *(arrayPointer_ + size_ - 1);
}

bool MyVector::empty() {
    return size_ == 0;
}

int MyVector::size() const {
    return size_;
}

int MyVector::capacity() const {
    return capacity_;
}

int& MyVector::operator[](int i) {
    return arrayPointer_[0];
}

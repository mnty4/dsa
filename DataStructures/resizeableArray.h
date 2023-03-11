//
// Created by lukas on 6/03/23.
//
#include <stdlib.h>
template <typename T>
class Vector {
private:
    T *start;
    int end;
    int allocated;
public:
    Vector();
    T get(int i);
    T set(int i, T t);
    T push(T val);
    T pop();
    int size();
    void freeMem();
};

template <typename T>
Vector<T>::Vector() {
    start = (T*) malloc(sizeof(T));
    end = -1;
    allocated = 1;
}

template <typename T>
T Vector<T>::get(int i) {
    if (i > end || i < 0)
        throw;
    return *(start + i);
}
template <typename T>
T Vector<T>::set(int i, T t) {
    if (i > end || i < 0)
        throw;
    return *(start + i) = t;
}

template <typename T>
T Vector<T>::push(T val) {
    ++this->end;
    if (end == allocated) {
        allocated *= 2;
        start = (T*) realloc(start, allocated * sizeof(T));
    }
    return *(start + end) = val;
}

template <typename T>
T Vector<T>::pop() {
    if (size() != 0) {
        --end;
        return *(start + end);
    }
}

template <typename T>
int Vector<T>::size() {
    return this->end + 1;
}

template <typename T>
void Vector<T>::freeMem() {
    free(this->start);
}



#ifndef RESIZEABLEARRAY_RESIZEABLEARRAY_H
#define RESIZEABLEARRAY_RESIZEABLEARRAY_H


#endif //RESIZEABLEARRAY_RESIZEABLEARRAY_H

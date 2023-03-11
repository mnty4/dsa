//
// Created by lukas on 7/03/23.
//

//
// Created by lukas on 6/03/23.
//
#include <cstdlib>
template <typename T>
class Vector {
private:
    T* start;
    T* end;
public:
    Vector();
    T get(int i);
    T set(int i, T t);
    T push(T t);
    T pop();
    int size();
};

template <typename T>
Vector<T>::Vector() {
    start = (T*) malloc(sizeof(T));
    end = start + 1;
}

template <typename T>
T Vector<T>::get(int i) {
    if (i < 0 || i >= end - start)
        throw;
    return *(start + i);
}
template <typename T>
T Vector<T>::set(int i, T t) {
    if (i < 0 || i >= end - start)
        throw;
    return *(start + i) = t;
}

template <typename T>
T Vector<T>::push(T t) {
    if (end - start == size()) {
        int tempSize = end - start;
        start = (T*) realloc(start, size() * 2 * sizeof(T));
        end = start + tempSize;
    }
    *end = t;
    end += 1;
    return t;
}

template <typename T>
T Vector<T>::pop() {
    if (size() != 0) {
        T t = *end;
        end -= 1;
        return *end;
    }
}

template <typename T>
int Vector<T>::size() {
    return end - start;
}
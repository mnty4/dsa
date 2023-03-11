#include <iostream>

void modifyA(int a) {
    int* ptr = &a;
    *ptr = 5;
}

void printRef() {
    int arr[3] {0, 1, 2};
//    int* ptrToArr {&arr[0]};
//    for (int &a : arr) {
//        std::cout<<&a<<std::endl;
//    }
//    std::cout<<ptrToArr + 1;
    for (int i = 0; i < 3; ++i) {
        std::cout<<i[arr]<<std::endl;
//        std::cout<<arr[i]<<std::endl;
    }

}

void dereference(int** ptr, int* b) {
    *ptr = b;
}
struct a {
    int val;
};
void dereferenceObj(a** ptr) {
    a b = {3};
//    *ptr = &a;
    a* ptr2 = *ptr;
    ptr2 = &b;
}


int main() {
//    int a = 3;
//    modifyA(a);
//    std::cout<<a;
//    printRef();
//    int a {5};
//    int b {3};
//    int* ptr = &a;
//    int* ptr;
//    dereference(&ptr, &b);
    a* ptr;
//    a b = {3};

    dereferenceObj(&ptr);

    std::cout<<ptr->val;
    return 0;
}

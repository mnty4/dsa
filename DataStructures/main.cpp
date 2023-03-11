#include <iostream>
#include "resizeableArrayV2.h"
#include "LinkedList.h"
int main() {
    auto words = new Vector<std::string>;
    words->push("Tin");
    words->push("Lukas");
    words->push("Tin");
    words->push("Tin");
    words->push("Tin");
    words->push("Tin");
    words->push("Tin");
    words->push("Tin");
    words->push("Tin");
    words->push("Tin");
    words->push("Tin");
    words->push("Tin");
    words->push("Tin");
    words->push("Tin");
    words->push("Tin");
    words->push("Tin");
    words->push("Arrow");
    words->push("Tin");
    words->push("Tin");
    words->push("Tin");
    words->push("Tin");

    for (int i = 0; i < words->size(); ++i) {
        std::cout<<words->get(i)<<std::endl;
    }
    delete words;

    LinkedList<int>* l = new LinkedList<int>;
    l->push_back(1);
    Node<int> node = l->push_front(2);

    return 0;
}

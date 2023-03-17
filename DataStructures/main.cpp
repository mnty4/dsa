#include <iostream>
#include "resizeableArrayV2.h"
#include "LinkedList2.h"
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

    LinkedList l {};
    l.push_back(5);
    Node* node = l.push_front(2);

    l.insert_after(4, node);
    l.insert_before(1, node);
    l.insert_after(3, node);

    Node* temp = l.head();
    while (temp != nullptr)
    {
        std::cout<<temp->val;
        temp = temp->next;
    }


//    for (int i = 0; i < 3; ++i) {
//        std::cout<<l[0]<<std::endl;
//    }
    return 0;
}

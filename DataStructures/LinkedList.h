//
// Created by lukas on 7/03/23.
//

//template <typename T>
//struct Node {
//    T t;
//    Node* next;
//};
template <typename T>
struct Node {
    T t;
    Node* next;
};

template <typename T>
class LinkedList {
    private:

        Node<T> *head;
        Node<T> *tail;
    public:
        Node<T> push_front(T t) {
            Node node {t, head};
            head = &node;
            if (tail == nullptr) {
                tail = &node;
            }
            return node;
        }
        Node<T> push_back(T t) {
            Node node {t};
            if (tail == nullptr) {
                head = &node;
                tail = &node;
                return node;
            }
            tail->next = &node;
            tail = &node;
            return node;
        }
        Node<T> insert_after(Node<T> prev, T t) {
            Node node {t, prev.next};
            prev.next = &node;
            return node;
        }
};

//template <typename T>
//struct LinkedList<T>::Node {
//    T t;
//    Node* next;
//};


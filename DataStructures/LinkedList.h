//
// Created by lukas on 7/03/23.
//

//template <typename T>
//struct Node {
//    T t;
//    Node* next;
//};


//template <typename T>
//struct Node {
//    T t;
//    Node* next;
//};

template <typename T>
class LinkedList {
    public: struct Node {
        T t;
        Node* next;
    };
    private:
        Node *head;
        Node *tail;
    public:
        Node push_front(T t) {
            Node node {t, head};
            head = &node;
            if (tail == nullptr) {
                tail = &node;
            }
            return node;
        }
        Node push_back(T t) {
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
        Node insert_after(Node prev, T t) {
            Node node {t, prev.next};
            prev.next = &node;
            return node;
        }
        T& operator[](int i) {
            Node* node = head;
            int count = 0;
            while (node != nullptr) {
                if (i == count) {
                    return node->t;
                }
                node = node->next;
                ++count;
            }
            return -1;
        }
};

//template <typename T>
//struct LinkedList<T>::Node {
//    T t;
//    Node* next;
//};


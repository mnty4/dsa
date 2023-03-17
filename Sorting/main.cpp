#include <iostream>
#include <vector>

void insertItem(std::vector<int>& v, std::size_t i);

void insertionSort(std::vector<int>& v) {
    for (std::size_t i = 1; i < v.size(); ++i) {
        insertItem(v, i);
    }
}

void insertItem(std::vector<int>& v, std::size_t i) {
    while (i >= 1) {
        if (v.at(i) > v.at(i - 1)) {
            return;
        } else {
            int temp = v.at(i);
            v.at(i) = v.at(i - 1);
            v.at(i - 1) = temp;
        }
        --i;
    }
}

struct Person {
    std::string name {};
    std::size_t section = 0;
};
void countingSort(std::vector<Person>& v, std::size_t maxNum) {
    std::vector<std::size_t> counts(maxNum);
    std::vector<Person> temp(v.size());
    for (Person person : v) {
        ++counts[person.section + 1];
    }
    for (std::size_t i = 0; i < counts.size(); ++i) {
        counts[i] += counts[i - 1];
    }

    for ( : v) {
        temp
    }

}

int main() {
    std::vector<int> v {5, 3, 4, 2, 1};
    insertionSort(v);
    for (int item : v) {
        std::cout<<item;
    }
    return 0;
}

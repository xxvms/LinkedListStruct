#include <iostream>

struct Struct
{
    int value;
    Struct* next;
};

class LinkedList
{
private:
    Struct* first;
public:
    LinkedList(): first(nullptr)
    {}
    void addItem(int value_);
    void display();
};

void LinkedList::addItem(int value_) {
    Struct* newLInk = new Struct;
    newLInk->value = value_;
    newLInk->next = first;
}

void LinkedList::display() {
    Struct* current = first;
    while ( current != NULL)
    {
        std::cout << current->value << std::endl;
        current = current->next;
    }
}


int main() {

    LinkedList linkedlist;

    linkedlist.addItem(1); //todo work out on this solution
    linkedlist.addItem(2);



    system("pause");
    return 0;
}
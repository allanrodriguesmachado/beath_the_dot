#include <iostream>
#include "stack.h"

using namespace std;

stack::stack() {
    sizeStack = 0;

    stackStructure = new integerItemType[itemMax];
}

stack::~stack() {
    delete[] stackStructure;
}

void stack::push(integerItemType itemStack) {
    if (isFull()) {
        cout << "Ops, a pilha esta cheia" << endl;
    }

    if (!isFull()) {
        stackStructure[sizeStack] = itemStack;
        sizeStack++;
    }
}

integerItemType stack::pop() {
    if (isEmpty()) {
        cout << "Ops, a pilha esta vazia" << endl;
        return 0;
    }

    if (!isEmpty()) {
        sizeStack--;
        return stackStructure[sizeStack - 1];
    }

    return 0;
}

bool stack::isEmpty() const {
    return (sizeStack == 0);
}

bool stack::isFull() const {
    return (sizeStack == itemMax);
}

int stack::size() const  {
    return  sizeStack;
}

void stack::print() {
    cout << "Pilha: [ ";
        for (int i = 0; i < sizeStack; i++) {
            cout << stackStructure[i] << " ";
        }
    cout << " ]\n";
}


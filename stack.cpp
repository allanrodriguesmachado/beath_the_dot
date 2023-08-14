#include <iostream>
#include "stack.h"

using namespace std;

stack::stack() {
    // Initial stack size at zero
    sizeStack = 0;

    // Creating vector with max item
    stackStructure = new integerItemType[itemMax];
}

stack::~stack() {
    //Destruct vector struct
    delete[] stackStructure;
}

// Insert item stack -- PUSH
void stack::push(integerItemType itemStack) {
    if (isFull()) {
        cout << "Ops, a pilha esta cheia" << endl;
    }

    if (!isFull()) {
        stackStructure[sizeStack] = itemStack;
        sizeStack++;
    }
}

// Remove item stack - POP
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

//Checking if the stack is empty
bool stack::isEmpty() {
    return (sizeStack == 0);
}

//Checking if the stack is full
bool stack::isFull() {
    return (sizeStack == itemMax);
}

// Print stack size
int stack::size()  {
    return  sizeStack;
}

// Print stack output
void stack::print() {
    cout << "Pilha: [ ";
        for (int i = 0; i < sizeStack; i++) {
            cout << stackStructure[i] << " ";
        }
    cout << " ]\n";
}


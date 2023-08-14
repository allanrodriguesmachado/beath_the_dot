#include <iostream>
#include "stack.h"

using namespace std;

stack::stack() {
    // Initial stack size at zero
    sizeStack = 0;

    // Creating vector with max item
    stackStructure = new integerItemType[itemMax]
}

stack::~stack() {
    //Destruct vector struct
    delete[] stackStructure;
}

// Insert item stack -- PUSH
void stack::push(integerItemType itemStack) {

}

// Remove item stack - POP
integerItemType stack::pop() {

}

//Checking if the stack is empty
bool stack::isEmpty() {

}

//Checking if the stack is full
bool stack::isFull() {

}

// Print stack size
void stack::size() {

}

// Print stack output
void stack::print() {

}
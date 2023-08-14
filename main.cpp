#include <iostream>
#include "stack.cpp"

using namespace std;

void menuStack() {
    cout << "Options" << endl;
    cout << "1: Insert element" << endl;
    cout << "2: Remove element" << endl;
    cout << "3: Print element" << endl;
    cout << "4: Finish" << endl;
};

int main() {
    stack oneStack;
    integerItemType itemStack;
    int options;

    cout << "Vector Stack Data Structure \n" << endl;

    do {
        menuStack();

        cin >> options;

        if (options == 1) {
            cout << "Enter the element to be inserted:" << endl;
            cin >> itemStack;
            oneStack.push(itemStack);
        }

        if (options == 2) {
            itemStack = oneStack.pop();
            cout << "Element removed:" << itemStack << endl;
        }

        if (options == 3) {
            oneStack.print();
        }
    } while (options != 0);

    return 0;
}
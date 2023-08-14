#include <iostream>
#include "stack.cpp"

using namespace std;

void menuStack() {
    cout << "Selecione" << endl;
    cout << "1: Inserir um elemento" << endl;
    cout << "2: Remover um elemento" << endl;
    cout << "3: Imprimir um elemento" << endl;
    cout << "4: Finalizar" << endl;
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
            cout << "Digite o elemento a ser inserido:" << endl;
            cin >> itemStack;
            oneStack.push(itemStack);
        }

        if (options == 2) {
            itemStack = oneStack.pop();
            cout << "Elemento removido:" << itemStack << endl;
        }

        if (options == 3) {
            oneStack.print();
        }
    } while (options != 0);

    return 0;
}
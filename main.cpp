#include <iostream>
#include "stack.cpp"

using namespace std;

int main() {
    stack oneStack;
    integerItemType item;
    int options;

    cout << "Programa gerador de pilhas" << endl;

    do {
        cout << "Digite 0 para parar o programa" << endl;
        cout << "Digite 1 para inserir um elemento" << endl;
        cout << "Digite 2 para remover um elemento" << endl;
        cout << "Digite 3 para imprimir um elemento" << endl;

        cin >> options;

        if (options == 1) {
            cout << "Digite o elemento a ser inserido" << endl;
            cin >> item;
            oneStack.push(item);
        }

        if (options == 2) {
            item = oneStack.pop();
        }

        if (options == 3) {
            oneStack.print();
        }
    } while (options != 0);
}
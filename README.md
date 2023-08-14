# Implementação de Pilha utilizando Vetores - Estrutura de Dados

Este repositório contém a implementação de uma estrutura de dados de pilha utilizando vetores em C++ orientado a
objetos. Uma pilha é uma estrutura de dados que segue a regra do "último a entrar, primeiro a sair" (LIFO -
Last-In First-Out), onde os elementos são adicionados e removidos apenas do topo da pilha.

## Como usar

1. **Clone o repositório:**

   ```
   git clone https://github.com/allanrodriguesmachado/VectorStackDataStructure
   ```

2. **Navegue até o diretório do projeto:**

   ```
   cd seu-repositorio/VectorStackDataStructure 
   ```

3. **Compile o código:**

   Utilize um compilador C++ para compilar o arquivo `main.cpp`:

   ```
   g++ main.cpp -o stack
   ```

4. **Execute o programa:**

   ```
   ./stack
   ```

## Funcionalidades

A implementação da pilha oferece as seguintes funcionalidades:

- `push(valor)`: Adiciona um elemento ao topo da pilha.
- `pop()`: Remove e retorna o elemento do topo da pilha.
- `isEmpty()`: Verifica se a pilha está vazia.
- `isFull()`: Verifica se a pilha está cheia (caso haja um limite de tamanho).
- `size()`: Retorna a quantidade de elementos na pilha.
- `print()`: Imprime os elementos na pilha.

## Exemplo de Uso

```cpp
#include <iostream>
#include "stack.cpp"

using namespace std;

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
```

## Contribuições

Contribuições são bem-vindas! Se você encontrar problemas ou tiver melhorias para propor, sinta-se à vontade para abrir
um "issue" ou enviar um "pull request".

## Desenvolvedor

[<img src="https://avatars.githubusercontent.com/u/54523516?v=4" width="100px;" alt="Foto do Allan Machado no GitHub"/>
<br><sub>Allan Rodrigues</sub>](https://www.linkedin.com/in/allanrodriguesmachado/)  
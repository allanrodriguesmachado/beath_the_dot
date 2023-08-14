# Implementação de Pilha utilizando Vetores - Estrutura de Dados

Este repositório contém a implementação de uma estrutura de dados de pilha utilizando vetores em C++ orientado a objetos. Uma pilha é uma estrutura de dados que segue a regra do "último a entrar, primeiro a sair" (LIFO - Last-In-First-Out), onde os elementos são adicionados e removidos apenas do topo da pilha.

## Como usar

1. **Clone o repositório:**

   ```
   git clone https://github.com/seu-usuario/seu-repositorio.git
   ```

2. **Navegue até o diretório do projeto:**

   ```
   cd seu-repositorio/PilhaVector
   ```

3. **Compile o código:**

   Utilize um compilador C++ para compilar o arquivo `main.cpp`:

   ```
   g++ main.cpp -o pilha
   ```

4. **Execute o programa:**

   ```
   ./pilha
   ```

## Funcionalidades

A implementação da pilha oferece as seguintes funcionalidades:

- `push(valor)`: Adiciona um elemento ao topo da pilha.
- `pop()`: Remove e retorna o elemento do topo da pilha.
- `top()`: Retorna o elemento do topo da pilha sem removê-lo.
- `isEmpty()`: Verifica se a pilha está vazia.
- `isFull()`: Verifica se a pilha está cheia (caso haja um limite de tamanho).
- `size()`: Retorna a quantidade de elementos na pilha.

## Exemplo de Uso

```cpp
#include "Pilha.h"
#include <iostream>

int main() {
    Pilha pilha;

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);

    std::cout << "Topo da pilha: " << pilha.top() << std::endl;
    std::cout << "Tamanho da pilha: " << pilha.size() << std::endl;

    pilha.pop();

    std::cout << "Topo da pilha após pop: " << pilha.top() << std::endl;

    if (pilha.isEmpty()) {
        std::cout << "A pilha está vazia." << std::endl;
    } else {
        std::cout << "A pilha não está vazia." << std::endl;
    }

    if (pilha.isFull()) {
        std::cout << "A pilha está cheia." << std::endl;
    } else {
        std::cout << "A pilha não está cheia." << std::endl;
    }

    return 0;
}
```

## Contribuições

Contribuições são bem-vindas! Se você encontrar problemas ou tiver melhorias para propor, sinta-se à vontade para abrir um "issue" ou enviar um "pull request".

## Licença

Este projeto é licenciado sob a [Licença MIT](LICENSE).


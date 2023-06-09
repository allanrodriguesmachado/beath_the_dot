Nível Básico:

1. Introdução ao Hoisting:
   - O hoisting é o comportamento em que as declarações de variáveis e funções são movidas para o topo do seu escopo durante a fase de compilação em JavaScript.
   - Durante a fase de compilação, o JavaScript analisa o código e registra as declarações de variáveis e funções, permitindo que sejam acessadas antes de serem declaradas explicitamente no código.

2. Hoisting de Variáveis:
   - O hoisting de variáveis envolve a elevação das declarações de variáveis para o topo do escopo atual.
   - Com `var`, a declaração é movida para o topo do escopo, mas a atribuição de valor permanece no local original.
   - Variáveis declaradas com `var` são inicializadas com o valor `undefined` até que recebam uma atribuição.

3. Hoisting de Funções:
   - O hoisting de funções envolve a elevação das declarações de função para o topo do escopo atual.
   - Com `function declaration`, a função é movida por completo para o topo, permitindo que seja chamada antes da sua declaração.
   - Com `function expression`, apenas a declaração da variável é elevada, não a atribuição da função.

Nível Intermediário:

1. Hoisting em Blocos de Código:
   - O hoisting também ocorre dentro de blocos de código, como loops (`for`, `while`) e condicionais (`if`, `switch`).
   - Com `var`, as variáveis declaradas dentro de um bloco são elevadas para o topo do escopo da função ou do escopo global.
   - Com `let` e `const`, as variáveis têm escopo de bloco e não são afetadas pelo hoisting fora do bloco em que foram declaradas.

2. Efeitos Colaterais do Hoisting:
   - O hoisting pode causar comportamentos inesperados, como variáveis sendo acessadas antes de serem declaradas ou inicializadas.
   - É recomendado declarar todas as variáveis no início do escopo para evitar confusões relacionadas ao hoisting.

Nível Avançado:

1. Estratégias para Evitar Problemas de Hoisting:
   - Utilizar o strict mode (`'use strict'`) no início do escopo para evitar comportamentos indesejados relacionados ao hoisting.
   - Adotar boas práticas de organização de código, como declarar todas as variáveis no início do escopo e evitar redeclarações.

2. Hoisting em Funções de Flecha:
   - Funções de flecha não têm seu comportamento afetado pelo hoisting, pois são expressões e não declarações.
   - As funções de flecha devem ser declaradas antes de serem utilizadas para evitar erros de referência.

3. Hoisting em Classes:
   - O hoisting em classes se aplica apenas às declarações de classes, não a métodos ou propriedades.
   - É necessário declarar a classe antes de utilizá-la para evitar erros de referência.

Esses são os principais aspectos do hoisting em JavaScript, abordando desde os conceitos básicos até tópicos mais avançados. É importante entender como o hoisting funciona para escrever um código claro e evitar comportamentos inesperados.


--- 



# Searching Algorithms

## Overview

Os algoritmos de busca são projetados para verificar ou recuperar um elemento de qualquer estrutura de dados onde ele está armazenado. 

Com base no tipo de ordenação esses algoritmos são classificados em duas categorias:

- **Busca Sequencial**:
  - Nesse tipo a estrutura de dados (`lista` ou `matriz`, por exemplo) é percorrida sequencialmente e cada elemento é verificado. 
  - A `busca linear` é um exemplo.

- **Busca de Intervalo**:
  - Esses algoritmos são projetos especificamente para buscar em estruturas de dados classificadas.
  - A busca nesse tipo é muito mais eficiente do que em uma `busca linear`, uma vez que o centro da estrutura é visitado repetidamente, além do espaço de pesquisa ser divido pela metade. 
  - A `busca binária` é um exemplo.

## Linear Search

Vamos supor que temos o seguinte problema:

>
> Dado um array de n elementos, escreva uma função para pesquisar um dado elemento `x` nesse array.
>

Uma abordagem simples para resolver esse problema é fazer uma `busca linear`, ou seja:

- Comece a partir do elemento mais à esquerda do array e, um por um, compare esse elemento `x` com cada elemento subsequente.
- Se `x` corresponde ao elemento, retorna o índice.
- Se `x` não corresponder a nenhum dos elementos, retorne `-1`.

<p align="center">
 <img src="./assets/Linear-Search.png" alt="linear-search"></a>
</p>

A complexidade de tempo desse algoritmo é `O(n)`, o que justifica o fato da pesquisa linear ser raramente utilizade de forma prática. Outros algoritmos de busca, como o de `busca binária` e `tabela hash`, permitem uma comparação de busca muito mais rápida.

### Linear Search Worst-Case Complexity

- Se o elemento for encontrado no último índice `O(n)` a `O(1)`
- Se o elemento não for encontrado `O(n)` a `O(n/2)`

## Binary Search

<p align="center">
 <img src="./assets/Binary-Search.png" alt="binary-search"></a>
</p>

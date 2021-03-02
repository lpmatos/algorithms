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
> Dado um array de `n` elementos, escreva uma função para buscar um elemento `x` nesse array.
>

Uma abordagem simples para resolver esse problema é fazer uma `busca linear`, ou seja:

- Comece a partir do elemento mais à esquerda do array e, um por um, compare esse elemento com cada elemento subsequente até o último índice do array.
- Se `x` corresponder ao elemento, retorne o índice.
- Se `x` não corresponder a nenhum dos elementos, retorne `-1`.

<p align="center">
 <img src="./assets/Linear-Search.png" alt="linear-search"></a>
</p>

A complexidade de tempo desse algoritmo é `O(n)`, o que justifica o fato de ser raramente utilizade de forma prática. Outros algoritmos de busca como: `busca binária` e `tabela hash`, são mais usados pois permitem uma busca muito mais rápida.

### Linear Search Worst-Case Complexity

- Se o elemento for encontrado no último índice `O(n)` a `O(1)`
- Se o elemento não for encontrado `O(n)` a `O(n/2)`

## Binary Search

Vamos supor que temos o seguinte problema:

>
> Dado um array ordenado de `n` elementos, escreva uma função para buscar um elemento `x` nesse array.
>

Uma abordagem simples para resolver esse problema é fazer uma `busca linear`, porém a complexidade de tempo desse algoritmo é extremamente alta `O(n)`. Outra abordagem que você pode utilizar para realizar essa mesma tarefa é a `busca binária`.

Na `busca binária` fazemos:

- Buscamos em uma matriz classificada dividindo repetidamente o intervalo de pesquisa pela metade.
- Comece com um intervalo cobrindo todo o array.
- Se o valor da chave de pesquisa for menor que o item no meio do intervalo, restrinja o intervalo à metade inferior. Caso contrário, estreite-o até a metade superior.
- Verifique repeditamente até que o valor seja encontrado ou o intervalo esteja vazio.

<p align="center">
 <img src="./assets/Binary-Search.png" alt="binary-search"></a>
</p>

A ideia da `busca binária` é usar a informação que o array está classificado e reduzir a complexidade do tempo para `O(Log n)`. Portanto, podemos resumir os passos em:

1. Compare o elemento `x` com o elemento do `meio`.
2. Se `x` corresponder ao elemento do `meio`, retornamos o índice do meio.
3. Senão, ou seja, se `x` for maior que o elemento do `meio`, então `x` deve ficar na metade direita da submatriz após o elemento do `meio`. Portanto. recorremos para a metade da direita.
4. Caso contrário, ou seja, se `x` for menor, recorremos para a metade da esquerda.

Para resolver esse problema poder adotar uma implementação **recursiva** ou uma implementação **iterativa**. Esse algoritmo segue o paradigma [Diminuir para Conquistar](Diminuir para Conquistar.md).

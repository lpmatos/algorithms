# Pesquisa Linear vs Pesquisa Binária

## Overview

Uma `busca linear` verifica um item por vez, sem pular nenhum item.

- O pior caso de complexidade é `O(n)`. 
- O tempo gasto para pesquisar elementos aumenta conforme o número de elementos da estrutura aumenta.
  
Uma `busca binária`, entretanto, reduz sua pesquisa à metade assim que você encontrar o meio de uma lista ordenada.

- O elemento do `meio` é examinado para verificar se é maior ou menor que o valor a ser pesquisado.
- Consequentemente, a pesquisa é feita para qualquer metade da lista fornecida.

## Diferenças importantes

- Os dados de entrada precisam ser classificados na `busca binária` e não na `busca linear`.
- A `busca linear` faz o acesso sequencial, enquanto a `busca binária` acessa os dados aleatoriamente.
- Complexidade de tempo da `busca linear` é `O(n)` e a complexidade de tempo da `busca binária` é `O(Logn)`.
- A `busca linear` executa comparações de igualdade e a `busca binária`executa comparações de ordenação.

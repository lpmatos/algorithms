# Dividir para Conquistar

## ➤ Overview

Nesse resumo falaremos sobre como a técnica `Divide and Conquer` é útil e como podemos resolver o problema com a abordagem da técnica `DAC`.

## ➤ DAC

Esta técnica pode ser dividida nas seguintes três partes:

1. Divide: Envolve dividir o problema em algum sub-problema.
2. Conquiste: O sub-problema é chamado repetidas vezes até que ele seja resolvido.
3. Combine: O sub-problema foi resolvido para que possamos encontrar a solução do problema. 

A seguir estão alguns algoritmos que seguem o algoritmo `Divide and Conquer`.  

- Busca binária.
  - É um algoritmo de pesquisa.
  - Em cada etapa o algoritmo compara o elemento de entrada `x` com o valor do elemento do `meio` da matriz.
  - Se os valores corresponderem retornamos o índice do elemento do `meio`. Caso contrário, se `x` for menor que o elemento do `meio`, o algoritmo ocorre novamente para o lado esquerdo do elemento do `meio`. Senão é recorrente para o lado direito do elemento do `meio`.
- Quicksort.
  - É um algoritmo de classificação (ordenação).
  - O algoritmo escolhe um elemento pivô, reorganiza os elementos da matriz de tal forma que todos os elementos menores do que o elemento pivô selecionado se movem para o lado esquerdo do pivô e todos os elementos maiores se movem para o lado direito. 
  - Finalmente, o algoritmo classifica recursivamente os sub-arrays à esquerda e à direita do elemento pivô.
- Mergesort.
  - É um algoritmo de classificação (ordenação).
  - O algoritmo divide a matriz em duas metades, classifica-os recursivamente e, finalmente, mescla as duas metades classificadas.
- Algoritmo de Strassen.
  - É um algoritmo eficiente para multiplicar duas matrizes.
  - Um método simples para multiplicar duas matrizes precisa de 3 loops aninhados e é `O(n^3)`. 
  - O algoritmo de Strassen multiplica duas matrizes no tempo `O(n^2,8974)`.
- Algoritmo Fast Fourier Transform (FFT) de Cooley - Tukey.
  - É o algoritmo mais comum para FFT. 
  - É um algoritmo de divisão e conquista que funciona em tempo `O(nLogn)`.
- Algoritmo de Karatsuba para multiplicação rápida.
  - Faz a multiplicação de dois números de `n` dígitos. 

## ➤ Dividir e Conquistar (DAC) vs Programação Dinâmica (DP)

Ambos os paradigmas dividem o problema dado em sub-problemas e resolvem sub-problemas. Mas como escolher um deles para um determinado problema? 

O `Divide and Conquer` deve ser usado quando os mesmos sub-problemas não são avaliados muitas vezes. Caso contrário, deve-se usar a `Programação Dinâmica` ou `Memoização`. Por exemplo, a `busca binária` é um algoritmo de `DAC`, nunca avaliamos os mesmos sub-problemas novamente. Por outro lado, para calcular o e-nésimo número de `Fibonacci`, a Programação Dinâmica deve ser preferida.

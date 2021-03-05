# Array Data Structure

Um array é uma coleção de elementos armazenados de forma próxima. Sua ideia é armazenar múltiplos items do mesmo tipo, juntos. Isso facilita o cálculo da posição de cada elemento simplesmente adicionando um deslocamento a um valor base, ou seja, a localização da memória do primeiro elemento.

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/array-2.png">
</p>

Para simplificar, podemos pensar em um array como uma escada, onde cada degrau temos um valor. Você pode identificar a localização de qualquer valor simplemente sabendo a contada da etapa em que o valor está. Cada elemento pode ser identificado exclusivamente pele seu índice.

Geralmente um array de caracteres é chamada de string, enquanto uma array de booleanos ou inteiros é chamada simplesmente de array.

<p align="center">
  <img src="https://www.geeksforgeeks.org/wp-content/uploads/Array-In-C.png">
</p>

## Por que precisamos de arrays?

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2015/05/Arrays.png">
</p>

Podemos usar variáveis normais (v1, v2, v3...) quando temos um pequeno número de atributos. Mas, se queremos armazenaruma grande quantidade de valores, fica difícil gerenciá-los com variáveis normais. A ideia de um array é representar muitas instâncias em uma única variável.

## Vantagens

* Acesso aleatório de elementos usando o índice do array. Isso torna processo de acesso por posição mais rápido.
* Uso de menos linha de código, pois cria um único array de vários elementos.
* Fácil acesso a todos os elementos.
* Percorrer um array torna-se fácil usando um único loop.
* Os arrays possuem uma menor localidade de cache, o que pode fazer uma grande diferença no desempenho.
* A classificação se torna fácil, pois pode ser realizada escrevendo menos linha de código.

## Desvantagens

* A inserção e exclusão de elementos podem ser caras, pois é necessário gerenciar os elementos de acordo com a nova alocação de memória.
* Dependendo da forma como for utilizado, pode trazer baixo desempenho para sua solução.

## Arrays em C/C ++

Assim como dito acima, arrays nada mais é uma coleção de itens armazenados em locais de memória próximos, onde os elementos podem ser acessados aleatoriamente apenas utilizando índices. Em C/C++ isso não muda. Nessas linguagens, sua utilização é usada para armazenar tipos semelhantes de elementos, pois o tipo de dados deve ser o mesmo para todos eles, podendo ser usados para armazrnas coleções de tipos de dados primitivos como: int, float, double, char... 

## Arrays em C

1. É possível ter arrays de todos os tipos, exceto void e funções.
2. Array e ponteiros são diferentes. Parecem semelhantes porque o nome do array fornece o endereço do primeiro elemento e os elementos do array são acessados usando aritmética de ponteiro.
3. Array's são sempre passados como ponteiro para funções.
4. Um array de caracteres inicializado com uma cadeira de caracteres entre aspas duplas possui o último elemento como "\0".

## Declaraçãos

<p align="center">
  <img src="https://www.geeksforgeeks.org/wp-content/uploads/Array-Declaration-In-C.png">
</p>

Existem várias maneiras pelas quais podemos declarar um array. Isso pode ser feito especificando seu tipo e tamanho.

1. Declaração especificando o tamanho.
2. Declaração inicializando com elementos
3. Declaração especificando o tamanho e inicializando com elementos.

## Fatos

Acessando os elementos do array: os elementos do array são acessados usando um índice inteiro. O índice de um array começa com 0 e vai até o tamanho do array menos um.

<p align="center">
  <img src="https://www.geeksforgeeks.org/wp-content/uploads/Array-In-C.png">
</p>

Array's e ponteiros são coisas diferentes. A confusão ocorre por que o nome de um array indica o endereço do primeiro elemento e os arrays são passados como ponteiros. Ponteiros são usados para armazenar endereços de arrays alocados dinamicamente e para arrays que são passados como argumentos para funções.

Embora array e ponteiro sejam coisas diferentes, as seguintes propriedades de array fazem com que pareçam semelhantes:

1. O nome de um array fornece o endereço do primeiro elemento desse array.
2. Os elementos de um array são acessados usando aritmética de ponteiro. O compilador usa aritmética de ponteiro para acessar o elemento do array. Por exemplo, uma expressão array[i] é tratada como *(array + i) pelo compilador. É por isso que as expressão como *(array + i) funcionam para array e expressões como p[i] também funcionam para ponteiro p.
3. Parâmetros de array são sempre passados ​​como ponteiros, mesmo quando usamos colchetes.
4. Uma variável ponteiro pode receber um valor como atribuição, uma variável array não pode.

## Ponteiro x Arrays em C

## Operador sizeof

* O sizeof(array) retorna a quantidade de memória usada por todos os elementos do array.
* O sizeof(ponteiro) retorna apenas a quantidade de memória usada pela própria variável do ponteiro.

## Operador &

* O operador & em um array é um alias para &array[0] e retorna o endereço do primeiro elemento do array.
* O operador & em um ponteiro retorna o endereço do ponteiro.

## Inicialização

* O char array[] = "abc" define os quatro primeiros elementos para o array como: "a", "b", "c" e "\0".
* O char *pointer = "abc" define um ponteiro para o endereço da string "abc".

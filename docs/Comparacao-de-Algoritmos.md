# Comparação de Algoritmos

Dado um determinado problema, podemos ter diferentes soluções algorítmicas para ele. Nesse cenário, como conseguimos determinar qual solução é mais eficiente? Além disso, o que é um algoritmo eficiente e como medir essa eficiência? Esses e outros questionamentos serão abordados nesse documento.

## ➤ Eficiência de algoritmos

Podemos dividir a eficiência algorítmica em dois grupos:

- **Eficiência de espaço**: 
  - Refere-se à quantidade de memória requerida pelo algoritmo, além do espaço necessário para entradas e saídas.
- **Eficiência de tempo**: 
  - Indica quão rápido um algoritmo é executado.
  - A maioria das pesquisas focam em melhorar a eficiência de tempo.

## ➤ Tamanho da entrada 

Quanto maior é a entrada para um algoritmo, mais tempo ele irá demorar para executar. Um exemplo que podemos dar é a resolução de um algoritmo que tenha que percorrer sequencialmente um vetor de 10 ou 1000 elementos. Sem sombra de dúvidas o vetor de 10 elementos vai demorar menos para ser executado.

Em geral, a eficiência do algoritmo é analisada em função do tamanho da sua entrada. Exemplo: ordenação, buscar, encontrar o menor elemento, etc.

## ➤ Como medir o tempo?

Para medir o tempo de um algoritmo podemos usar as seguintes estratégias:

- Unidades de tempo (minutos, segundos…):
  - Vai depender do computador.
  - Vai depender do compilador.
- Contar quantas vezes cada operação é executada:
  - Isso é muito difícil e também é desnecessário.
- Identificar a operação mais importante: `operação básica`
  - Em outra palavra é indentificar a operação que impacta mais no tempo de execução.
  - No geral, é a operação no laço mais interno do algoritmo.
  - Contar quantas vezes ela é executada.

## ➤ Pior caso, melhor caso e caso médio

A eficiência de alguns algoritmos dependem não apenas do tamanho da entrada, mas também de uma entrada específica. Exemplo: `busca sequencial`.

### Pior caso

Podemos dizer que o pior caso é uma entrada de tamanho `n` para a qual o algoritmo gastará o maior tempo possível entre todas as entradas possíveis do mesmo tamanho.

Como calcular a eficiência no pior caso? Para isso basta verificar o tipo de entrada(s) que resulta no maior valor de vezes que a operação básica vai ser executada.

### Melhor caso

O melhor caso é uma entrada de tamanho `n` para a qual o algoritmo gastará o menor tempo possível entre todas as entradas possíveis do mesmo tamanho.

Como calcular a eficiência no melhor caso? Para isso basta verificar o tipo de entrada(s) que resulta no menor valor de vezes que a operação básica vai ser executada.

### Caso médio

Esse caso representa uma entrada comum ou aleatória, o que torna seu cálculo mais complexo. 

Divide todas as instâncias de tamanho `n` em várias classes, sendo que para cada instância da classe, o número de vezes que a operação básica do algoritmo é executada é a mesma.

## ➤ Ordem de crescimento

A ordem de crescimento avalia o quanto o tempo de execução de um algoritmo aumenta, de acordo com o aumento do tamanho da entrada de elementos `n` (considera valores grandes de `n`).

Para comparar a ordem de crescimento dos algoritmos, há três notações:

- **O**.
- **Omega**.
- **Teta**.

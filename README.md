# Bitset-
# Estrutura de Dados Conjunto (Set) em C usando Vetor de Bits

Este projeto consiste em uma implementação em linguagem C da estrutura de dados **Conjunto (Set)** utilizando a técnica de **Vetor de Bits (Bit Vector)**. Essa abordagem otimiza o uso de memória e permite realizar operações de conjuntos de forma eficiente através de manipulação de bits (bitwise operations).

## Visao Geral

Cada elemento do conjunto é representado por um bit em um vetor de inteiros (`int`). Como um inteiro possui 32 bits, cada posição do array armazena a presença ou ausência de até 32 números.

### Estrutura `Set`

* `elements`: Ponteiro para o array dinamico de inteiros que armazena os bits.
* `size`: Quantidade de elementos atualmente presentes no conjunto.
* `maximum`: Maior elemento armazenado no conjunto.
* `loadFactor`: Fator de carga do conjunto (razao entre `size` e `maximum`).

## Funcionalidades e Funcoes

### Operacoes do Conjunto

* `emptySet()`: Inicializa e retorna um ponteiro para um novo conjunto vazio.
* `insert(set, element)`: Insere um número no conjunto definindo o bit correspondente na posição correta (`element >> 5` e `1 << (element & 31)`).
* `unionSet(setC, setA, setB)`: Realiza a união entre os conjuntos `setA` e `setB` utilizando a operação lógica `OR` (`|`).
* `intersecSet(setC, setA, setB)`: Realiza a intersecção entre os conjuntos `setA` e `setB` utilizando a operação lógica `AND` (`&`).

### Entrada e Saida (I/O)

* `readSet(file)`: Lê a estrutura do conjunto e seus elementos a partir de um arquivo de texto.
* `writeSet(file, set)`: Escreve os metadados e elementos do conjunto em um arquivo de texto.
* `print(set)`: Imprime no console os metadados e os elementos contidos no conjunto.

### Utilitarios Bitwise

* `countOnes(size)`: Conta eficientemente o número de bits ativos (1s) em um inteiro (Popcount).
* `highestBit(number)`: Retorna a posição do bit mais significativo ativo.

## Estrutura dos Arquivos

* `TR7_536440.h`: Arquivo de cabeçalho contendo a definição da estrutura `Set` e os protótipos das funções.
* `TR7_536440.c`: Implementação de todas as funções do conjunto e algoritmos bitwise.

## Como Compilar

Para utilizar a biblioteca em seu projeto, inclua o arquivo de cabeçalho e compile os arquivos C conjuntamente usando o `gcc`:

```bash
gcc -c TR7_536440.c -o TR67_536440.o
gcc main.c TR7_536440.o -o programa
./programa

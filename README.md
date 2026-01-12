# Super Trunfo - Nivel Mestre

Este é o meu projeto do Nível Mestre do desafio Super Trunfo. Fiz pra praticar switch-case, comparação de variáveis e lógica de decisão em C.

## O que o programa faz?

O programa compara duas cartas de cidades brasileiras (Sao Paulo vs Rio de Janeiro). Você escolhe 2 atributos diferentes (populacao, PIB, area, etc) e o programa:

1. Compara cada atributo individualmente
2. Soma os valores dos 2 atributos
3. Declara qual carta venceu pela soma total

## Como usar

### 1. Compilar
```bash
gcc super_trunfo_nivel_mestre.c -o super_trunfo
```

### 2. Executar
```bash
./super_trunfo
```

### 3. Jogar
O programa mostra as 2 cartas com todos os dados. Ai voce escolhe:

```
==========================================
  ESCOLHA O PRIMEIRO ATRIBUTO
==========================================
1 - Populacao
2 - Area  
3 - PIB
4 - Pontos Turisticos
5 - Densidade Populacional
6 - PIB per capita
==========================================
Digite o numero do atributo: 
```

Digite um numero (1 a 6). Depois ele pede o segundo atributo.

**Dica:** Se escolher o mesmo duas vezes, ele troca automaticamente pro proximo.

## Exemplo de jogada

```
Digite o numero do atributo: 1
Voce escolheu: POPULACAO

Digite o numero do atributo: 3  
Segundo atributo: PIB

Primeiro atributo:
  Sao_Paulo: 12300000.00
  Rio_de_Janeiro: 6748000.00
  Vencedor: Sao_Paulo

Segundo atributo:
  Sao_Paulo: 443.60
  Rio_de_Janeiro: 190.20
  Vencedor: Sao_Paulo

Soma Sao_Paulo: 12300000.00 + 443.60 = 12300443.60
Soma Rio_de_Janeiro: 6748000.00 + 190.20 = 6748190.20

*** VENCEDOR: Sao_Paulo! ***
```

## Atributos disponiveis

| No | Atributo | O que e |
|----|----------|---------|
| 1 | Populacao | Total de habitantes |
| 2 | Area | km2 da cidade |
| 3 | PIB | Bilhoes de reais |
| 4 | Pontos Turisticos | Quantidade de pontos |
| 5 | Densidade | Habitantes por km2 |
| 6 | PIB per capita | PIB / populacao |

## O que aprendi fazendo este projeto

- Como usar switch-case para menus
- Comparar variaveis com if-else 
- Fazer soma de float e int
- Usar unsigned long int pra numeros grandes
- Validar entrada do usuario
- Estruturar codigo com comentarios

## Bibliotecas usadas

```
#include <stdio.h>   // printf, scanf
#include <stdlib.h>  // utilitarios basicos
```

## Como testar

1. Teste 1: Atributos 1 e 2 (populacao + area)
2. Teste 2: Tenta escolher 1 duas vezes (validacao)
3. Teste 3: Atributos 5 e 6 (calculados)

## Autor

Autor: Felipe de Lima Rodrigues  

01/2026

---

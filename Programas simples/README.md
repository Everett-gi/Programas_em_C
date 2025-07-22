   ## Programas

### 1 - Hello World
> Programa que imprime "Hello, World!" na tela.  
> **Objetivo:** Introduzir a estrutura básica de um programa em C, uso da função `printf` e o conceito de entrada/saída.

### 2 - Soma simples
> Programa que lê dois números inteiros e imprime a soma deles.  
> **Objetivo:** Trabalhar leitura de variáveis e operações básicas em C.

### 3 - Produto simples
> Programa que lê dois números inteiros e calcula o produto entre eles, exibindo o resultado.  
> **Objetivo:** Trabalhar a leitura de múltiplos valores, a operação de multiplicação e a exibição formatada do resultado na tela.

### 4 - Média simples
> Programa que lê três notas de um aluno, calculando a média ponderada com pesos específicos para cada nota (Nota A tem peso 2, Nota B tem peso 3 e Nota C tem peso 5). As notas podem variar de 0 a 10, com uma casa decimal.  
> **Objetivo:** Demonstrar o uso de variáveis, operações aritméticas, e cálculo de médias ponderadas com base em pesos definidos.

### 5 - Diferença
> Programa que lê quatro números inteiros, calcula o produto de A e B, e o produto de C e D, e então exibe a diferença entre esses produtos, de acordo com a fórmula:  
> `DIFERENCA = (A * B - C * D)`  
> **Objetivo:** Trabalhar com operações aritméticas e a manipulação de múltiplas variáveis.

### 6 - Área do curculo
> Programa que lê o valor do raio de uma circunferência e calcula sua área utilizando a fórmula:  
> `área = π * raio²`, onde π é considerado como 3.14159.  
> O programa eleva o valor do raio ao quadrado e multiplica por π para obter a área.  
> **Objetivo:** Trabalhar operações de potência, multiplicação e conceitos matemáticos básicos aplicados em programação.

### 7 - Salário com Bônus  
> Programa que lê o nome de um vendedor, seu salário fixo e o total de vendas realizadas no mês (em dinheiro), calculando o salário final com uma comissão de 15% sobre as vendas. O resultado é exibido com duas casas decimais.  
> **Objetivo:** Introduzir o conceito de porcentagem, formatação de saída com casas decimais e manipulação de dados numéricos e strings em C.

### 8 - Cálculo Simples  
> Programa que lê o código, a quantidade e o valor unitário de duas peças, calculando o valor total a ser pago (quantidade × valor unitário para cada peça e depois somando os resultados).  
> **Objetivo:** Praticar a leitura de múltiplos dados em uma mesma entrada, realizar cálculos básicos com multiplicação e soma, e formatar a saída corretamente.

### 9 - Esfera  
> Programa que calcula o volume de uma esfera a partir do raio fornecido, utilizando a fórmula:  
> **Volume = (4/3) * π * raio³**, onde π (pi) é considerado como **3.14159**.  
> **Objetivo:** Introduzir conceitos matemáticos mais avançados (potenciação e constantes), reforçar operações aritméticas com tipos decimais e demonstrar a importância do cuidado com divisões inteiras em linguagens como C.  
> **Observação:** Recomenda-se usar **(4.0/3)** ou **(4/3.0)** para evitar erros de arredondamento em divisões inteiras.

### 10 - Áreas Geométricas  
> Programa que lê três valores de ponto flutuante (A, B, C) e calcula:  
> - **a)** Área do triângulo retângulo** (base A, altura C): `(A * C) / 2`  
> - **b)** Área do círculo** (raio C): `π * C²` (π = 3.14159)  
> - **c)** Área do trapézio** (bases A e B, altura C): `((A + B) * C) / 2`  
> - **d)** Área do quadrado** (lado B): `B²`  
> - **e)** Área do retângulo** (lados A e B): `A * B`  

### 11 - Fórmula de Bhaskara  
> Programa que lê três coeficientes de ponto flutuante (A, B, C) e calcula as raízes de uma equação do segundo grau usando a fórmula de Bhaskara:  
>  
> **Fórmula:**  
> Δ = B² - 4AC  
> x = (-B ± √Δ) / (2A)  
>  
> **Condições:**  
> - Se **A = 0** ou **Δ < 0**, exibe _"Impossivel calcular"_ (divisão por zero ou raiz negativa).  
> - Caso contrário, calcula e mostra as duas raízes com 5 casas decimais.  

> **Objetivo:**  
> - Implementar cálculos matemáticos avançados (raiz quadrada, potência).  
> - Validar condições para evitar operações inválidas (divisão por zero, raiz negativa).  
> - Praticar estruturas condicionais e formatação de saída com precisão.  

> **Dica:**  
> - Usar `#include <math.h>` para a função `sqrt()`.  
> - Verificar se **A ≠ 0** e **Δ ≥ 0** antes de calcular as raízes.  
> - Usar `if-else` para tratar casos inválidos.
> **Objetivo:**  
> - Praticar cálculos geométricos básicos em programação.  
> - Aplicar fórmulas matemáticas com variáveis de ponto flutuante.  
> - Demonstrar a reutilização de variáveis em diferentes contextos.  
> - Treinar formatação de saída com precisão decimal.  
> **Dica:** Usar `double` para maior precisão e garantir arredondamentos corretos.

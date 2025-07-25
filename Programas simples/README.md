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


### 12 - Lanchonete  
> Programa que simula um pedido de lanchonete, onde o usuário informa o **código do item** e a **quantidade desejada**, e o sistema calcula o valor total a pagar com base na tabela de preços.  

#### **Funcionamento:**  
1. Exibe um **menu de produtos** com códigos e preços.  
2. Lê o **código do item** e a **quantidade**.  
3. Calcula o **valor total** conforme a tabela:  
   - **1** → Cachorro Quente (R$ 4.00)  
   - **2** → X-Salada (R$ 4.50)  
   - **3** → X-Bacon (R$ 5.00)  
   - **4** → Torrada Simples (R$ 2.00)  
   - **5** → Refrigerante (R$ 1.50)  
4. Se o código for inválido, exibe: *"Código inválido!"*.  
5. Caso contrário, mostra o **total a pagar** com 2 casas decimais.  

#### **Objetivos:**  
✔ **Praticar estruturas condicionais (`if-else`)** para seleção de preços.  
✔ **Formatar saída** de valores monetários (`%.2lf`).  
✔ **Melhorar interação com o usuário** exibindo um menu claro.  
✔ **Validar entrada** para evitar cálculos incorretos.  

#### **Dicas:**  
- Pode ser estendido para **calcular vários itens** (usando loop).  
- Ideal para exercícios de **lógica com tabelas de preços**.  

#### **Observação:**  
O código já implementado garante que o cálculo só ocorre se o **código for válido**, evitando erros.  

---  
**Exemplo de Saída:**  
```
--------------------------------
CODIGO     PRODUTO        PREÇO
--------------------------------
1        Cachorro Quente  R$ 4.00
2        X-Salada         R$ 4.50
3        X-Bacon          R$ 5.00
4        Torrada Simples  R$ 2.00
5        Refrigerante     R$ 1.50
--------------------------------
Digite o código e a quantidade do lanche desejado: 3 2
Total: R$ 10.00
```


### 13 - DDD  
> Programa que recebe um **código de DDD** (Discagem Direta a Distância) e informa a **cidade e estado** correspondente, conforme a tabela oficial.  

#### **Funcionamento:**  
1. Lê um número inteiro (**DDD**) digitado pelo usuário.  
2. Utiliza uma estrutura **`switch-case`** para verificar o DDD e retornar:  
   - O **nome da cidade** e **sigla do estado** (ex: `61 → "Brasilia (DF)"`).  
   - Se o DDD não existir, exibe: *"DDD nao cadastrado"*.  

#### **Objetivos:**  
✔ **Praticar estruturas de seleção (`switch-case`)** para mapeamento de valores.  
✔ **Validar entrada** e lidar com casos não mapeados (`default`).  
✔ **Fornecer resposta instantânea** com base em dados pré-definidos (tabela de DDDs).  

#### **Destaques do Código:**  
- **Organização:** Todos os DDDs estão mapeados de forma clara, facilitando manutenção.  
- **Eficiência:** O `switch-case` é ideal para comparações exatas (mais rápido que `if-else` encadeados).  
- **Tratamento de Erros:** Mensagem específica para DDDs inválidos.  

#### **Exemplo de Saída:**  
```  
Digite o DDD: 21  
Rio de Janeiro (RJ)  
```  
```  
Digite o DDD: 99  
Imperatriz (MA)  
```  
```  
Digite o DDD: 10  
DDD nao cadastrado  
```  

#### **Observações:**  
- **Extensível:** Pode ser atualizado com novos DDDs sem alterar a lógica principal.  
- **Aplicações reais:** Sistemas de telefonia, cadastros de clientes, etc.  

---  
**Nota:** O código já implementado cobre todos os DDDs brasileiros registrados, garantindo precisão.


### 14 - Mês  
> Programa que converte um **número de mês (1-12)** em seu **nome por extenso em inglês**, com a primeira letra maiúscula.  

#### **Funcionamento:**  
1. Solicita ao usuário que **digite um número entre 1 e 12** (inclusive).  
2. Usa uma estrutura **`switch-case`** para mapear o número ao mês correspondente:  
   - **1** → January  
   - **2** → February  
   - **...**  
   - **12** → December  
3. Se o número for **inválido** (fora do intervalo 1-12), exibe:  
   ```  
   Invalid month number!  
   Please enter a value between 1 and 12.  
   ```  

#### **Objetivos:**  
✔ **Praticar estruturas de seleção (`switch-case`)** para mapeamento de valores.  
✔ **Validar entrada** do usuário (números fora do intervalo).  
✔ **Formatar saída** corretamente (nomes em inglês com capitalização).  

#### **Destaques do Código:**  
- **Clareza:** Cada `case` corresponde exatamente a um mês, facilitando a leitura.  
- **Tratamento de Erros:** Mensagem **amigável** para entradas inválidas.  
- **Internacionalização:** Nomes em inglês (poderia ser estendido para outros idiomas).  

#### **Exemplo de Saída:**  
```  
Enter month number (1-12): 5  
May  
```  
```  
Enter month number (1-12): 13  
Invalid month number!  
Please enter a value between 1 and 12.  
```  

#### **Melhorias Possíveis:**  
- Usar um **array de strings** (`const char* meses[12]`) para simplificar o código.  
- Adicionar suporte a **outros idiomas** (ex.: português, espanhol).  

---  
**Nota:** Ideal para exercícios de **lógica básica** e **tratamento de entrada/saída**.


### 15 - Notas e Centavos 
> Programa que recebe um **valor monetário** (ponto flutuante) e calcula a **quantidade mínima** de notas e moedas necessárias para representá-lo, seguindo o sistema monetário brasileiro.  

#### **Funcionamento:**  
1. **Entrada:**  
   - Lê um valor em reais (ex: `576.73`).  
2. **Conversão:**  
   - Transforma o valor em **centavos** (para evitar erros de arredondamento com `double`).  
   - Separa a parte inteira (reais) da parte decimal (centavos).  
3. **Cálculo das Notas:**  
   - Divide o valor por **100, 50, 20, 10, 5, 2** (notas) e atualiza o saldo restante.  
4. **Cálculo das Moedas:**  
   - Divide os centavos por **50, 25, 10, 5, 1** (moedas) e atualiza o saldo restante.  
5. **Saída:**  
   - Exibe a quantidade de cada nota e moeda necessárias.  

#### **Objetivos:**  
✔ **Praticar operações matemáticas** (divisão inteira e resto).  
✔ **Evitar problemas de arredondamento** trabalhando com centavos como inteiros.  
✔ **Formatar saída** claramente (notas e moedas separadas).  

#### **Destaques do Código:**  
- **Eficiência:** Usa operações inteiras para garantir precisão.  
- **Organização:** Separa notas e moedas em seções distintas na saída.  
- **Robustez:** Funciona para qualquer valor positivo (até o limite de `int`).  

#### **Exemplo de Saída:**  
```  
Digite o valor a ser convertido: 576.73  

NOTAS:  
5 nota(s) de R$ 100.00  
1 nota(s) de R$ 50.00  
1 nota(s) de R$ 20.00  
0 nota(s) de R$ 10.00  
1 nota(s) de R$ 5.00  
0 nota(s) de R$ 2.00  

MOEDAS:  
1 moeda(s) de R$ 1.00  
1 moeda(s) de R$ 0.50  
0 moeda(s) de R$ 0.25  
2 moeda(s) de R$ 0.10  
0 moeda(s) de R$ 0.05  
3 moeda(s) de R$ 0.01  
```  

#### **Melhorias Possíveis:**  
- Validar entrada (valores negativos ou muito grandes).  
- Usar arrays para armazenar os valores das notas/moedas e evitar repetição de código.  

---  
**Nota:** Ideal para exercícios de **lógica matemática** e **tratamento de valores monetários**.


### 16 - Idade em Dias  
> Programa que converte uma **idade em dias** para **anos, meses e dias**, considerando:  
> - **1 ano = 365 dias**  
> - **1 mês = 30 dias**  

#### **Funcionamento:**  
1. **Entrada:**  
   - Lê um valor inteiro representando a idade em dias (ex: `400`).  
2. **Cálculo:**  
   - **Anos:** `dias / 365` (divisão inteira).  
   - **Meses:** `(dias % 365) / 30` (resto dos anos convertido para meses).  
   - **Dias:** `(dias % 365) % 30` (resto dos meses).  
3. **Saída:**  
   - Exibe o resultado no formato:  
     ```  
     X ano(s)  
     Y mes(es)  
     Z dia(s)  
     ```  

#### **Objetivos:**  
✔ **Praticar divisão inteira e resto** (`/` e `%`).  
✔ **Simplificar problemas de conversão de unidades** (tempo).  
✔ **Trabalhar com constraints** (suposições fixas sobre dias/meses/anos).  

#### **Exemplo de Saída:**  
```  
Digite a idade em dias: 400  
1 ano(s)  
1 mes(es)  
5 dia(s)  
```  

#### **Observações:**  
- **Restrição do Problema:**  
  - Assume anos de 365 dias e meses de 30 dias **sem exceções** (para simplificar).  
  - Garantido que o valor de entrada não gerará ambiguidades (ex.: 364 dias = 12 meses + 4 dias).  
- **Cenários Reais:**  
  - Para cálculos precisos, usar bibliotecas de data (ex.: `time.h` no C).  


### 17 - Identificador de Quadrante Cartesiano  
> Programa que determina o **quadrante** de coordenadas (X,Y) no plano cartesiano, processando múltiplos pontos até que uma coordenada **NULA** (0) seja informada.  

#### **Funcionamento:**  
1. **Entrada:**  
   - Lê pares de coordenadas `(X, Y)` em loop infinito (`while(1)`).  
2. **Condição de Parada:**  
   - Se **X = 0** ou **Y = 0**, encerra o programa **sem saída**.  
3. **Identificação do Quadrante:**  
   - **Primeiro quadrante (Q1):** `X > 0` e `Y > 0` → imprime `"primeiro"`.  
   - **Segundo quadrante (Q2):** `X < 0` e `Y > 0` → imprime `"segundo"`.  
   - **Terceiro quadrante (Q3):** `X < 0` e `Y < 0` → imprime `"terceiro"`.  
   - **Quarto quadrante (Q4):** `X > 0` e `Y < 0` → imprime `"quarto"`.  

#### **Objetivos:**  
✔ **Praticar estruturas de repetição** (`while` infinito com `break`).  
✔ **Aplicar condições lógicas** para mapear coordenadas.  
✔ **Validar entrada** (saída silenciosa para coordenadas nulas).   

#### **Destaques do Código:**  
- **Eficiência:** Condições diretas sem redundância.  
- **Clareza:** Nomes dos quadrantes em português, alinhados à convenção matemática.  
- **Controle de Fluxo:** Uso inteligente de `break` para sair do loop.  

---  
**Nota:** Ideal para exercícios de **geometria analítica** e **lógica condicional**.


### 18 - Cálculo de Combustível em Viagem  
> Programa que calcula o **consumo de combustível** de um veículo com base no **tempo de viagem** e **velocidade média**, considerando um rendimento fixo de **12 km/L**.  

#### **Funcionamento:**  
1. **Entrada:**  
   - Recebe o **tempo gasto (horas)** e a **velocidade média (km/h)**.  
   - Exemplo: `Digite o tempo gasto em horas e a velocidade média do carro: 2 60` (2 horas a 60 km/h).  
2. **Cálculos:**  
   - **Distância percorrida:** `tempo * velocidadeMedia` (em km).  
   - **Litros de combustível:** `distância / 12` (veículo faz 12 km/L).  
3. **Saída:**  
   - Exibe o total de litros com **3 casas decimais**.  
   - Exemplo: `A quantidade em litros de combustível gasto durante a viagem foi de 10.000 litros`.  

#### **Objetivos:**  
✔ **Praticar operações matemáticas** básicas (multiplicação e divisão).  
✔ **Trabalhar com constantes** (`#define` para o consumo do veículo).  
✔ **Formatar saída numérica** (precisão de 3 casas decimais).  

#### **Destaques do Código:**  
- **Clareza:** Uso de nomes descritivos para variáveis (`tempo`, `velocidadeMedia`, `litros`).  
- **Eficiência:** Cálculo direto sem etapas redundantes.  
- **Boas Práticas:** Uso de `#define` para evitar "números mágicos" no código.  

#### **Exemplo Completo:**  
```  
Digite o tempo médio gasto em horas e a velocidade média da viagem: 5 80  
A quantidade em litros de combustível gasto durante a viagem foi de 33.333 litros  
```  
*(5 horas × 80 km/h = 400 km; 400 km ÷ 12 km/L = 33.333 L)*  

#### **Possíveis Melhorias:**  
- Validar entradas (ex.: tempo ou velocidade negativos).  
- Permitir que o usuário insira o **consumo do veículo** (em vez de fixar 12 km/L).  

---  
**Nota:** Ideal para exercícios de **física aplicada** (cinemática) e **programação básica**.


### 19 - Feliz Natal!  
> Programa que transforma seu **nível de animação natalina** em um grito de "Feliz Natal!" personalizado, com **'a's extras** proporcional à felicidade digitada.  

#### **Funcionamento:**  
1. **Entrada:**  
   - Solicita um **índice de felicidade** (número inteiro).  
   - Exemplo: `Qual o número que representa o seu ânimo pelo natal: 5`.  
2. **Lógica:**  
   - Se o índice for **≥ 1**:  
     - Exibe `"Feliz nat"`, seguido de **N 'a's** (onde N = índice) e um `"l!"`.  
     - Exemplo: `Feliz nataaaaal!` (para índice = 5).  
   - Se for **≤ 0**:  
     - Exibe mensagem de desapontamento: `"Poxa que pena :("`.  
3. **Saída:**  
   - Personalizada conforme o índice ou mensagem alternativa.  

#### **Objetivos:**  
✔ **Praticar estruturas condicionais** (`if-else`).  
✔ **Usar loops** (`for`) para repetição controlada.  
✔ **Criar interatividade** com o usuário de forma lúdica.  

#### **Destaques do Código:**  
- **Criatividade:** Transforma um número em uma mensagem animada.  
- **Tratamento de Erros:** Responde a entradas inválidas (índice ≤ 0).  
- **Simplicidade:** Fácil adaptação para outros festejos (ex.: "Feliz aniversáriooo!").

#### **Exemplos de Saída:**  
```  
Qual o número que representa o seu ânimo pelo natal: 3  
Feliz nataaal!  
```  
```  
Qual o número que representa o seu ânimo pelo natal: 0  
Poxa que pena :(  
```  

#### **Melhorias Possíveis:**  
- Validar entrada para evitar números negativos.  
- Adicionar emojis (🎄🎅) para tornar a saída mais festiva.  

---  
**Nota:** Ideal para exercícios de **lógica divertida** e **introdução a loops**.

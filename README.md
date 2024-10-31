# Cálculo da Área e Perímetro de um Círculo

Este projeto foi desenvolvido como parte da disciplina de Linguagem e Técnicas de Programação no curso de Análise e Desenvolvimento de Sistemas da Faculdade UNICESUMAR. O objetivo deste código é calcular a área e o perímetro de um círculo com base no raio fornecido pelo usuário.

## Funcionalidade do Programa

O código solicita ao usuário que insira o raio do círculo e calcula tanto a área quanto o perímetro, exibindo os resultados formatados com duas casas decimais.

### Estrutura do Código

1. **Definições e Declaração de Variáveis**
   - `#define PI 3.14159265358979323846`: Define a constante π.
   - `double raio, area, perimetro`: Variáveis para armazenar o raio, a área e o perímetro do círculo.

2. **Entrada do Usuário**
   - O programa usa `printf` para solicitar que o usuário insira o raio do círculo.
   - `scanf("%lf", &raio)`: Lê o valor do raio inserido pelo usuário.

3. **Cálculo da Área e do Perímetro**
   - A área é calculada usando a fórmula \( A = \pi r^2 \).
   - O perímetro é calculado usando a fórmula \( P = 2\pi r \).

4. **Saída do Resultado**
   - Exibe a área e o perímetro do círculo, formatando os resultados com duas casas decimais usando `printf`.

## Exemplo de Uso

### Entrada
```plaintext
Digite o raio do circulo: 5
```

### Saída
```plaintext
Area do circulo: 78.54
Perimetro do circulo: 31.42
```

## Tecnologias e Conceitos Utilizados

- **C**: Linguagem de programação utilizada.
- **Biblioteca Math**: Inclusão da biblioteca `math.h` para uso da função `pow()`.
- **Entrada e Saída**: Utilização das funções `printf` e `scanf` para interação com o usuário.
- **Cálculo de Área e Perímetro**: Aplicação das fórmulas matemáticas para calcular a área e o perímetro do círculo.

## Autor

Caio Frederico, como parte da disciplina de Linguagem e Técnicas de Programação da Faculdade UNICESUMAR.

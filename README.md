# exercicios-logica-c# 
Sistema de Gerenciamento de Notas em C

Um programa robusto desenvolvido em linguagem C para gerenciar notas de alunos de forma modular. O projeto utiliza matrizes bidimensionais, vetores, funções especializadas, estruturas de repetição e técnicas de programação defensiva (validação de entradas).

---

##  Funcionalidades do Sistema

- **Cadastro com Validação:** O sistema solicita as 3 notas de 5 alunos e valida rigorosamente se os valores digitados estão entre 0 e 10, utilizando um loop `do-while` para impedir entradas incorretas.
- **Cálculo de Média Individual:** Processa a média aritmética das notas de cada aluno de forma isolada através de funções dedicadas.
- **Classificação Acadêmica:** Avalia automaticamente a média final e exibe a situação do aluno:
  - **Aprovado** (Média maior ou igual a 7.0)
  - **Recuperação** (Média entre 5.0 e 6.9)
  - **Reprovado** (Média abaixo de 5.0)
- **Média Geral da Turma:** Calcula e apresenta a média global considerando todas as notas cadastradas na matriz.
- **Destaque do Melhor Aluno:** Varre o vetor de médias para identificar e exibir qual aluno obteve o maior desempenho da turma.

---

##  Tecnologias e Conceitos Aplicados

- Linguagem C (Padrão C99)
- **Matrizes Bidimensionais** (`float notas[5][3]`) e **Vetores** (`float media[5]`)
- **Modularização de Código** (Divisão de responsabilidades em funções independentes)
- Uso de diretivas de pré-processamento (`#define`) para constantes globais (`ALUNOS` e `COLUNAS`)
- Controle de fluxo (`for`, `do-while`, `if-else`) e tratamento de dados via teclado (`scanf`)

---

##  Estrutura de Funções

O código foi construído seguindo preceitos de organização e legibilidade:

* `lerNotas`: Realiza a entrada de dados na matriz com validação em tempo real.
* `cacularMedia`: Calcula a média ponderada/aritmética de um aluno específico (linha da matriz).
* `exibirSituacao`: Avalia a média e imprime a situação acadêmica correspondente.
* `calcularMediaTurma`: Percorre toda a matriz para calcular a média global.
* `encontrarMelhorAluno`: Compara as médias armazenadas e retorna a maior nota encontrada.

---

##  Como Compilar e Executar

Você pode compilar e rodar este programa utilizando qualquer IDE ou compilador de C (como Dev-C++, Code::Blocks ou o GCC via terminal).

### Usando o GCC pelo Terminal:

1. Clone ou baixe este repositório para o seu computador.
2. Abra o terminal na pasta onde o código está salvo.
3. Compile o programa com o comando:
   ```bash
   gcc main.c -o sistema_notas

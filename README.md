UNIVERSIDADE TUIUTI DO PARANÁ

Autor: Daniel Souto Neves



Estudo dirigido da disciplina de Programação avançada.

2º Bimestre:
-Sobrecarga de Operadores
  -Pilha.h: Classe Pilha de strings com sobrecarga dos operadores "+=" (empilha) e "--" (desempilha).
  -Sobrecarga_main.cpp: Teste dos métodos da classe Pilha.
  
-Funções Amigas
 -Pilha.h: Adicionado sobrecarga dos operadores ">>" e "<<", que lê um arquivo de texto e empilha, e desempilha e grava em outro    arquivo de texto, respectivamente.
  -Friends_main.cpp: Testa as funções amigas.
  -pilha.txt: Arquivo com a pilha a ser lida, com palavras separadas por " " ou "\n".
  -pilha2.txt: Arquivo com a pilha escrita no mesmo formato.
   
-Exceções
  -Pilha.h: Contém classes PilhaVaziaException, PilhaCheiaException, StringVaziaException e Pilha com os métodos alterados para o tratamento de exceções.
   -Excecao_main.cpp: Teste das exceções com try e catch, linhas com comandos que cairíam em uma das exceções estçao comentadas.
     
-Template
  -Pilha.h: Classe Pilha com tipo genérico.
  -Matriz.h: Classe Matriz com sobrecarga dos operadores "+" (soma de matrizes), "-" (diferença de matrizes), "*" (multiplicação por escalar), ">>" (leitura de matriz em um arquivo) e "<<" (gravação de matriz em um arquivo), devido à inicialização no construtor (=0), apenas tipos com valores numéricos são aceitos.
  -Template_main.cpp: Teste das operações com matrizes de tipo int e float, de tamanho 3x3.
  -Ai.txt: Arquivo com uma matriz com valores int a ser lida pelo programa com valores em uma linha separados por " " e linhas separadas por "\n".
  -Af.txt: Arquivo com uma matriz com valores float a ser lida pelo programa com valores em uma linha separados por " " e linhas separadas por "\n".
  -Bi.txt: Arquivo a ser gravado com uma matriz com valores int no mesmo formato.
  -Bf.txt: Arquivo a ser gravado com uma matriz com valores float no mesmo formato.
  
-STL
  -STL_main.cpp: Contém os testes das funções STL numerados para os tipos 1- vector, 2- list, 3- set e 4- map.

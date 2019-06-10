UNIVERSIDADE TUIUTI DO PARANÁ

Autor: Daniel Souto Neves

Estudo dirigido da disciplina de Programação avançada.

1º Bimestre:

->heranca

  -Caminhao.h: Classe Caminhao herda de Veiculo.
  
  -Caminhonete.h: Classe Caminhonete herda de Carro e Caminhao.
  
  -Carro.h: Classe Carro herda de Veiculo.
  
  -Veiculo.h: Classe Veiculo.
  
  -main.cpp: Teste dos métodos de todas classes.
  
->mvc

  -BancoController.h: Classe BancoController com o funcionamento do programa.
  
  -BancoView.h: Classe BancoView com a interface do programa, chama os métodos da classe BancoController.
  
  -Cliente.h: Classe Cliente.
  
  -Conta.h: Classe Conta.
  
  -main.cpp: Teste de funcionamento do programa.
  
->classes-abstratas

  -Cliente.h: Classe Cliente.
  
  -Conta.h: Classe abstrata Conta.
  
  -ContaCorrente.h: Classe ContaCorrente herda de Conta.
  
  -ContaPoupanca.h: Classe ContaPoupanca herda de Conta.
  
  -main.cpp: Teste dos métodos e do polimorfismo das classes.

2º Bimestre:

->sobrecarga

  -Pilha.h: Classe Pilha de strings com sobrecarga dos operadores "+=" (empilha) e "--" (desempilha).
  
  -main.cpp: Teste dos métodos da classe Pilha.
  
->funcoes-amigas

 -Pilha.h: Adicionado sobrecarga dos operadores ">>" e "<<", que lê um arquivo de texto e empilha, e desempilha e grava em outro    arquivo de texto, respectivamente.
 
  -main.cpp: Testa as funções amigas.
  
  -pilha.txt: Arquivo com a pilha a ser lida, com palavras separadas por " " ou "\n".
  
  -pilha2.txt: Arquivo com a pilha escrita no mesmo formato.
   
->excecoes

  -Pilha.h: Contém classes PilhaVaziaException, PilhaCheiaException, StringVaziaException e Pilha com os métodos alterados para o tratamento de exceções.
  
   -main.cpp: Teste das exceções com try e catch, linhas com comandos que cairíam em uma das exceções estçao comentadas.
     
->templates

  -Pilha.h: Classe Pilha com tipo genérico.
  
  -Matriz.h: Classe Matriz com sobrecarga dos operadores "+" (soma de matrizes), "-" (diferença de matrizes), "*" (multiplicação por escalar), ">>" (leitura de matriz em um arquivo) e "<<" (gravação de matriz em um arquivo), devido à inicialização no construtor (=0), apenas tipos com valores numéricos são aceitos.
  
  -main.cpp: Teste das operações com matrizes de tipo int e float, de tamanho 3x3.
  
  -Ai.txt: Arquivo com uma matriz com valores int a ser lida pelo programa com valores em uma linha separados por " " e linhas separadas por "\n".
  
  -Af.txt: Arquivo com uma matriz com valores float a ser lida pelo programa com valores em uma linha separados por " " e linhas separadas por "\n".
  
  -Bi.txt: Arquivo a ser gravado com uma matriz com valores int no mesmo formato.
  
  -Bf.txt: Arquivo a ser gravado com uma matriz com valores float no mesmo formato.
  
->stl

  -main.cpp: Contém os testes das funções STL numerados para os tipos 1- vector, 2- list, 3- set e 4- map.


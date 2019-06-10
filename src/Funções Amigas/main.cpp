#include "Pilha.h"
#include <fstream>

int main()
{
    Pilha p;
    ifstream ler("pilha.txt");
    ler>>p;
    p.imprime();
    ler.close();
    ofstream escrever("pilha2.txt");
    escrever<<p;
    escrever.close();
    p.imprime();
    return 0;
}

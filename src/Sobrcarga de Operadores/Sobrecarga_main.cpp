#include "Pilha.h"

int main()
{
    Pilha p(10);
    cout<<endl<<"Tamanho da pilha: "<<p.tamanho()<<endl;
    p.empilha("Thor");
    p += "Hulk";
    p.imprime();
    p.desempilha();
    p.imprime();
    --p;
    p.imprime();

    Pilha p1 = Pilha();
    p1.desempilha();
    cout<<endl<<"Tamanho da pilha: "<<p1.tamanho()<<endl;
    for(int i=0;i<101;i++)p1.empilha("oi");
    p1.imprime();

    return 0;
}

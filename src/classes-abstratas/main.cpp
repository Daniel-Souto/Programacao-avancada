#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"

int main()
{

    ContaCorrente cc1(1,Cliente("Jose"));
    ContaCorrente cc2(2,Cliente("Joao"));
    ContaPoupanca cp1(3,Cliente("Pedro"));
    ContaPoupanca cp2(4,Cliente("Jorge"));

    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Criacao das contas"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cc1.extrato();
    cc2.extrato();
    cp1.extrato();
    cp2.extrato();
    cout<<"-----------------------------------------------------"<<endl;

    cc1.deposita(100);
    cc2.deposita(2000);
    cp1.deposita(4000);
    cp2.deposita(5);

    cout<<"Depositos"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cc1.extrato();
    cc2.extrato();
    cp1.extrato();
    cp2.extrato();
    cout<<"-----------------------------------------------------"<<endl;

    cc1.retira(50);
    cc2.retira(1000);
    cp1.retira(100);
    cp2.retira(1);

    cout<<"Saques"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cc1.extrato();
    cc2.extrato();
    cp1.extrato();
    cp2.extrato();
    cout<<"-----------------------------------------------------"<<endl;

    cout<<"Transferencia de 1000 de conta poupanca para corrente"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cp1.transfere(&cc1,1000);
    cc1.extrato();
    cp1.extrato();
    cout<<"-----------------------------------------------------"<<endl;

    cout<<"Igualando conta corrente com poupanca"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cp2.deposita(996);
    cc2.extrato();
    cp2.extrato();
    cout<<"-----------------------------------------------------"<<endl;

    cout<<"Juros diarios de 100 dias"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cc2.aplicaJurosDiarios(100);
    cp2.aplicaJurosDiarios(100);
    cc2.extrato();
    cp2.extrato();
    cout<<"-----------------------------------------------------"<<endl;

    //Conta c[100];
    //Atividade 5: Ocorre um erro de compilação ao tentar criar um objeto da classe Conta pois
    //Conta é uma classe abstrata, ja que possui um metodo virtual puro(abstrato) 'aplicarJurosDiarios'.
    //Para resolver este problema, podemos criar um vetor de ponteiros do tipo Conta 'Conta *c[100];',
    //o que permite que as variaveis do vetor recebam propriedades de um dos filhos das classes Conta.

    cout<<"Vetor do tipo Conta com 10 posicoes e polimorfismo"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    Conta *c[10];
    for(int i = 0; i < 10; ++i)
    {
        if(i % 2 == 0)
        {
            c[i] = new ContaCorrente(i+5,Cliente("Corrente"));
        }
        else
        {
            c[i] = new ContaPoupanca(i+5,Cliente("Poupanca"));
        }
    }
    cout<<"-----------------------------------------------------"<<endl;

    delete[] c;

    return 0;
}

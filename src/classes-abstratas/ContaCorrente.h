#ifndef _CONTACORRENTE_H_
#define _CONTACORRENTE_H_

#include "Conta.h"

class ContaCorrente:public Conta
{
public:
    ContaCorrente(int numero = 0, Cliente cliente = Cliente()):Conta(numero,cliente)
    {
        cout<<"Criando conta "<<numero<<" do cliente "<<cliente.getNome()<<endl;
    }

    void extrato()
    {
        cout<<"Conta corrente numero: "<<_numero<<endl;
        cout<<"Cliente: "<<_cliente.getNome()<<endl;
        cout<<"Saldo : "<<_saldo<<endl;
    }

    void aplicaJurosDiarios(int dias)
    {
        float juros;
        for(int i = 0; i < dias; ++i)
        {
            juros = _saldo * 0.01/100;
            _saldo += juros;
        }
    }
};
#endif // _CONTACORRENTE_H_

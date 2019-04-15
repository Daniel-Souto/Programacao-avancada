#ifndef _CONTAPOUPANCA_H_
#define _CONTAPOUPANCA_H_

#include "Conta.h"

class ContaPoupanca:public Conta
{
public:
    ContaPoupanca(int numero = 0, Cliente cliente = Cliente()):Conta(numero,cliente)
    {
        cout<<"Criando conta "<<numero<<" do cliente "<<cliente.getNome()<<endl;
    }

    void extrato()
    {
        cout<<"Conta poupanca numero: "<<_numero<<endl;
        cout<<"Cliente: "<<_cliente.getNome()<<endl;
        cout<<"Saldo : "<<_saldo<<endl;
    }

    void aplicaJurosDiarios(int dias)
    {
        float juros;
        for(int i = 0; i < dias; ++i)
        {
            juros = _saldo * 0.08/100;
            _saldo += juros;
        }
    }

};
#endif // _CONTACORRENTE_H_

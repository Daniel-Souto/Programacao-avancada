#ifndef _CONTA_H_
#define _CONTA_H_

#include <iostream>
#include "Cliente.h"

using namespace std;

class Conta
{
public:
    Conta(int numero = 0, Cliente cliente = Cliente()):_numero(numero),_saldo(0),_cliente(cliente){}

    virtual ~Conta(){}

    float getSaldo()const {return _saldo;}

    int getNumero()const {return _numero;}

    void deposita(float valor)
    {
        if(valor > 0)
        {
            _saldo += valor;
        }
        else
        {
            cout<<"Valor invalido para deposito."<<endl;
        }
    }

    void retira(float valor)
    {
        if(valor < 0 || valor > _saldo)
        {
            cout<<"Valor invalido para saque."<<endl;
        }
        else
        {
            _saldo -= valor;
        }
    }

    void transfere(Conta* contaDestino, float valor)
    {
        if(valor < 0 || valor > _saldo)
        {
            cout<<"Valor invalido."<<endl;
            return;
        }
        else
        {
            retira(valor);
            contaDestino->deposita(valor);
        }
    }

    virtual void extrato()
    {
        cout<<"Conta numero: "<<_numero<<endl;
        cout<<"Cliente: "<<_cliente.getNome()<<endl;
        cout<<"Saldo : "<<_saldo<<endl;
    }

    virtual void aplicaJurosDiarios(int) = 0;

protected:
    int _numero;
    float _saldo;
    Cliente _cliente;
};
#endif // _CONTA_H_

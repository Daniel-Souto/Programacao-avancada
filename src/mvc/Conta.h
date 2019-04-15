#ifndef _CONTA_H_
#define _CONTA_H_

#include "Cliente.h"

class Conta
{
public:
    Conta(int num = 0,float saldo = 0, Cliente cliente = Cliente("")):_num(num),_saldo(0),_cliente(cliente){}

    int getNum()const{return _num;}
    float getSaldo()const{return _saldo;}
    Cliente getCliente()const{return _cliente;}

    void setSaldo(float saldo){_saldo = saldo;}
    void setNum(int num){_num = num;}
    void setCliente(Cliente cliente){_cliente = cliente;}

private:
    int _num;
    float _saldo;
    Cliente _cliente;
};
#endif // _CONTA_H_

#ifndef _CLIENTE_H_
#define _CLIENTE_H_

#include <string>
#include <iostream>
using namespace std;

class Cliente
{
public:
    Cliente(string nome = ""):_nome(nome){}

    string getNome()const{return _nome;}

    void setNome(string nome){_nome = nome;}
private:
    string _nome;
};


#endif // _CLIENTE_H_

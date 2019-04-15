#ifndef _CARRO_H_
#define _CARRO_H_

#include "Veiculo.h"

class Carro:public Veiculo
{
public:

    Carro(string placa = "", double peso = 0, double velMax = 0,
          double preco = 0,string modelo = "", string cor = "" ) : Veiculo(placa,peso,velMax,preco),
                                                                   _modelo(modelo),
                                                                   _cor(cor)
    {
        cout<<"Carro()"<<endl;
    }

    virtual ~Carro()
    {
        cout<<"~Carro()"<<endl;
    }

    //Setters
    void setModelo(string modelo){_modelo = modelo;}

    void setCor(string cor){_cor = cor;}

    //Getters
    string getModelo()const{return _modelo;}

    string getCor()const{return _cor;}

    //Imprime informacoes do carro
    virtual void imprime()const
    {
        Veiculo::imprime();
        cout<<"Modelo: "<<_modelo<<endl;
        cout<<"Cor: "<<_cor<<endl;
    }

protected:
    string _modelo;
    string _cor;
};
#endif // _CARRO_H_

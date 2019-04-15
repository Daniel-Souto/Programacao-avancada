#ifndef _VEICULO_H_
#define _VEICULO_H_

#include <string> //Para atributo placa
#include <iostream> //Utilizado para cout
using namespace std;

class Veiculo
{
public:
    Veiculo(string placa = "",double peso = 0, double velMax = 0, double preco = 0) : _placa(placa),
                                                                                      _peso(peso),
                                                                                      _velMax(velMax),
                                                                                      _preco(preco)
    {
        cout<<"Veiculo()"<<endl;
        //Se algum valor numerico for negativo, zera este valor
        if(peso < 0)
        {
            cout<<"Peso invalido."<<endl;
            _peso = 0;
        }

        if(velMax < 0)
        {
            cout<<"Velocidade maxima invalida."<<endl;
            _velMax = 0;
        }

        if(preco < 0)
        {
            cout<<"Preco invalido."<<endl;
            _preco = 0;
        }
    }

    virtual ~Veiculo()
    {
        cout<<"~Veiculo()"<<endl;
    }



    //setters: (para valores numericos nao altera se forem negativos)
    void setPlaca(string placa){ _placa = placa;}

    void setPeso(double peso)
    {
        if(peso >= 0)
        {
             _peso = peso;
        }
        else
        {
            cout<<"Novo valor de peso invalido"<<endl;
        }
    }

    void setVelMax(double velMax)
    {
        if(velMax >= 0)
        {
             _velMax = velMax;
        }
        else
        {
            cout<<"Novo valor de velocidade maxima invalido"<<endl;
        }
    }

    void setPreco(double preco)
    {
        if(preco >= 0)
        {
             _preco = preco;
        }
        else
        {
            cout<<"Novo valor de preco invalido"<<endl;
        }
    }


    //getters:
    string getPlaca()const{return _placa;}

    double getPeso()const{return _peso;}

    double getVelMax()const{return _velMax;}

    double getPreco()const{return _preco;}

    //Imprime os dados do veiculo
    virtual void imprime()const
    {
        cout<<"Placa: "<<_placa<<endl;
        cout<<"Peso: "<<_peso<<" kg"<<endl;
        cout<<"Velocidade Maxima: "<<_velMax<< " km/h"<<endl;
        cout<<"Preco: R$ "<<_preco<<endl;
    }

protected:

    string _placa;
    double _peso; //em kg
    double _velMax; //em km/h
    double _preco; //em R$

};

#endif // _VEICULO_H_

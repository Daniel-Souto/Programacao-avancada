#ifndef _CAMINHAO_H_
#define _CAMINHAO_H_

#include "Veiculo.h"

class Caminhao:public Veiculo
{
public:

    Caminhao(string placa = "", double peso = 0, double velMax = 0, double preco = 0,
             double capaci = 0, double compri = 0, double altMax = 0) : Veiculo(placa,peso,velMax,preco),
                                                                   _capaci(capaci), _compri(compri), _altMax(altMax)
    {
        cout<<"Caminhao()"<<endl;
        if(capaci < 0)
        {
            cout<<"Capacidade invalida."<<endl;
            _capaci = 0;
        }

        if(compri < 0)
        {
            cout<<"Comprimento invalido."<<endl;
            _compri = 0;
        }

        if(altMax < 0)
        {
            cout<<"Altura Maxima invalida."<<endl;
            _altMax = 0;
        }
    }

    virtual ~Caminhao()
    {
        cout<<"~Caminhao()"<<endl;
    }

    //Setters
    void setCapaci(double capaci)
    {
        if(capaci >= 0)
        {
             _capaci = capaci;
        }
        else
        {
            cout<<"Novo valor de capacidade invalido"<<endl;
        }
    }

    void setCompri(double compri)
    {
        if(compri >= 0)
        {
             _compri = compri;
        }
        else
        {
            cout<<"Novo valor de comprimento invalido"<<endl;
        }
    }

    void setAltMax(double altMax)
    {
        if(altMax >= 0)
        {
             _altMax = altMax;
        }
        else
        {
            cout<<"Novo valor de altura maxima invalido"<<endl;
        }
    }

    //Getters
    double getCapaci()const{return _capaci;}
    double getCompri()const{return _compri;}
    double getAltMax()const{return _altMax;}


    //Imprime informacoes do carro
    virtual void imprime()const
    {
        Veiculo::imprime();
        cout<<"Capacidade: "<<_capaci<< " toneladas"<<endl;
        cout<<"Comprimento: "<<_compri<<" m"<<endl;
        cout<<"Altura Maxima: "<<_altMax<<" m"<<endl;
    }

protected:
    double _capaci; //em toneladas
    double _compri; //em metros
    double _altMax; //em metros
};
#endif // _CAMINHAO_H_


#ifndef _CAMINHONETE_H_
#define _CAMINHONETE_H_

#include "Carro.h"
#include "Caminhao.h"

class Caminhonete:public Carro, public Caminhao
{
public:
        Caminhonete(string placa, double peso, double velMax,
                    double preco, string modelo, string cor,
                    double capaci, double compri, double altMax)
                    :Carro(placa, peso, velMax, preco, modelo, cor)
                    ,Caminhao(placa, peso, velMax, preco, capaci, compri, altMax){cout<<"Caminhonete()"<<endl;}

        virtual ~Caminhonete(){cout<<"~Caminhonete()"<<endl;}

        void imprime()const
        {
            Carro::imprime();
            cout<<"Capacidade: "<<_capaci<< " toneladas"<<endl;
            cout<<"Comprimento: "<<_compri<<" m"<<endl;
            cout<<"Altura Maxima: "<<_altMax<<" m"<<endl;
        }
};
#endif // _CAMINHONETE_H_

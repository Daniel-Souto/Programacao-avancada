#include "Veiculo.h"
#include "Caminhao.h"
#include "Carro.h"
#include "Caminhonete.h"

int main()
{
    Veiculo v1("AAA-0001",2000,100,25000); //teste construtor com parametros
    cout<<"Informacoes veiculo 1:"<<endl;
    v1.imprime(); //teste imprime da classe veiculo
    cout<<endl;

    Veiculo v2; //teste construtor sem parametros
    v2.setPlaca("BBB-0002"); //teste setters
    v2.setPeso(3000);
    v2.setVelMax(150);
    v2.setPreco(50000);
    cout<<"Informacoes veiculo 2:"<<endl; //teste getters
    cout<<"Placa: "<<v2.getPlaca()<<endl;
    cout<<"Peso: "<<v2.getPeso()<<" kg"<<endl;
    cout<<"Velocidade Maxima: "<<v2.getVelMax()<<" km/h"<<endl;
    cout<<"Preco: "<<v2.getPreco()<<",00"<<endl<<endl;

    Carro c1("CCC-0003",4000,200,75000,"Xundra","Fucsia"); //teste construtor com parametros
    cout<<"Informacoes carro 1:"<<endl;
    c1.imprime(); //teste imprime da classe carro
    cout<<endl;

    Carro c2; //teste construtor sem parametros
    c2.setPlaca("DDD-0004"); //teste setters
    c2.setPeso(5000);
    c2.setVelMax(250);
    c2.setPreco(100000);
    c2.setModelo("Calhambeque");
    c2.setCor("Gelo");
    cout<<"Informacoes carro 2:"<<endl; //teste getters
    cout<<"Placa: "<<c2.getPlaca()<<endl;
    cout<<"Peso: "<<c2.getPeso()<<" kg"<<endl;
    cout<<"Velocidade Maxima: "<<c2.getVelMax()<<" km/h"<<endl;
    cout<<"Preco: "<<c2.getPreco()<<",00"<<endl;
    cout<<"Modelo: "<<c2.getModelo()<<endl;
    cout<<"Cor: "<<c2.getCor()<<endl<<endl;

    Caminhao ca1("EEE-0005",10000,50,200000,30,15,3); //teste construtor com parametros
    cout<<"Informacoes caminhao 1:"<<endl;
    ca1.imprime(); //teste imprime da classe caminhao
    cout<<endl;

    Caminhao ca2; //teste construtor sem parametros
    ca2.setPlaca("FFF-0006"); //teste setters
    ca2.setPeso(20000);
    ca2.setVelMax(75);
    ca2.setPreco(250000);
    ca2.setCapaci(40);
    ca2.setCompri(20);
    ca2.setAltMax(4);
    cout<<"Informacoes caminhao 2:"<<endl; //teste getters
    cout<<"Placa: "<<ca2.getPlaca()<<endl;
    cout<<"Peso: "<<ca2.getPeso()<<" kg"<<endl;
    cout<<"Velocidade Maxima: "<<ca2.getVelMax()<<" km/h"<<endl;
    cout<<"Preco: "<<ca2.getPreco()<<",00"<<endl;
    cout<<"Capacidade: "<<ca2.getCapaci()<<" toneladas"<<endl;
    cout<<"Comprimento: "<<ca2.getCompri()<<" m"<<endl;
    cout<<"Altura Maxima: "<<ca2.getAltMax()<<" m"<<endl<<endl;

    Caminhonete cam("GGG-0007",50,2,20,"Brinquedo","Verde",0.001,0.02,0.02); //Teste caminhonete
    cam.imprime();

    return 0;
}

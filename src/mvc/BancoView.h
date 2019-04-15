#ifndef _BANCOVIEW_H_
#define _BANCOVIEW_H_

#include <iostream>
#include "BancoController.h"
#include "Conta.h"

using namespace std;

class BancoView
{
public:

    BancoView(){}
    virtual ~BancoView(){}

    static void exibirMenu()
    {
        cout<<"Escolha a opcao desejada: "<<endl;
        cout<<"1 - Criar conta."<<endl;
        cout<<"2 - Listar todas contas."<<endl;
        cout<<"3 - Depositar em uma conta."<<endl;
        cout<<"4 - Sacar de uma conta."<<endl;
        cout<<"5 - Tirar extrato de uma conta."<<endl;
        cout<<"6 - Trasferir de uma conta para outra."<<endl;
        cout<<"7 - Sair."<<endl;
    }

    static char lerOppcao()
    {
        char opcao;
        do
        {
            cout<<"Digite a opcao: ";
            cin>>opcao;
            if(opcao < '1' || opcao > '7')
            {
                cout<<"Opcao invalida."<<endl;
            }
        }while(opcao < '1' || opcao > '7');

        return opcao;
    }

    static Conta exibirCadastroConta(int numContas)
    {
        cout<<"Cadastrar uma conta:"<<endl;
        cout<<"Digite o nome do cliente: ";
        string nome;
        cin>>nome;
        Cliente cli(nome);
        int num = numContas + 1;
        return Conta(num,0,cli);
    }

    static void exibirContas(Conta* c[])
    {
        cout<<"Numero da conta  ||  Nome do cliente  "<<endl;
        cout<<"--------------------------------------------------------"<<endl;
        for(int i = 0; i < 100; ++i)
        {
            if(c[i]->getNum() == -1)
            {
                continue;
            }
            else
            {
                Cliente cli = c[i]->getCliente();
                cout<<c[i]->getNum()<<"  ||  "<<cli.getNome()<<endl;
                cout<<"--------------------------------------------------------"<<endl;
            }
        }
        system("pause");
        system("CLS");
    }

    static Conta selecionarConta(Conta* c[])
    {
        cout<<"Digite o numero da conta desejada: ";
        int num;
        cin>>num;
        for(int i = 0; i < 100; ++i)
        {
            if(c[i]->getNum() == -1)
            {
                continue;
            }
            if(c[i]->getNum() == num)
            {
                return *c[i];
            }
        }
    }

    static float exibirDeposito()
    {
        cout<<"Valor a ser depositado: ";
        float val;
        cin>>val;
        if(val >= 0)
        {
            return val;
        }
        else
        {
            BancoView::exibirMsgErro("Valor invalido.");
            return 0;
        }
    }

    static float exibirRetirada()
    {
        cout<<"Valor a ser sacado: ";
        float val;
        cin>>val;
        if(val >= 0)
        {
            return val;
        }
        else
        {
            BancoView::exibirMsgErro("Valor invalido.");
            return 0;
        }
    }

    static float exibirTransferencia()
    {
        cout<<"Valor a ser transferido: ";
        float val;
        cin>>val;
        if(val >= 0)
        {
            return val;
        }
        else
        {
            BancoView::exibirMsgErro("Valor invalido.");
            return 0;
        }
    }

    static void exibirExtrato(Conta c)
    {
        cout<<"Numero da conta  ||  Nome do cliente  ||  Saldo da conta"<<endl;
        cout<<"--------------------------------------------------------"<<endl;
        Cliente cli = c.getCliente();
        cout<<c.getNum()<<" ||  "<<cli.getNome()<<"  ||  "<<c.getSaldo()<<endl;
        cout<<"--------------------------------------------------------"<<endl;
        system("pause");
        system("CLS");
    }

    static void exibirMsgErro(string msg)
    {
        cout<<"Erro: "<<msg<<endl;
        system("pause");
        system("CLS");
    }

    static void exibirMsgSucesso(string msg)
    {
        cout<<msg<<" realizado com exito."<<endl;
        system("pause");
        system("CLS");
    }
};
#endif // _BANCOVIEW_H_

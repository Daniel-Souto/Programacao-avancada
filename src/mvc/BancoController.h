#ifndef _BANCOCONTROLLER_H_
#define _BANCOCONTROLLER_H_

#include "BancoView.h"
#include "Conta.h"

class BancoController
{
public:
    BancoController()
    {
        for(int i = 0; i < 100; ++i)
        {
            _contas[i] = new Conta;
            _contas[i]->setNum(-1);
        }
        _numContas = 0;
    }

    virtual ~BancoController()
    {
        delete[] _contas;
    }

    int getNumContas(){return _numContas;}

    void cadastrarConta(Conta c)
    {
        _numContas++;
        int i = 0;
        while(_contas[i]->getNum() != -1 && i < 100)
        {
            ++i;
        }
        if(i < 100)
        {
            *_contas[i] = c;
        }
        else
        {
            BancoView::exibirMsgErro("Nao e possivel criar mais contas.");
        }
        BancoView::exibirMsgSucesso("Cadastro da conta");
    }

    void listarContas(Conta* c[])
    {
        BancoView::exibirContas(c);
    }

    void realizarDeposito()
    {
        Conta c;
        c = BancoView::selecionarConta(_contas);
        int i = 0;
        while(_contas[i]->getNum() != c.getNum() && i < 100)
        {
            ++i;
        }
        if(i == 100)
        {
            BancoView::exibirMsgErro("Conta nao existente.");
        }
        else
        {
            float valor = BancoView::exibirDeposito();
            valor = _contas[i]->getSaldo() + valor;
            _contas[i]->setSaldo(valor);
            BancoView::exibirMsgSucesso("Deposito");
        }
    }

    void realizarRetirada()
    {
        Conta c = BancoView::selecionarConta(_contas);
        int i = 0;
        while(_contas[i]->getNum() != c.getNum() && i < 100)
        {
            ++i;
        }
        if(i == 100)
        {
            BancoView::exibirMsgErro("Conta nao existente.");
        }
        else
        {
            float valor = BancoView::exibirRetirada();
            if((_contas[i]->getSaldo() - valor) < 0)
            {
                BancoView::exibirMsgErro("Saldo invalido para saque.");
            }
            else
            {
                valor = _contas[i]->getSaldo() - valor;
                _contas[i]->setSaldo(valor);
                BancoView::exibirMsgSucesso("Saque");
            }
        }
    }

    void realizarTransferencia()
    {
        cout<<"Conta a ser retirada: "<<endl;
        Conta c1 = BancoView::selecionarConta(_contas);
        int i = 0;
        while(_contas[i]->getNum() != c1.getNum() && i < 100)
        {
            ++i;
        }
        if(i == 100)
        {
            BancoView::exibirMsgErro("Conta a ser sacada nao existente.");
        }
        else
        {
            cout<<"Conta a ser depositada: "<<endl;
            Conta c2 = BancoView::selecionarConta(_contas);
            int j = 0;
            while(_contas[j]->getNum() != c2.getNum() && j < 100)
            {
                ++j;
            }
            if(j == 100)
            {
                BancoView::exibirMsgErro("Conta a ser depositada nao existente.");
            }
            else
            {
                float valor = BancoView::exibirTransferencia();
                if((_contas[i]->getSaldo() - valor) < 0)
                {
                    BancoView::exibirMsgErro("Saldo invalido para saque.");
                }
                else
                {
                    int saque = _contas[i]->getSaldo() - valor;
                    _contas[i]->setSaldo(saque);
                    int deposito = _contas[j]->getSaldo() + valor;
                    _contas[j]->setSaldo(deposito);
                    BancoView::exibirMsgSucesso("Transferencia");
                }
            }
        }
    }

    void exibirExtrato()
    {
        Conta c = BancoView::selecionarConta(_contas);
        int i = 0;
        while(_contas[i]->getNum() != c.getNum() && i < 100)
        {
            ++i;
        }
        if(i == 100)
        {
            BancoView::exibirMsgErro("Conta nao existente.");
        }
        else
        {
            BancoView::exibirExtrato(c);
        }
    }

    void executar()
    {
        BancoView::exibirMenu();
        char opcao;
        do
        {
            opcao = BancoView::lerOppcao();
            switch(opcao)
            {
            case '1':
                cadastrarConta(BancoView::exibirCadastroConta(_numContas));
                break;
            case '2':
                listarContas(_contas);
                break;
            case '3':
                BancoController::realizarDeposito();
                break;
            case '4':
                BancoController::realizarRetirada();
                break;
            case '5':
                BancoController::exibirExtrato();
                break;
            case '6':
                BancoController::realizarTransferencia();
                break;
            case '7':
                break;
            }
            if(opcao != '7')
            {
                BancoView::exibirMenu();
            }
        }while(opcao != '7');
    }

private:
    Conta* _contas[100];
    static int _numContas;
};

int BancoController::_numContas = 0;
#endif // _BANCOCONTROLLER_H_

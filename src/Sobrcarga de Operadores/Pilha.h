#ifndef _PILHA_H_
#define _PILHA_H_

#include <string>
#include <iostream>
using namespace std;

class Pilha
{
public:
    Pilha(int tamanho = 100)
    {
        _topo = -1;
        _tamanho = tamanho;
        _item = new string[tamanho];
    }

    virtual ~Pilha()
    {
        delete[] _item;
    }

    void empilha(string item)
    {
        if(_topo < _tamanho-1)
        {
            _topo++;
            _item[_topo] = item;
        }
        else
        {
            cout<<endl<<"Pilha cheia!"<<endl;
        }
    }

    string desempilha()
    {
        if(_topo == -1)
        {
            cout<<endl<<"Pilha vazia!"<<endl;
            return "";
        }
        string item = _item[_topo];
        _topo--;
        return item;
    }

    int tamanho()
    {
        return _tamanho;
    }

    void imprime()
    {
        if(_topo == -1)
        {
            cout<<"Pilha vazia!"<<endl;
        }
        else
        {
            cout<<endl;
            for(int i = 0; i <= _topo; i++)
            {
                cout<<i<<" = "<<_item[i]<<" | ";
            }
            cout<<endl;
        }
    }

    void operator+=(string item)
    {
        this->empilha(item);
    }

    string operator--()
    {
        return this->desempilha();
    }

private:
    int _topo;
    string* _item;
    int _tamanho;
};

#endif // _PILHA_H_

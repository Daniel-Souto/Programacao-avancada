#ifndef _PILHA_H_
#define _PILHA_H_

#include <string>
#include <iostream>
#include <exception>
using namespace std;

class PilhaVaziaException : public exception
{
public:
    virtual const char* what() const throw()
    {
        return "Pilha vazia!";
    }
};

class PilhaCheiaException : public exception
{
public:
    virtual const char* what() const throw()
    {
        return "Pilha cheia!";
    }
};

template <class Tipo>

class Pilha
{
public:
    Pilha(int tamanho = 100)
    {
        _topo = -1;
        _tamanho = tamanho;
        _item = new Tipo[tamanho];
    }

    virtual ~Pilha()
    {
        delete[] _item;
    }

    void empilha(Tipo item)
    {
        if(_topo < _tamanho-1)
        {
            _topo++;
            _item[_topo] = item;
        }
        else
        {
            throw PilhaCheiaException();
        }
    }

    Tipo desempilha()
    {
        if(_topo == -1)
        {
            throw PilhaVaziaException();
            return "";
        }
        Tipo item = _item[_topo];
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
            throw PilhaVaziaException();
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

    void operator+=(Tipo item)
    {
        this->empilha(item);
    }

    Tipo operator--()
    {
        return this->desempilha();
    }

    bool underflow()
    {
        return _topo == -1 ? true : false;
    }

    friend istream& operator>>(istream &is, Pilha &p)
    {
        string item;
        while(!is.eof())
        {
            is>>item;
            p.empilha(item);
        }
        return is;
    }

    friend ostream& operator<<(ostream &os, Pilha &p)
    {
        while(!p.underflow())
        {
            os<<p.desempilha()<<" ";
        }
        os<<endl;
        return os;
    }

private:
    int _topo;
    Tipo* _item;
    int _tamanho;
};

#endif // _PILHA_H_

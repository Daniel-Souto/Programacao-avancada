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

class StringVaziaException : public exception
{
public:
    virtual const char* what() const throw()
    {
        return "String vazia!";
    }
};

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
        if(item == "")
        {
            throw StringVaziaException();
        }
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

    string desempilha()
    {
        if(_topo == -1)
        {
            throw PilhaVaziaException();
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

    void operator+=(string item)
    {
        this->empilha(item);
    }

    string operator--()
    {
        return this->desempilha();
    }

    friend istream& operator>>(istream &is, Pilha &p)
    {
        string item;
        is>>item;
        p.empilha(item);
        return is;
    }

    friend ostream& operator<<(ostream &os, Pilha &p)
    {
        os<<p.desempilha();
        return os;
    }

private:
    int _topo;
    string* _item;
    int _tamanho;
};

#endif // _PILHA_H_

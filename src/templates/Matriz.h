#ifndef _MATRIZ_H_
#define _MATRIZ_H_

#include <iostream>
#include <vector>

using namespace std;

template <class Tipo>

class Matriz
{
public:
    Matriz(int linha=1, int coluna=1):_linha (linha),
                                    _coluna(coluna),
                                    _val(linha,vector<Tipo>(coluna))
    {
        for(int i = 0; i<linha;i++)
        {
            for(int j = 0; j<coluna;j++)
            {
                _val[i][j] = 0;
            }
        }
    }

    Tipo getValor(int l, int c)
    {
        return _val[l][c];
    }

    int getLinha()
    {
        return _linha;
    }

    int getColuna()
    {
        return _coluna;
    }

    void setValor(int l, int c, Tipo val)
    {
        _val[l][c] = val;
    }

    Matriz operator+(Matriz &m)
    {
        Matriz soma = m;
        for(int i = 0; i<_linha;i++)
        {
            for(int j = 0; j<_coluna;j++)
            {
                soma.setValor(i,j,soma.getValor(i,j) + _val[i][j]);
            }
        }
        return soma;
    }

    Matriz operator-(Matriz &m)
    {
        Matriz dif = m;
        for(int i = 0; i<_linha;i++)
        {
            for(int j = 0; j<_coluna;j++)
            {
                dif.setValor(i,j,_val[i][j] - dif.getValor(i,j));
            }
        }
        return dif;
    }

    Matriz operator*(Tipo escalar)
    {
        Matriz mul(_linha,_coluna);
        for(int i = 0; i<_linha;i++)
        {
            for(int j = 0; j<_coluna;j++)
            {
                mul.setValor(i,j,_val[i][j]*escalar);
            }
        }
        return mul;
    }

    void imprime()
    {
        cout<<endl;
        for(int i = 0; i < _linha;i++)
        {
            for(int j = 0; j < _coluna;j++)
            {
                cout<<this->getValor(i,j)<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    friend istream& operator>>(istream &is, Matriz &m)
    {
        string tudo = "";
        char buffer[256] = {};
        while(!is.eof())
        {
            is.getline(buffer,256);
            tudo += buffer;
            tudo += '\n';
        }
        int i, j;
        for(i = 0; i < m.getLinha(); i++)
        {
            for(j = 0; j < m.getColuna(); j++)
            {
                m.setValor(i,j,0);
            }
        }
        j = 0;
        i = 0;
        bool decimal = false;
        Tipo dec = 0;
        for(int k = 0; tudo[k] != '\0'; k++)
        {
            if(tudo[k] == ' ' || tudo[k] == '\n' || tudo[k] == '.')
            {
                if(tudo[k] == ' ')
                {
                    j++;
                    dec = 0;
                }
                if(tudo[k] == '\n')
                {
                    i++;
                    j = 0;
                    dec = 0;
                }
                if(tudo[k] == '.')
                {
                    dec = 10;
                }
            }
            else
            {
                if(dec == 0)
                {
                    m.setValor(i,j,m.getValor(i,j)*10 + (tudo[k] - 48));
                }
                else
                {
                    m.setValor(i,j,(m.getValor(i,j) + (tudo[k] - 48)/dec));
                    dec *= 10;
                }
            }
        }
        return is;
    }

    friend ostream& operator<<(ostream &os, Matriz &m)
    {
        for(int i = 0; i<m.getLinha();i++)
        {
            for(int j = 0; j<m.getColuna();j++)
            {
                os<<m.getValor(i,j)<<" ";
            }
            os<<endl;
        }
        return os;
    }


private:
    int _linha;
    int _coluna;
    vector<vector<Tipo> > _val;
};
#endif // _MATRIZ_H_

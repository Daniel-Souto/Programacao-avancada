#include "Pilha.h"
#include "Matriz.h"
#include <fstream>
int main()
{
    try
    {
        Pilha<int> pint(5);
        for(int i = 0; i < pint.tamanho();i++)
        {
            pint+=i;
        }
        cout<<"Pilha int: ";
        pint.imprime();
        Pilha<string> pstr(5);
        for(int i = 0; i < pint.tamanho();i++)
        {
            pstr+="oi";
        }
        cout<<"Pilha string: ";
        pstr.imprime();
        cout<<endl<<"-------------------------------------------------------------------------"<<endl;
        cout<<"Matrizes int: "<<endl;
        Matriz<int> m1(3,3);
        for(int i = 0; i<3;i++)
        {
            for(int j = 0; j<3;j++)
            {
                m1.setValor(i,j,i+1);
            }
        }
        cout<<"m1 = ";
        m1.imprime();
        Matriz<int> m2(3,3);
        for(int i = 0; i<3;i++)
        {
            for(int j = 0; j<3;j++)
            {
                m2.setValor(i,j,j*3+1);
            }
        }
        cout<<"m2 = ";
        m2.imprime();
        cout<<"m1 + m2 = ";
        Matriz<int> soma = m1 + m2;
        soma.imprime();
        cout<<"m1 - m2 = ";
        Matriz<int> dif = m1 - m2;
        dif.imprime();
        cout<<"2 * m1 = ";
        Matriz<int> dobro = m1 * 2;
        dobro.imprime();

        cout<<"Ai.txt: "<<endl;
        ifstream lerint("Ai.txt");
        lerint>>m1;
        lerint.close();
        m1.imprime();
        ofstream escreveint("Bi.txt");
        m1 = m1 * 10;
        cout<<"Bi.txt: "<<endl;
        m1.imprime();
        escreveint<<m1;
        escreveint.close();

        cout<<"Matrizes float: "<<endl;
        Matriz<float> m3(3,3);
        for(int i = 0; i<3;i++)
        {
            for(int j = 0; j<3;j++)
            {
                m3.setValor(i,j,(float)(i+1)/2);
            }
        }
        cout<<"m3 = ";
        m3.imprime();
        Matriz<float> m4(3,3);
        for(int i = 0; i<3;i++)
        {
            for(int j = 0; j<3;j++)
            {
                m4.setValor(i,j,(float)(j*3+1)/2);
            }
        }
        cout<<"m4 = ";
        m4.imprime();
        cout<<"m3 + m4 = ";
        Matriz<float> somaf = m3 + m4;
        somaf.imprime();
        cout<<"m3 - m4 = ";
        Matriz<float> diff = m3 - m4;
        diff.imprime();
        cout<<"2.5 * m3 = ";
        Matriz<float> dobrof = m3 * 2.5;
        dobrof.imprime();

        cout<<"Af.txt: "<<endl;
        ifstream lerfloat("Af.txt");
        lerfloat>>m3;
        lerfloat.close();
        m3.imprime();
        ofstream escrevefloat("Bf.txt");
        m3 = m3 * 3.14;
        cout<<"Bf.txt: "<<endl;
        m3.imprime();
        escrevefloat<<m3;
        escrevefloat.close();
    }
    catch(PilhaVaziaException &ex)
    {
        cerr<<ex.what()<<endl;
    }
    catch(PilhaCheiaException &ex)
    {
        cerr<<ex.what()<<endl;
    }
    catch(exception &ex)
    {
        cerr<<"Erro desconhecido!"<<endl;
    }

    return 0;
}

#include "Pilha.h"

int main()
{
    try
    {
        Pilha p(3);
        //--p;   //Erro pilha vazia
        p+="a";
        p+="b";
        p+="c";
        //p+="d";  //Erro pilha cheia
        --p;
        //p+="";  //Erro string vazia
        p.imprime();
    }
    catch(PilhaVaziaException &ex)
    {
        cerr<<ex.what()<<endl;
    }
    catch(PilhaCheiaException &ex)
    {
        cerr<<ex.what()<<endl;
    }
    catch(StringVaziaException &ex)
    {
        cerr<<ex.what()<<endl;
    }
    catch(exception &ex)
    {
        cerr<<"Erro desconhecido!"<<endl;
    }

    return 0;
}

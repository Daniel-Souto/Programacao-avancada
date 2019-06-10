#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    //1 - Vector
    //1.I
    vector<string> v;
    vector<string>::iterator vit;
    for(vit = v.begin();vit != v.end();vit++){cout<<*vit<<" | ";}cout<<endl;
    //1.II
    v.push_back("ovos");v.push_back("leite");v.push_back("acucar");v.push_back("chocolate");v.push_back("farinha");
    for(vit = v.begin();vit != v.end();vit++){cout<<*vit<<" | ";}cout<<endl;
    //1.III
    v.pop_back();
    for(vit = v.begin();vit != v.end();vit++){cout<<*vit<<" | ";}cout<<endl;
    //1.IV
    v.push_back("cafe");
    for(vit = v.begin();vit != v.end();vit++){cout<<*vit<<" | ";}cout<<endl;
    //1.V
    for(vit = v.begin();vit != v.end();vit++)
    {
        if(*vit == "acucar")
        {
            *vit = "mel";
        }
    }
    for(vit = v.begin();vit != v.end();vit++){cout<<*vit<<" | ";}cout<<endl;
    //1.VI
    for(vit = v.begin();vit != v.end();vit++)
    {
        if(*vit == "leite")
        {
            v.erase(vit);
        }
    }
    for(vit = v.begin();vit != v.end();vit++){cout<<*vit<<" | ";}cout<<endl;
    //1.VII
    sort(v.begin(),v.end());
    for(vit = v.begin();vit != v.end();vit++){cout<<*vit<<" | ";}cout<<endl;

    //2 - List
    //2.I
    list<string> l;
    list<string>::iterator lit;
    for(lit = l.begin();lit != l.end();lit++){cout<<*lit<<" | ";}cout<<endl;
    //2.II
    l.insert(l.end(),"ovos");l.insert(l.end(),"leite");l.insert(l.end(),"acucar");
    l.insert(l.end(),"chocolate");l.insert(l.end(),"farinha");
    for(lit = l.begin();lit != l.end();lit++){cout<<*lit<<" | ";}cout<<endl;
    //2.III
    l.pop_back();
    for(lit = l.begin();lit != l.end();lit++){cout<<*lit<<" | ";}cout<<endl;
    //2.IV
    l.insert(l.begin(),"cafe");
    for(lit = l.begin();lit != l.end();lit++){cout<<*lit<<" | ";}cout<<endl;
    //2.V
    for(lit = l.begin();lit != l.end();lit++)
    {
        if(*lit == "acucar")
        {
            *lit = "mel";
        }
    }
    for(lit = l.begin();lit != l.end();lit++){cout<<*lit<<" | ";}cout<<endl;
    //2.VI
    for(lit = l.begin();lit != l.end();lit++)
    {
        if(*lit == "chocolate")
        {
            l.insert(lit,"fermento");
        }
    }
    for(lit = l.begin();lit != l.end();lit++){cout<<*lit<<" | ";}cout<<endl;
    //2.VII
    l.remove("leite");
    for(lit = l.begin();lit != l.end();lit++){cout<<*lit<<" | ";}cout<<endl;
    //2.VIII
    l.sort();
    l.reverse();
    for(lit = l.begin();lit != l.end();lit++){cout<<*lit<<" | ";}cout<<endl;

    //3 - Set
    //3.I
    set<int> c;
    c.insert(1234);c.insert(9999);c.insert(9876);
    set<int> tentativa;
    int cod;
    //3.II
    cout<<endl<<"Digite um codigo de acesso: ";
    cin>>cod;
    while(tentativa.count(cod) == 0)
    {
        tentativa.insert(cod);
        //3.III
        if(c.count(cod) != 0)
        {
            cout<<"Acesso obtido!"<<endl;
        }
        else
        {
            cout<<"Acesso negado, tente novamente!"<<endl;
        }
        cout<<"Digite um codigo de acesso: ";
        cin>>cod;
    }
    //3.IV
    cout<<"Erro repetido, acesso bloqueado!"<<endl;

    //4 - Map
    //4.I
    map<string,string> m;
    map<string,string>::iterator mit;
    for(mit = m.begin(); mit != m.end(); mit++)
    {
        cout<<"("<<(*mit).first<<","<<(*mit).second<<")"<<endl;
    }
    cout<<endl;
    //4.II
    m["vermelho"] = "0xFF0000"; m["verde"] = "0x00FF00"; m["azul"] = "0x0000FF";
    m["branco"] = "0x000000"; m["preto"] = "0xFFFFFF"; m["amarelo"] = "0xFFFF00";
    m["laranja"] = "0xFF8000"; m["rosa"] = "0xFF00BF";
    //4.III
    for(mit = m.begin(); mit != m.end(); mit++)
    {
        cout<<"("<<(*mit).first<<","<<(*mit).second<<")"<<endl;
    }
    cout<<endl;
    //4.IV
    if(m.find("roxo") == m.end())
    {
        cout<<"Roxo nao encontrado no mapa"<<endl;
    }

    return 0;
}

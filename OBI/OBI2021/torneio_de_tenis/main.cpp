/*
participantes que venceram 5 ou 6 jogos serão colocados no Grupo 1;
participantes que venceram 3 ou 4 jogos serão colocados no Grupo 2;
participantes que venceram 1 ou 2 jogos serão colocados no Grupo 3;
participantes que não venceram nenhum jogo não serão convidados a continuar com os treinamentos.
*/

#include <iostream>

using namespace std;

int main()
{
    char r, v=0;
    for(int i=0; i<6; i++)
    {
        cin >> r;
        if(r=='V')
        {
            v++;
        }
    }
    if(v<1)
    {
        std::cout << "-1";
    }
    else if((v<3)&&(v>=1))
    {
        std::cout << "3";
    }
    else if((v<5)&(v>=3))
    {
        std::cout << "2";
    }
    else
    {
        std::cout << "1";
    }

    return 0;
}

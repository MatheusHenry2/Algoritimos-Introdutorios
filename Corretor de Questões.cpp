#include <iostream>
using namespace std;

int main()
{
    char RESPOSTA[10];
    char GABARITO[10]= {'a','b','c','d','e','a','b','c','d','e'};
    int i;
    int nota = 0 ;
    int j;
    int frequencia [11]= {0};
    int ra[10];
    int total = 0;
    int maior = frequencia[0];
    float media = 0;
    float porcentagem = 0;
    int aprovados = 0 ;
    float soma = 0;

    cout<< "  SISTEMA DE CORRECAO DE PROVAS : " <<endl;
    cout<< " (Digite 9999 no RA para encerrar)"<<endl;
    cout << " ======================================="<<endl;

    for(j=0; j<10; j++)
    {
        cout << "  RA : ";
        cin >> ra[j];

        if(ra[j]==9999)
        {
            cout << " RELATORIO FINAL "<<endl;
            cout << " ======================================="<<endl;
            cout << " 1. Porcentagem de Aprovacao  : "<<porcentagem<<" % "<<endl;
            cout << " 2. Nota com maior frequencia : "<<maior<<endl;
            cout << " 3. Nota media : "<<media<<endl;
            break;
        }

        nota=0;
        total = total +1;

        cout << " RESPOSTAS DO RA = ";
        for(i=0; i<10; i++)

        {
            cin >>RESPOSTA[i];
        }

        for(i=0; i<10; i++)
        {
            if(RESPOSTA[i] == GABARITO[i])
                nota++;
        }

        if(nota >=5)
        {
            aprovados = aprovados +1;
        }

        frequencia[nota]++;

        for(i=0; i<11; i++)
        {
            if(maior < frequencia[i])
                maior = i;
        }

        soma = soma + nota;
        media = ((float)soma/(float)total);
        porcentagem =((float)aprovados/(float)total)*100;

        cout <<" RA : "<<ra[j]<<" Nota = "<<nota<<endl;
        cout << " ======================================="<<endl;
    }
    return 0;
}

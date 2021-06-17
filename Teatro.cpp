#include <iostream>
#include <iomanip>
#include <ctype.h>
using namespace std;

int main()
{
    int mapalugares[10][20]= {0},assentos,linha;
    int i,j;
    char fileira,a,nome[25],repeat;

    while(repeat !='N')
    {
        cout <<"                              MAPA DO TEATRO \n";
        cout << "                         (Lugares com 1 estao ocupados)\n";
        cout <<"  =================================================================================" <<endl;

        for(i=0, a=65; i < 10, a <=74; i++, a++)
        {
            cout << a <<  " ";
            for(j=0; j < 20; j++)
                cout<<setw(4)<<mapalugares[i][j];
            cout <<endl;
        }
        cout <<endl;
        cout << "     1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17  18  19  20";
        cout <<" \n"<<endl;
        cout <<"\  =================================================================================\n" <<endl;
        do
        {
            cout << "  Escolha uma fileira <de A a J ou > : ";
            cin >> fileira;
            fileira = toupper(fileira);
            linha = fileira - 65 ;
            cout << "  Escolha um assento da fileira <de 1 a 20> : ";
            cin >> assentos;
            cout <<endl;
        }
        while(assentos < 1 || assentos > 20 || fileira < 65 || fileira > 75 );

        if(mapalugares[linha][assentos-1]==0)
        {
            mapalugares[linha][assentos-1]++;
            cout << "  Digite seu Nome para continuar :  ";
            cin.ignore();
            cin.getline(nome, 25);
            cout << "  Reserva feita com sucesso ! \n\n";
            cout << " Ingresso Nominal : "<<nome<<endl;
            cout << " =================================== \n\n";
            cout << " Nome da peca : O fantasma da Opera \n ";
            cout << "Horario : 6a - 19h \n";
            cout << " Lugar :  "<<fileira<<assentos<<endl;
            cout << " Deseja continuar (S/N) : ";
            cin >> repeat;
            repeat = toupper(repeat);
        }
        else
        {
         cout << " Lugar Ocupado ! \n ";
        }
    }
    return 0;
}
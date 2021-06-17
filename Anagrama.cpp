#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void cabecalho3()
{
    cout << " \n";
    cout << "  #####                                                                                                           ###  "<<endl;
    cout << " #     #   ####   #    #   ####   #####     ##    #####  #    #  #         ##    #####  #   ####   #    #   ####  ###  "<<endl;
    cout << " #        #    #  ##   #  #    #  #    #   #  #     #    #    #  #        #  #     #    #  #    #  ##   #  #      ### "<<endl;
    cout << " #        #    #  # #  #  #       #    #  #    #    #    #    #  #       #    #    #    #  #    #  # #  #   ####   #  "<<endl;
    cout << " #        #    #  #  # #  #  ###  #####   ######    #    #    #  #       ######    #    #  #    #  #  # #       #      "<<endl;
    cout << " #     #  #    #  #   ##  #    #  #   #   #    #    #    #    #  #       #    #    #    #  #    #  #   ##  #    # ### "<<endl;
    cout << "  #####    ####   #    #   ####   #    #  #    #    #     ####   ######  #    #    #    #   ####   #    #   ####  ###  \n\n \n\n"<<endl;


    cout << "                          ##     ## ####  ######  ########  #######  ########  ##    ##  "<<endl;
    cout << "                          ##     ##  ##  ##    ##    ##    ##     ## ##     ##  ##  ##   "<<endl;
    cout << "                          ##     ##  ##  ##          ##    ##     ## ##     ##   ####   " <<endl;
    cout << "                          ##     ##  ##  ##          ##    ##     ## ########     ##   "  <<endl;
    cout << "                           ##   ##   ##  ##          ##    ##     ## ##   ##      ##   " <<endl;
    cout << "                            ## ##    ##  ##    ##    ##    ##     ## ##    ##     ##   " <<endl;
    cout << "                             ###    ####  ######     ##     #######  ##     ##    ##   \n\n" <<endl;
    cout << "                                      -----------      -----------                     "<<endl;
    cout << "                                      | Restart |      |   End   |                 " <<endl;
    cout << "                                      -----------      -----------                      "<<endl;
}

void cabecalho1()
{
    cout << "\n\n"<<endl;
    cout << " -------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout << "    OooOoo                              o                 Oo       "<<endl;
    cout << "         O                              O                o  O    "<<endl;
    cout << "         o                              o               O    o"<<endl;
    cout << "         O                              o              oOooOoOo"<<endl;
    cout << "         o   oOo   oOoO  oOo         oOoO   oOo        o      O  OoOo   oOoO   oOoO  OoOo   oOoO   oOOoOO   oOoO"<<endl;
    cout << "         O  O   o o   O O   o       o   O  O   o       O      o  o   O O   o  o   O  o     O   o   O  o  o O   o"<<endl;
    cout << "  O      o  o   O O   o o   O       O   o  o   O       o      O  O   o o   O  O   o  O     o   O   o  O  O o   O"<<endl;
    cout << "    OooOO    OoO   OoOo  OoO         OoO o  OoO        O      O  o   O  OoO o  OoOo  o      OoO o  O  o  o  OoO o"<<endl;
    cout << "                   O                                                           O"<<endl;
    cout << "                OoO                                                         OoO \n "<<endl;
    cout << " -------------------------------------------------------------------------------------------------------------------\n\n\n\n"<<endl;
    cout << "                                          _______________________\n "<<endl;
    cout << "                                          |  888b  8             |   "               <<endl;
    cout << "                                          |  8   8 8  d88 Yb  dP |   "    <<endl;
    cout << "                                          |  8wwP  8 8  8  YbdP  |  "    <<endl;
    cout << "                                          |  8     8  Y88   dP   |  "     <<endl;
    cout << "                                          |                 dP   |  "     <<endl;
    cout << "                                          ______________________  "   ;
}
void cabecalho2()
{

    cout << "                                            _ "<<endl;
    cout << "                                           /_\  _  _  _  _ _  "<<endl;
    cout << "                                          / _ \| |(_|(_|| (_|| | |(_|"<<endl;
    cout << "                                         /_/ \_\      _ | \n"<<endl;
    cout << "                             Forme o maior número de palavras usando as letras disponiveis:  \n \n ";
    cout << "                             +-+   +-+   +-+   +-+   +-+   +-+   +-+     +-+   +-+   +-+ "<<endl;
    cout << "                             |T|   |L|   |I|   |B|   |C|   |A|   |E|     |O|   |I|   |B|   " <<endl;
    cout << "                             +-+   +-+   +-+   +-+   +-+   +-+   +-+     +-+   +-+   +-+   " <<endl;

}
int main() ///BIBLIOTECA
{
    setlocale(LC_ALL, "Portuguese");
    int i, j, flag=0, c1=0, c2=0;
    char letras[]= {'T','L','I','B','C','A','E','O','I','B'};
    char palavra[11];
    char Banco_Palavras [11][11]= {"BIBLIOTECA", "BOATE", "BOTA", "BIELA","LOTE", "TIO", "TIBIA", "TOCA", "CIO", "BELA", "BELO"};
    char Banco_Acertos [11][11];
    char x;
    cabecalho1();
    cin >> x;
    system("cls");
    for (i=0; i<11; i++)
    {
        strcpy(Banco_Acertos[i], "0");
    }
    cin.ignore();
    do {
        system("cls");
        cabecalho2();
        cout << "\n\n\t\t\tPalavras acertadas: ";
        for (i=0; i<11; i++)
        {
            if ((stricmp(Banco_Acertos[i], "0"))!=0)
                cout << Banco_Acertos[i] << " - ";
        }
        if (c1==1)
            cout << "\n\n\n\n\t\t\t\t'" << palavra << "' não aceito\n";
            c1=0;
        if (c2==1)
            cout << "\n\n\n\n\t\t\t\tA palavra '"<< palavra << "' já digitada!\n";
            c2=0;
        cout << "\n\n\n\t\t\tDigite uma palavra: ";
        cin.getline(palavra, 11);
        cout << "palavra digitada: " << palavra;
        palavra[11]=toupper(palavra[11]);
        ///Verificar se a palavra está no banco de palavras
        for (i=0, flag=0; i<11&&flag==0; i++)
        {
            if ((stricmp(Banco_Palavras[i], palavra)==0))
            {
                flag=1;
            }

        }
        if (flag)
        {
            for(j=0; j<11; j++)
            {
                if((stricmp(Banco_Acertos[j], palavra))==0)
                {
                    c2++;
                    break;
                }
                else if (j==10) //colocar a palavra no banco de acertos
                {
                    for (i=0; i<11; i++)
                    {
                        if ((stricmp(Banco_Acertos[i], "0"))==0)
                        {
                            strcpy(Banco_Acertos[i], palavra);
                            break;
                        }
                    }
                }
            }
        }
        else
            c1++;
    } while ((stricmp(Banco_Acertos[10], "0"))==0);
    system("cls");
    cabecalho3();
    return 0;

}
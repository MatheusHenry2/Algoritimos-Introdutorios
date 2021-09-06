#include <iostream>
#include <iomanip>
using namespace std;

float temp()
{
    cout << "\n -- Apenas temperatura superiores a 45 graus!! *--" << endl;
    float aquecimento;
    do
    {
        cout << "\n Informe a temperatura de aquecimento:";
        cin >> aquecimento;
    } while (aquecimento < 45);

    return aquecimento;
}

float frio()
{
    cout << "\n -- Apenas temperatura entre 15 e 25 graus aceitas!!--" << endl;
    float frio;
    do
    {
        cout << "\n Informe a temperatura para resfriar:";
        cin >> frio;
    } while (frio < 15 || frio > 25);

    return frio;
}

int main()
{
    float mat[20][20], temperatura, aquecer, resfriar;
    unsigned int linha, coluna, linhaF, colunaF, opcao;

    do
    {
        cout << "\n Informe a temperatura da sala de aula :";
        cin >> temperatura;
    } while (temperatura < 0 || temperatura > 25);

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
            mat[i][j] = temperatura;
    }

    do
    {
        do
        {
            cout << "\n Informe a linha para aquecimento:";
            cin >> linha;
            cout << "\n Informe a coluna para aquecimento:";
            cin >> coluna;
        } while (linha < 0 || linha > 20 || coluna < 0 || coluna > 20);

        do
        {
            cout << "\n Informe a linha para resfriar:";
            cin >> linhaF;
            cout << "\n Informe a coluna para resfriar:";
            cin >> colunaF;
        } while (linhaF < 0 || linhaF > 20 || colunaF < 0 || colunaF > 20);

        aquecer = temp();
        resfriar = frio();

        for (int i = 0; i < 20; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                if (i == linha && j == coluna)
                    mat[i][j] = aquecer;

                if (i == linhaF && j == colunaF)
                    mat[i][j] = resfriar;
            }
        }

        for (int i = 0; i < 20; i++)
        {
            cout << endl;
            for (int j = 0; j < 20; j++)
                cout << setw(4) << " " << mat[i][j];
        }

        cout << "\n\n Digite 0 para sair do programa outros valores para continuar:";
        cin >> opcao;
    } while (opcao != 0);
}
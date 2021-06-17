#include <iostream>
#include <locale.h>
//Matheus Henry Barbosa Ra : 20068649
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cod,quant,repeat;
    float total,soma = 0;


    cout << " Código  | Produto          |  Preço Unitário (R$) |  "<<endl;
    cout << "  100    | Cachorro Quente  |   R$ 1,70            |  " <<endl;
    cout << "  101    | Bauru simples    |   R$ 2,30            |  " <<endl;
    cout << "  102    | Bauru com ovo    |   R$ 2,60            |  " <<endl;
    cout << "  103    | Hamburger        |   R$ 2,40            |  " <<endl;
    cout << "  104    | CheeseBurger     |   R$ 2,50            |  " <<endl;
    cout << "  105    | Refrigerante     |   R$ 1,00            |  " <<endl;
    cout << " ---------------------------------------------------\n";
    while(repeat !=0)
    {
        cout << " \n Faça seu Pedido : \n ";
        cout << " Código ...: ";
        cin >>cod;
        cout << "  Quantidade : ";
        cin >> quant;
        cout << " ---------------------------------------------------\n";

        switch(cod)
        {
        case 100:
            total = quant * 1.70;
            cout <<quant<< " Cachorros quentes  = R$ "<<total<<endl;
            soma =  soma + total;
            break;

        case 101:
            total = quant * 2.30;
            cout <<quant<< " Bauru Simples  = R$ "<<total<<endl;
            soma =  soma + total;
            break;

        case 102:
            total = quant * 2.60;
            cout <<quant<< " Bauru com ovo  = R$ "<<total<<endl;
            soma =  soma + total;
            break;

        case 103:
            total = quant * 2.40;
            cout <<quant<< " Hamburger  = R$ "<<total<<endl;
            soma =  soma + total;
            break;

        case 104:
            total = quant * 2.50;
            cout <<quant<< " CheeseBurger = R$ "<<total<<endl;
            soma =  soma + total;
            break;

        case 105:
            total = quant * 1.00;
            cout <<quant<< " Refrigerante = R$ "<<total<<endl;
            soma =  soma + total;
            break;

        default :
            cout <<" Código Invalido "<<endl;

        }
        cout << " Mais alguma coisa ? 0 (NÃO) 1 (SIM) :" ;
        cin >> repeat;
        cout << " ---------------------------------------------------\n";
    }
    cout << " Total Do Pedido R$ : "<<soma;
    cout << " Obrigado pela preferência ! ";
    return 0;

}

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    //declaração de variáveis
    int codigo1;  //codigo da peça 1
    int quant1;  //quantidade da peça 1
    double preco1;  //preco da peça 1
    int codigo2;  //codigo da peça 2
    int quant2;  //quantidade da peca 2
    double preco2;  //preco da peça 2
    double custo;  //custo total de fabricação
    
    //entrada de dados
    cin >> codigo1 >> quant1 >> preco1;
    cin >> codigo2 >> quant2 >> preco2;
    
    //calculo do custo total
    custo = quant1*preco1 + quant2*preco2;
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << custo << endl;
    
    return 0;
}
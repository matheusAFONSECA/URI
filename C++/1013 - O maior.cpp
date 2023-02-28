#include <iostream>
using namespace std;

int main()
{
	//declaração de variáveis
	int maior;  //maior elemento analisado
	int x;  //var aux
	int i;  //contador
	
	//entrada de dados e análise de elementos
	i = 0;
	while(i != 3)
	{
		cin >> x;
		if(i == 0)
			maior = x;  //parâmetro de maior
		else if(x > maior)  //condição para mudar o maior
			maior = x;
		i++;  //incremento
	}
	
	//saida do elemento maior
	cout << maior << " eh o maior" << endl;
	
	return 0;
}

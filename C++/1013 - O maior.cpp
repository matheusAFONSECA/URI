#include <iostream>
using namespace std;

int main()
{
	//declara��o de vari�veis
	int maior;  //maior elemento analisado
	int x;  //var aux
	int i;  //contador
	
	//entrada de dados e an�lise de elementos
	i = 0;
	while(i != 3)
	{
		cin >> x;
		if(i == 0)
			maior = x;  //par�metro de maior
		else if(x > maior)  //condi��o para mudar o maior
			maior = x;
		i++;  //incremento
	}
	
	//saida do elemento maior
	cout << maior << " eh o maior" << endl;
	
	return 0;
}

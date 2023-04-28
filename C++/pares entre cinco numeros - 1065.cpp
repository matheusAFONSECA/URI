#include <iostream>

using namespace std;

int main()
{
	//declaração de variáveis
	int y=0, i, x;
	
	//inicio do comando for
	for(i=1; i<=5; i++)
	{
		cin>>x;
		if (x%2==0)  //condição para ser par
			y++;//incremento ao número de numeros pares
	}
	
	//saida de dados
	cout<<y<<" valores pares"<<endl;
	
	return 0;
}
#include <iostream>

using namespace std;

int main()
{
	//declara��o de vari�veis
	int y=0, i, x;
	
	//inicio do comando for
	for(i=1; i<=5; i++)
	{
		cin>>x;
		if (x%2==0)  //condi��o para ser par
			y++;//incremento ao n�mero de numeros pares
	}
	
	//saida de dados
	cout<<y<<" valores pares"<<endl;
	
	return 0;
}
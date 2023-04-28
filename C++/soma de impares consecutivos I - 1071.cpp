#include <iostream>

using namespace std;

int main()
{
	//declaração de variáveis
	int x, y, i, soma=0;
	
	//entrada de dados
	cin>>x;
	cin>>y;
	
	//inicio  do comando for e calculo
	if(x>y)
	for(i=y+1; i<x; i++)
	{
		if (i%2!=0)
		soma=soma+i;
	}
	else
	for(i=x+1; i<y; i++)
	{
		if (i%2!=0)
		soma=soma+i;
	}
	
	//saida de dados
	cout<<soma<<endl;
	
	return 0;
	
}
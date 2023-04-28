#include <iostream>

using namespace std;

int main()
{
	//declaração de variáveis
	int i, x, m, p;
	
	//inicio do comando for
	for(i=1; i<=100; i++)
	{
		cin>>x;
		if (i==1) /*condição que define o parâmetro inicial 
					de qual número é maior e qual é menor*/
		m=x;
		if (x>m)
		{
			m = x;
			p =i;
		}
	}
	
	//saida de dados
	cout<<m<<endl;
	cout<<p<<endl;
	
	return 0;
	
}
#include <iostream>

using namespace std;

int main()
{
	//declara��o de vari�veis
	int i, x, m, p;
	
	//inicio do comando for
	for(i=1; i<=100; i++)
	{
		cin>>x;
		if (i==1) /*condi��o que define o par�metro inicial 
					de qual n�mero � maior e qual � menor*/
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
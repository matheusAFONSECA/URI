#include <iostream>

using namespace std;

int main()
{
	//declaração de variáveis
	int s;
	
	//entrada da senha
	do
	{	
		cin>>s;
		if (s==2002)
			cout<<"Acesso Permitido"<<endl;
		else
			cout<<"Senha Invalida"<<endl;
	}while(s!=2002);
	
	return 0;
	
}
#include <iostream>

using namespace std;

int main()
{
	//declara��o de vari�veis
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
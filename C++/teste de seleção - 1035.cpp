#include <iostream>

using namespace std;

int main()
{	
	//declara��o de vari�veis
	int A, B, C, D;
	
	//entrada de dados
	cin>>A>>B>>C>>D;
	
	//condi��es e saida de dados
	if (B>C && D>A && C+D>A+B && C>0 && D>0 && A%2==0)
		cout<<"Valores aceitos"<<endl;
	else 
		cout<<"Valores nao aceitos"<<endl;
	
	return 0;
	
	
}
#include <iostream>

using namespace std;

int main()
{
	//declara��o de vari�veis
	int D, A, M, RESTO, X;
	
	//entrada de dados
	cin>>X;
	
	//convers�o em dias
	A = X / 365;
	RESTO = X % 365;
	M = RESTO / 30;
	D = RESTO % 30;
	
	//saida de dados
	cout<<A<<" ano(s)"<<endl;
	cout<<M<<" mes(es)"<<endl;
	cout<<D<<" dia(s)"<<endl;
	
	return 0;
	
}
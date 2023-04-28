#include <iostream>

using namespace std;

int main()
{	
	//declaração de variáveis
	int A, B, C, D;
	
	//entrada de dados
	cin>>A>>B>>C>>D;
	
	//condições e saida de dados
	if (B>C && D>A && C+D>A+B && C>0 && D>0 && A%2==0)
		cout<<"Valores aceitos"<<endl;
	else 
		cout<<"Valores nao aceitos"<<endl;
	
	return 0;
	
	
}
#include <iostream>

using namespace std;

int main()
{
	//declara��o de vari�veis 
	int N, H, M, S, RESTO;
	
	//entrada de dados
	cin>>N;
	
	//convers�o de tempo
	H = N / 3600;
	RESTO = N % 3600;
	M = RESTO / 60;
	S = RESTO % 60;
	
	//saida de dados
	cout<<H<<":"<<M<<":"<<S<<endl;
	
	return 0;
	
}
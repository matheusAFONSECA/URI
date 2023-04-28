#include <iostream>

using namespace std;

int main()
{
	//declaração de variáveis 
	int N, H, M, S, RESTO;
	
	//entrada de dados
	cin>>N;
	
	//conversão de tempo
	H = N / 3600;
	RESTO = N % 3600;
	M = RESTO / 60;
	S = RESTO % 60;
	
	//saida de dados
	cout<<H<<":"<<M<<":"<<S<<endl;
	
	return 0;
	
}
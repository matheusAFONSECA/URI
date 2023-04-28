#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declaração de variáveis
	int T, V;
	double C, D;
	
	//entradda de dados
 	cin>>T;
 	cin>>V;
 	
 	//calculo
 	D = T * V;
 	C = D / 12 ;
 	
 	//saida de dados
 	cout<<fixed<<setprecision(3);
 	cout<<C<<endl;
 	
 	return 0;
	
}
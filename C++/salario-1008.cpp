#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declaração de variáveis
	int N, H;
	float V, SALARIO;
	
	//entrada de dados
	cin>>N;
	cin>>H;
	cin>>V;
	
	//calculo
	SALARIO = H * V;
	
	//saida de dados
	cout<<"NUMBER = "<<N<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"SALARY = U$ "<<SALARIO<<endl;
	
	return 0;
	
}
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//declaração das variáveis
	double raio, n, area;
	
	//entrada de dados
	cin>>raio;
	
	//calculo
	n = 3.14159;
	area = n * pow(raio,2);
	
	//saída de dados
	cout<<fixed<<setprecision(4);
	cout<<"A="<<area<<endl;
	
	return 0;
	
}
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//declara��o das vari�veis
	double raio, n, area;
	
	//entrada de dados
	cin>>raio;
	
	//calculo
	n = 3.14159;
	area = n * pow(raio,2);
	
	//sa�da de dados
	cout<<fixed<<setprecision(4);
	cout<<"A="<<area<<endl;
	
	return 0;
	
}
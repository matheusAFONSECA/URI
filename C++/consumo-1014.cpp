#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declara��o de vari�veis
	int X;
	float Y, C;
	
	//entrada de dados
	cin>>X;
	cin>>Y;
	
	//calculo
	C = X / Y;
	
	//saida de dados
	cout<<fixed<<setprecision(3);
	cout<<C<<" km/l"<<endl;
	
	return 0;
	
}
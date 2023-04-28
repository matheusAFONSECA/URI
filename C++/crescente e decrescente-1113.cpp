#include <iostream>

using namespace std;

int main()
{
	//declaração de variáveis
	int X, Y;

	while(X!=Y)
	{
		//entrada do valor de x e y
	cin>>X>>Y;
	
		//condição
		if (X>Y)
			cout<<"Decrescente"<<endl;
		if(X<Y) 
			cout<<"Crescente"<<endl;
	}
	
	return 0;
	
}
#include <iostream>

using namespace std;

int main()
{
	//declara��o de vari�veis
	int X, Y;

	while(X!=Y)
	{
		//entrada do valor de x e y
	cin>>X>>Y;
	
		//condi��o
		if (X>Y)
			cout<<"Decrescente"<<endl;
		if(X<Y) 
			cout<<"Crescente"<<endl;
	}
	
	return 0;
	
}
#include <iostream>

using namespace std;

int main()
{
	//declara��o de vari�veis
	double x, y;
	int i;
	
	//incio do ciclo for
	for(i=1; i<=6; i++)
	{
		cin>>x;
		if (x>0)  //condi��o de n�meros positivos
			y++;
	}
	
	cout<<y<<" valores positivos"<<endl;
	
	return 0;
	
}
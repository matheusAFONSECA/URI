#include <iostream>

using namespace std;

int main()
{
	//declaração de variáveis
	double x, y;
	int i;
	
	//incio do ciclo for
	for(i=1; i<=6; i++)
	{
		cin>>x;
		if (x>0)  //condição de números positivos
			y++;
	}
	
	cout<<y<<" valores positivos"<<endl;
	
	return 0;
	
}
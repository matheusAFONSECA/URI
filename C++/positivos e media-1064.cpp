#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declaração de variáveis
	double x, s=0;
	int i, y;
	
	//incio do ciclo for
	for(i=1; i<=6; i++)
	{
		cin>>x;
		if (x>0)  //condição de números positivos
		{
			y++;
			s=s+x;
		}
	}
	
	cout<<y<<" valores positivos"<<endl;
	cout<<fixed<<setprecision(1);
	cout<<s/y<<endl;
	
	return 0;
	
}
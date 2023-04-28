#include <iostream>

using namespace std;

int main()
{
	//declaração de variáveis 
	int x, y, z;
	
	//entrada de dados
	cin>>x>>y>>z;
	
	//condição e saída de dados
	if (x<y && x<z)
		cout<<x<<endl;
	else if (y<x && y<z)
		cout<<y<<endl;
	else if (z<x && z<y)
		cout<<z<<endl;
	if (x<y && x>z)
		cout<<x<<endl;
	else if (x<z && x>y)
		cout<<x<<endl;
	else if (y<x && y>z)
		cout<<y<<endl;
	else if (y<z && y>x)
		cout<<y<<endl;
	else if (z<x && z>y)
		cout<<z<<endl;
	else if (z<y && z>x)
		cout<<z<<endl;
	if (x>y && x>z)
		cout<<x<<endl;
	else if (y>x && y>z)
		cout<<y<<endl;
	else if (z>x && z>y)
		cout<<z<<endl;
	
	cout<<endl<<x<<endl<<y<<endl<<z<<endl;
	
	return 0;
	
}
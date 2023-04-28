#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declaração de variáveis 
	double x, y;
	
	//entrada de dados
	cin>>x>>y;
	
	//saida de dados
	cout<<fixed<<setprecision(2);
	if (x==1)
		cout<<"Total: R$ "<<y*4<<endl;
	else if (x==2)
		cout<<"Total: R$ "<<y*4.5<<endl;
	else if (x==3)
		cout<<"Total: R$ "<<y*5<<endl;
	else if (x==4)
		cout<<"Total: R$ "<<y*2<<endl; 
	else if (x==5)
		cout<<"Total: R$ "<<y*1.5<<endl;
	
	return 0;  
		
}
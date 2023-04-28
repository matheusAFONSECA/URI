#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declaração de variáveis
	double x1, x2, m;
	int X;
	
	do
	{
		//entrada de dados
		cin>>x1;
		cin>>x2;
		do 
		{
			if (x1<0 || x1>10)
			{
				cout<<"nota invalida"<<endl;
				cin>>x1;
			}
		}while(x1<0 || x1>10);
		do 
		{
			if (x2<0 || x2>10)
			{
				cout<<"nota invalida"<<endl;
				cin>>x2;
			}
		}while(x2<0 || x2>10);
		cout<<fixed<<setprecision(2);
		m=(x1+x2)/2;
		cout<<"media = "<<m<<endl;
		do
		{
			cout<<"novo calculo (1-sim 2-nao)"<<endl;
			cin>>X;
		}while(X!=1 && X!=2);
	}while(X==1);
		
	return 0;
	
}
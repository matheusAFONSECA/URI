#include <iostream>

using namespace std;

int main()
{
	//declara��o de vari�veis 
	double x, y;
	
	//entrada de dados
	cin>>x>>y;
	
	//condi��o e saida de dados
	if (x== 0 && y==0)
		cout<<"Origem"<<endl;
	else if (x== 0 && y!=0)
		cout<<"Eixo Y"<<endl;
	else if (x!= 0 && y==0)
		cout<<"Eixo X"<<endl;
	else if (x>0 && y>0)
		cout<<"Q1"<<endl;
	else if (x<0 && y>0)
		cout<<"Q2"<<endl;
	else if (x<0 && y<0)
		cout<<"Q3"<<endl;
	else if (x>0 && y<0)
		cout<<"Q4"<<endl;
	
	return 0;
	
}
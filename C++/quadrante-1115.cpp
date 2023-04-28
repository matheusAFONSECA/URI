#include <iostream>

using namespace std;

int main()
{
	//declaração de variáveis
	int x, y;
	
	//entrada de dados a serem analisados  primeiro
	cin>>x>>y;
	
	//inicio do comando do-while
	do
	{
		if (x>0 && y>0)
			cout<<"primeiro"<<endl;
		else if (x<0 && y>0)
			cout<<"segundo"<<endl;
		else if (x<0 && y<0)
			cout<<"terceiro"<<endl;
		else if (x>0 && y<0)
			cout<<"quarto"<<endl;
		cin>>x>>y; //reentrada de dados para ver ser o laço continua
	}while (x!=0 && y!=0);
	
	return 0;
	
}
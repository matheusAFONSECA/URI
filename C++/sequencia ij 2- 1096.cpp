#include <iostream>

using namespace std;

int main()
{
	//declara��o de vari�veis
	int i, j;
	
	//inicio do comando for
	for (i=1; i<=9; i = i+2)
	{
		for(j=7; j>=5; j--)
		{
			cout<<"I="<<i<<" J="<<j<<endl;
		}
	}
	
	return 0;
	
}
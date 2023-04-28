#include <iostream>

using namespace std;

int main()
{
	//declaração de variáveis
	int G, I, gre=0, v1=0, v2=0, e=0, op;
	
	do
	{
		gre++;
		cin>>I>>G;
		if (I>G)
			v1++;
		else if (I<G)
			v2++;
		else 
			e++;
		cout<<"Novo grenal (1-sim 2-nao)"<<endl;
		cin>>op;
	}while(op==1);
	
	cout<<gre<<" grenais"<<endl;
	cout<<"Inter:"<<v1<<endl;
	cout<<"Gremio:"<<v2<<endl;
	cout<<"Empates:"<<e<<endl;
	if (v1>v2)
		cout<<"Inter venceu mais"<<endl;
	else if (v2>v1)
		cout<<"Gremio venceu mais"<<endl;
	else 
		cout<<"Nao houve vencedor"<<endl;
	
	return 0;
	
}
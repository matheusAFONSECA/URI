#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declaração de variáveis
	int i, N, q;
	double t=0, s=0, r=0, c=0; 
	char tipo;
	
	//entrada de casos que teve
	cin>>N;
	
	//entrada de cobaias
	for(i=1; i<=N; i++)
	{
		cin>>q>>tipo;
		switch(tipo)
		{
			case'C':
				c=c+q;
				break;
			case'R':
				r=r+q;
				break;
			case'S':
				s=s+q;
				break;
		}
		t=s+r+c;
	}
	
	cout<<"Total: "<<t<<" cobaias"<<endl;
	cout<<"Total de coelhos: "<<c<<endl;
	cout<<"Total de ratos: "<<r<<endl;
	cout<<"Total de sapos: "<<s<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"Percentual de coelhos: "<<(c/t)*100<<" %"<<endl;
	cout<<"Percentual de ratos: "<<(r/t)*100<<" %"<<endl;
	cout<<"Percentual de sapos: "<<(s/t)*100<<" %"<<endl;
		
	return 0;
	
}
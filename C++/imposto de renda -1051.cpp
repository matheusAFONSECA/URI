#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declaração de variáveis
	double s;
	
	//entrada de dados
	cin>>s;
	
	//saída de dados
	cout<<fixed<<setprecision(2);
	if (s>0 && s<=2000)
		cout<<"Isento"<<endl;
	else if (s>2000 && s<=3000)
		cout<<"R$ "<<(s-2000)*0.08<<endl;
	else if (s>3000 && s<=4500)
		cout<<"R$ "<<1000*0.08 + (s-3000)*0.18<<endl;
	else if (s>4500)
		cout<<"R$ "<<1000*0.08 + 1500*0.18 + (s-4500)*0.28<<endl;
		
	return 0;
}
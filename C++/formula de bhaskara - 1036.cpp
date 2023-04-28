#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//declaração de variáveis
	double x1, x2, B, C, A, d;
 	
 	//entrada de dados
	cin>>A >>B >>C;
	
	//calculo
	d = pow(B,2) - 4 * A * C;
	x1= (sqrt(d) - B) / (2 * A);
	x2= ( - sqrt(d) - B) / (2 * A);
	
	//saida de dados
	cout<<fixed<<setprecision(5);
	if (d > 0 && A != 0 )
	{
		cout<<"R1 = "<<x1<<endl;
		cout<<"R2 = "<<x2<<endl;
	}
	else if (d<=0 || A==0)
		cout<<"Impossivel calcular"<<endl;
	
	return 0;
}
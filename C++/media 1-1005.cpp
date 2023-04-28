#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declaração de variáveis
	double  A, B, media;
	
	//entrada de dados
	cin>>A;
	cin>>B;
	
	//cauculo
	media = ((3.5 * A) + (7.5 * B)) / 11;
	
	//saida de dados
	cout<<fixed<<setprecision(5);
	cout<<"MEDIA = "<<media<<endl;
	
	return 0;
	
}
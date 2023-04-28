#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//entrada de dados
	double  A, B, C, media;
	
	//entrada de dados
	cin>>A;
	cin>>B;
	cin>>C;
	
	//calculo
	media = ((2 * A) + (3 * B) + (5 * C)) / 10;
	
	//saida de dados
	cout<<fixed<<setprecision(1);
	cout<<"MEDIA = "<<media<<endl;
	
	return 0;
	
}
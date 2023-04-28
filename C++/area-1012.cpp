#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//declaração de variáveis
	double A, B, C, T, CIR, pi, TRA, QUA, RET;
	
	//entrada de dados
	cin>>A;
	cin>>B;
	cin>>C;
	
	//cauculo
	T = (A * C) / 2;
	pi = 3.14159;
	CIR = pi * pow(C,2);
	TRA = ((A + B) * C) / 2;
	QUA = pow(B,2);
	RET = A * B;
	
	//saida de dados
	cout<<fixed<<setprecision(3);
	cout<<"TRIANGULO: "<<T<<endl;
	cout<<"CIRCULO: "<<CIR<<endl;
	cout<<"TRAPEZIO: "<<TRA<<endl;
	cout<<"QUADRADO: "<<QUA<<endl;
	cout<<"RETANGULO: "<<RET<<endl;
	
	return 0;
	
}
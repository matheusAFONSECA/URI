#include <iostream>
using namespace std;

int main()
{
	//declaração de var
	float n;  // quantidade de cedulas
	int aux;  // var aux
	
	//entrada da quantidade de dinheiros
	do{
		cin >> n;
	}while(aux <= 0 || aux >= 1000000.00);  // controle de quantidade de cédulas
	
	
	//separação da quantidade de cédulas
	cout << "NOTAS:" << endl;
	cout << (aux = n / 100.00) << " nota(s) de R$ 100.00" << endl;
	n = n - (aux*100.00);  // redefinindo o valor de n para novo calculo da notas
	cout << (aux = n / 50.00) << " nota(s) de R$ 50.00" << endl;
	n = n - (aux*50.00);
	cout << (aux = n/20.00) << " nota(s) de R$ 20.00" << endl;
	n = n - (aux*20.00);
	cout << (aux = n/10.00) << " nota(s) de R$ 10.00" << endl;
	n = n - (aux*10.00);
	cout << (aux = n / 5.00) << " nota(s) de R$ 5.00" << endl;
	n = n - (aux*5.00);
	cout << (aux = n / 2.00) << " nota(s) de R$ 2.00" << endl;
	n = n - (aux*2.00);
	
	//separação da quantidade de moedas
	cout << "MOEDAS:" << endl;
	cout << (aux = n/1.00) << " moeda(s) de R$ 1.00" << endl;
	n = n - (aux*1.00);
	cout << (aux = n/0.50) << " moeda(s) de R$ 0.50" << endl;
	n = n - (aux*0.50);
	cout << (aux = n/0.25) << " moeda(s) de R$ 0.25" << endl;
	n = n - (aux*0.25);
	cout << (aux = n/0.10) << " moeda(s) de R$ 0.10" << endl;
	n = n - (aux*0.10);
	cout << (aux = n/0.05) << " moeda(s) de R$ 0.05" << endl;
	n = n - (aux*0.05);
	cout << (aux = n/0.01) << " moeda(s) de R$ 0.01" << endl;
	
	return 0;
}
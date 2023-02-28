#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	//declaração de var
	int n;  // quantidade de cedulas
	int aux;  // var aux
	
	//entrada da quantidade de cedulas
	do{
		cin >> aux;
		n = aux;
	}while(aux < 1 || aux > 999999);  // controle de quantidade de cédulas
	
	//separação da quantidade de cédulas
	cout << n << endl;
	cout << (aux = n / 100) << " nota(s) de R$ 100,00 " << endl;
	n = n - (aux*100);  // redefinindo o valor de n para novo calculo da notas
	cout << (aux = n / 50) << " nota(s) de R$ 50,00 " << endl;
	n = n - (aux*50);
	cout << (aux = n/20) << " nota(s) de R$ 20,00 " << endl;
	n = n - (aux*20);
	cout << (aux = n/10) << " nota(s) de R$ 10,00 " << endl;
	n = n - (aux*10);
	cout << (aux = n / 5) << " nota(s) de R$ 5,00 " << endl;
	n = n - (aux*5);
	cout << (aux = n / 2) << " nota(s) de R$ 2,00 " << endl;
	n = n - (aux*2);
	cout << (aux = n/1) << " nota(s) de R$ 1,00 " << endl;
	
	return 0;
}
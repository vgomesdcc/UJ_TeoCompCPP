#include <iostream>
#include <math.h>
#include<string.h>
#include <iomanip>
using namespace std;
int main() {
	float imc, peso, altura;
	
	cin>>peso>>altura;
	imc=peso/(altura*altura);
	 cout << fixed << setprecision(2);
	
	if(imc>30){
		cout<<"O usuario esta obeso\n";
	}
	
	else
		cout<<"O usuario esta abaixo da linha de obesidade\n";
	cout<<imc<<"\n";
}

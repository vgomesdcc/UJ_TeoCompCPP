#include <iostream>
#include <math.h>
#include<string.h>
#include <iomanip>
using namespace std;
int main() {
	float salario;
	cin>>salario;
	if(salario<1903.98){
		cout<<"Seu salario liquido e R$"<<salario<<" ,voce esta insento do imposto\n";
	}
	else if(salario>=1903.99 && salario <=2826.65){
		cout<<"Seu salario liquido e R$"<<salario-(salario*0.075)<<" ,voce foi tributado em 7.5%\n";
	}
	else if(salario>=2826.66 && salario <=3751.05){
		cout<<"Seu salario liquido e R$"<<salario-(salario*0.15)<<" ,voce foi tributado em 15%\n";
	}
	else if(salario>=3751.06 && salario <=4664.68){
		cout<<"Seu salario liquido e R$"<<salario-(salario*0.225)<<" ,voce foi tributado em 22.5%\n";
	}
	else if(salario>=4664.69){
		cout<<"Seu salario liquido e R$"<<salario-(salario*0.275)<<" ,voce foi tributado em 27.5%\n";
	}
}

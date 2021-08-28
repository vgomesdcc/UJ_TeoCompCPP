#include <iostream>
#include <math.h>
#include<string>
#include <iomanip>
using namespace std;
int main() {
	float salario;
	cin>>salario;
	
	string area;
	cin>>area;
	
	if(area=="programador"){
		cout<<"Seu novo salario e de: "<<salario+(salario*0.30)<<"\n";
	}
	else
		cout<<"Seu novo salario e de: "<<salario+(salario*0.10)<<"\n";
}

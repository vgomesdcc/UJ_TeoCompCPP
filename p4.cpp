#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
int main() {
	int numerador,denominador;
	cin>>numerador>>denominador;
	if(numerador%denominador==0){
		cout<<"Divisores perfeitos\n";
	}
	
	else
		cout<<"Nao sao divisores perfeitos\n";
}

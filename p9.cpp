#include <iostream>
#include <math.h>
#include<string.h>
#include <iomanip>
using namespace std;
int main() {
	int s,horas,minutos,segundos, resto;
	cin>>s;
	
	horas = s/3600;
	resto = s%3600;
	
	minutos = resto/60;
	segundos = resto%60;
	
	cout<<"Hora(s): "<<horas<<" ,Minuto(s): "<<minutos<<" e Segundo(s): "<<segundos<<"\n";	
}

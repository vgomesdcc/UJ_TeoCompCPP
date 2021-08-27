#include <iostream>
#include <math.h>
#include<string.h>
#include <iomanip>
using namespace std;
int main() {
	float custo, consumidorpaga;
		cin>>custo;
	
	float distribuidor;
		distribuidor =(custo*0.28);
	
	float imposto;
		imposto =(custo*0.45);
	
	consumidorpaga = custo+distribuidor+imposto;
	
	cout<<consumidorpaga<<"\n";
}

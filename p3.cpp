#include <iostream>
#include <math.h>
#include<string>
using namespace std;
int main() {
	int prova1, prova2, trabalho;
	cin>>prova1>>prova2>>trabalho;
	
	if(((prova1*3)+(prova2*3)+trabalho)/7>=7){
		cout<<"Aprovado\n";
	}
	
	else
		cout<<"Reprovado\n";
}

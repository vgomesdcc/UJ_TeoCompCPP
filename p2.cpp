#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
int main() {
	int n1, n2;
	cin>>n1>>n2;
	
	if(n1==n2){
		cout<<"o numeros sao iguais\n";
	}
	
	else if(n1>n2){
		cout<<n1<<"\n";
	}
	
	else if(n2>n1){
		cout<<n2<<"\n";
	}
}

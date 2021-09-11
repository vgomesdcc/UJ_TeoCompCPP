#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	int perfeito1,perfeito2, flag1=0, flag2=0;
	cin>>perfeito1>>perfeito2;
	
	for(int i=1; i<perfeito1; i++){
		if(perfeito1%i==0){
			flag1+=i;
		}
	}
	
	for(int z=1; z<perfeito2; z++){
		if(perfeito2%z==0){
			flag2+=z;
		}
	}
	
	if(perfeito1==flag1 && perfeito2==flag2){
		cout<<"Sao divisores perfeitos";
	}
	else
		cout<<"Nao sao divisores perfeitos\n";
}

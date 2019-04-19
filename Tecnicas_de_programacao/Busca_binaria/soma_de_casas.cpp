// https://neps.academy/lesson/173

#include <iostream>

using namespace std;

int main(){
	int numero_de_casas;
	int casa[100010];
	
	cin >> numero_de_casas;
	
	for(int i = 0; i < numero_de_casas; i++) cin >> casa[i];
	
	int soma;
	cin >> soma;
	
	int ini = 0, fim = numero_de_casas - 1;
	
	while(ini < fim){
		
		if(casa[ini] + casa[fim] == soma) break;
		if(casa[ini] + casa[fim] > soma) fim--;
		if(casa[ini] + casa[fim] < soma) ini++;
		
	}
	
	cout << casa[ini] << " " << casa[fim] << endl;
	
	return 0;
}

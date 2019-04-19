// https://neps.academy/lesson/170

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int numero_de_pinos, altura_ideal, movimentos = 0;
	int pino[1010];
	
	cin >> numero_de_pinos >> altura_ideal;
	
	for(int i = 0; i < numero_de_pinos ; i++){
		cin >> pino[i];
	}
	
	for(int j = 0; j < numero_de_pinos - 1 ; j++){
		movimentos += abs(pino[j] - altura_ideal);
		pino[j+1] += altura_ideal - pino[j];
	}
	
	cout << movimentos << endl;
    
    return 0;
}

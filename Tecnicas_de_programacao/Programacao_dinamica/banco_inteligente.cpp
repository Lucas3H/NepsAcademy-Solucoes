// https://neps.academy/lesson/175

#include <iostream>
#include <cstring>

using namespace std;

int dp[5010][7];

int v[7] = {-1, 2, 5, 10, 20, 50, 100}, notas[7];

int banco(int valor, int nota){
	
	if(dp[valor][nota] != -1) return dp[valor][nota];
	if(valor == 0) return dp[valor][nota] = 1;
	if(nota == 0 && valor > 0) return 0;		
	
	int resp = 0;	
	
	for(int i = 0; i <= notas[nota] && i*v[nota] <= valor ; i++){
		resp += banco(valor - i*v[nota], nota - 1);	
	}

	return dp[valor][nota] = resp;
}

int main(){
	
	int valor;
	cin >> valor;
	
	notas[0] = - 1; 
	for(int i = 1; i < 7; i++) cin >> notas[i];
	
	memset( dp, -1, sizeof(dp));
			
	cout << banco(valor, 6) << endl; 
	
	return 0;
}

//https://neps.academy/lesson/189

#include <bits/stdc++.h>
using namespace std;

int dp[1001];

bool t(vector<long long> &v, long long change){
	
	if(change == 0) return 1;
	if(change < 0) return 0;
	if(dp[change] >= 0) return dp[change];
	
	for(int i=0; i<v.size(); i++){
		if(t(v, change - v[i])) return dp[change] = 1;
	}
	
	return dp[change] = 0;
}

int main(){
	int moedas;
	long long troco;
	cin >> moedas >> troco;
	
	vector<long long> c;
	\
	for(int i=0; i < moedas; i++){
		int x;
		cin >> x;
		c.push_back(x);
	}
	
	memset(dp, -1, sizeof(dp));
	
	if(t(c, troco)) cout << "S" << endl;
	else cout << "N" << endl;
}

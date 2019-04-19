// https://neps.academy/lesson/176

#include <iostream>
#include <cstring>

#define MAXN 1010
using namespace std;

int n, m, a[MAXN];
long long f[MAXN];

long long func(int x){
	if(f[x] != -1) return f[x];
	
	long long r = 0;
	
	for(int i = 1; i <= n;  i++) {
		r += a[i]*func(x-i);
		r = r%m;
	}
	
	return f[x] = r;
}

int main(){
	
	int k;
	cin >> n >> k >> m;
	
	memset(f, -1, sizeof(f));
	
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++) cin >> f[i];
	
	if(k > n) f[k] = func(k);
	
	cout << f[k] << endl;
	
	return 0;
}

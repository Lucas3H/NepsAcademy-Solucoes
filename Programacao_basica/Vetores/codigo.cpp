// https://neps.academy/lesson/139

#include <iostream>

using namespace std;

int main(){
	int n, x = 0;
    int v[10010];
    
    cin >> n;
    
    v[n] = -1;
    v[n+1] = -1;
    
    for(int i = 0; i < n; i++) cin >> v[i];
    
    for(int i = 1; i < n+1; i++){
    	if(v[i-1] == 1 && v[i] == 0 && v[i+1] == 0){
        	x++;
        }
    }
    
    cout << x << endl;
    
    return 0;
}

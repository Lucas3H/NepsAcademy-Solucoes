//https://neps.academy/lesson/133

#include <iostream>

using namespace std;

int main(){

    int a = 0, b = 0;
    int x, n;
    
    cin >> n;
    
    for(int i=0; i < n; i++){
    	cin >> x;
        
        if(x == 1){
        	a++;
        }
        else{
        	b++;
        }
    }
    
    if(b%2 == 0){
    	if(a%2 == 0) cout << 0 << "\n" << 0 << endl;
        else cout <<  1 << "\n" << 0 << endl;
    }
    else{
    	if(a%2 == 0) cout << 1 << "\n" << 1 << endl;
        else cout <<  0 << "\n" << 1 << endl;
    }
    
    return 0;
}

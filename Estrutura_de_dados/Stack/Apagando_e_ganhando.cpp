#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, d;
	scanf("%d %d", &n, &d);

	while(n != 0 || d != 0){

		vector<int> n1;
		vector<int> n2;
		stack<int> must_be_deleted;
		char numero[100010];
		scanf(" %s", numero);

		for(int i = 0; i < n; i++){
			n1.push_back(int(numero[i] - 48));
			n2.push_back(int(numero[i] - 48));
		}	

		sort(n2.begin(), n2.end());

		for(int i = 0; i < d; i++){
			must_be_deleted.push(n2[i]);
		}

		int aux[100010];

		memset(aux, 1, sizeof(aux));

		for(int i = 9; i >= 0; i--){
			int j = 0;
			while(must_be_deleted.top() == i && j < n){
				if(n1[j] == i){
					must_be_deleted.pop();
					aux[j] = 0;
				}

				j++;

				if(must_be_deleted.empty()) break;
			}

			if(must_be_deleted.empty()) break;
		}

		for(int i = 0; i < n; i++){
			if(aux[i]) printf("%d", n1[i]);
		}

		printf("\n");

		scanf("%d %d", &n ,&d);
	}

	return 0;
}

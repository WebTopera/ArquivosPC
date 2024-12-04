#include <bits/stdc++.h>
#include <ios>
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	int soma;
	int menor_atual;
	int menor_anterior;
	vector <int> bonito;
	cin >> n;
	for(int i = 0; i < n; i++){
		soma = 0;
		cin >> soma;
		if(soma == 1){
			cout << "1\n";
			continue;
		}
		for(int j = 0; j < soma; j++){
			bonito.push_back(1);
		}
		menor_anterior = soma;
		if((soma%2)==0){
			for(int j = 0; j < bonito.size(); j++){
				if(j!=0){
					
				}
			}
		}
	}
	return 0;
}
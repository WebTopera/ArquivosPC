#include <bits/stdc++.h>
#include <ios>
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	int k;
	string s;
	int brancas;
	int contas;
	cin >> n;
	char alf[26] {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
       'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	for(int i = 0; i < n; i++){
		cin >> s;
		k = 0;
		brancas = 0;
		for(char c: alf){
			contas = count(s.begin(), s.end(), c);
			if(contas == 1){
				k++;
			}
			if(contas == 2 || contas >= 3){
				k+=2;
			}
		}
		if((k%2)==0){
			cout << k/2 << '\n';
		}
		else{
			k-=1;
			cout << k/2 << '\n';
		}
	}
	return 0;
}
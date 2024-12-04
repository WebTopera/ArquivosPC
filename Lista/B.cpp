#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string s;
	int posA;
	char proximo;
	char anterior;
	int tamanho;
	int contador = 0;
	char letras[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
       'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s;
		posA = s.find('a');
		if(posA >= 0 && posA <= 26){
		    tamanho = s.length();
		    if(tamanho == 1) {
		        cout << "YES\n";
		        continue;
		    }
			contador = 0;
		    if((posA+1) <= tamanho) proximo = s[posA+1];
			else proximo == s[posA];
			if((posA-1) >= 0) anterior = s[posA-1];
			else anterior = s[posA];
			for(int j = 1; j < tamanho; j++){
			 	if(anterior == letras[j]){
			 	    contador++;
			 	    if((s.find(anterior)-1) >= 0){
			 	        anterior = s[s.find(anterior)-1];
			 	    }
			 	}
			 	else if(proximo == letras[j]){
			 	    contador++;
			 	    if((s.find(proximo)+1) <= tamanho){
			 	        proximo = s[s.find(proximo)+1];
			 	    } 
			 	}
			 	else {
			 	    break;
			 	}
			}
			if(contador == (tamanho-1)) cout << "YES\n";
			else cout << "NO\n";
		}
		else {
			cout << "NO\n";
		}
		
	}
}


//fdbace
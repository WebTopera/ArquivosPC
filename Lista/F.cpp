#include <bits/stdc++.h>
#include <ios>

using namespace std;

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
	 int casos;
	 int n;
	 int s;
	 int min;
	 int min_contrario;
	 int min_anterior;
	 vector <int> time;
	 cin >> casos;
	 for(int i = 0; i < casos; i++){
		cin >> n;
		for(int j = 0; j < n; j++){
			cin >> s;
			time.push_back(s);
		}
		for(int forca: time){
			if(count(time.begin(),time.end(), forca) >= 2){
				cout << "0\n";
				break;
			}
			else {
				for(int compara: time){
					if(forca==compara) continue;
					min = forca - compara;
					min_contrario = compara - forca;
					if(min < min_anterior && min > 0){
						min_anterior = min;
					}
					if(min_contrario < min_anterior && min_contrario > 0){
						min_anterior = min_contrario;
					}
				}
			}
		}
		cout << min_anterior <<'\n';
		time = {};
		min = 1001;
		min_anterior = 1001;
		min_contrario = 1001;
	}
}

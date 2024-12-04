#include <bits/stdc++.h>
#include <ios>

using namespace std;

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
     int casos;
     int n;
     int a;
     vector <int> numeros;
     cin >> casos;
     for(int i = 0; i < casos; i++){
          cin >> n;
          for(int j = 0; j < n; j++){
               cin >> a;
               numeros.push_back(a);
          }
          if(n == 1){
               cout <<"YES\n";
               continue;
          }
          sort(numeros.begin(), numeros.end());
          auto last = unique(numeros.begin(), numeros.end());
          numeros.erase(last, numeros.end());
          for(int k = 0; k < numeros.size(); k++){
               if(numeros.size() == 1){
                    cout <<"YES\n";
                    break;
               }
               else if(numeros.size() == 2){
                    if(abs(numeros[0]-numeros[1]) <= 1){
                         cout << "YES\n";
                         //cout << numeros[0] << " "<< numeros[1] << " "<<abs(numeros[0]-numeros[1]) <<" "<<"YES3\n";
                         break;
                    }
                    else {
                         //cout << numeros[0] << " "<< numeros[1] << " "<<abs(numeros[0]-numeros[1]) <<" " <<"NO3\n";
                         cout << "NO\n";
                         break;
                    }
               }
               else if(numeros.size() >= 3){
                    for(int l = 0; l < numeros.size(); l++){
                         if(l != k){
                              if(abs(numeros[l]-numeros[k]) <= 1){
                                   //cout << numeros[l] << " "<< numeros[k] << " " << abs(numeros[l]-numeros[k]) << '\n';
                                   if(numeros[k] > numeros[l]){
                                        numeros.erase(find(numeros.begin(), numeros.end(),numeros[l]));
                                   }
                                   else{
                                        numeros.erase(find(numeros.begin(), numeros.end(),numeros[k]));
                                   }
                                   if(numeros.size()==1){
                                        cout << "YES\n";
                                        break;
                                   }
                                   k=0;
                                   l=0;

                              }
                         }
                    }
               }
          }
          numeros = {};
     }
     return 0;
}
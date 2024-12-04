#include <bits/stdc++.h>

using namespace std;
int main(){
     int n;
     int caixas;
     int doces_prev = 0;
     int doces_atual;
     int contador = 0;
     vector<int> doces;
     scanf("%d",&n);
     for(int i = 0; i < n; i++){
          scanf("%d", &caixas);
          for(int j = 0; j < caixas; j++){
               scanf("%d", &doces_atual);
               doces.push_back(doces_atual);
               if(doces_atual < doces_prev || j==0){
                    doces_prev = doces_atual;
               }
          }
          for(int d: doces){
               contador += d - doces_prev;

          }
          printf("%d\n", contador);
          contador = 0;
          doces_prev = 0;
          doces = {}
     }
     return 0;
}
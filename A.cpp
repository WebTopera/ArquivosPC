#include <bits/stdc++.h>

using namespace std;

int main(){
     string text;
     int contador = 0;
     vector<char> letras = {'a'};
     set<char> a;
     scanf("%s", &text);
     //printf("%s", text);
     for(char c: text){
          //printf("oi");
          a.insert(c);
          // if(count(letras.begin(),letras.end(), c) <= 0){
          //      printf("%d",contador);
          //      contador++;
          //      letras.push_back(c);
          // }
          //printf("%d",count(letras.begin(),letras.end(), c));
     }
     for (char c: a){
         printf("%s",c);
     }
    // printf("%d",contador);
}
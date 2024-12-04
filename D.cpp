#include <bits/stdc++.h>

int main(){
     int a;
     int b;
     int c;
     scanf("%d %d %d", &a, &b, &c);
     int menor;
     int s;
     for(int i =0; i<100; i++){
          s = abs(i-a) + abs(pow((i-b),2)) + abs(pow((i-c)3))
          if(i=0){
               menor = s;
          }
          else {
               if(s < menor){
                    menor = s;
               }
          }
     }
     printf("%d", menor);
}
#include <bits/stdc++.h>

using namespace std;
int main(){
     double q_normal;
     double p_normal;
     double q_prom;
     double p_prom;
     scanf("%f %f", &q_normal, &p_normal);
     scanf("%f %f", &q_prom, &p_prom);
     double preco_normal = p_normal/q_normal;
     printf("%f", preco_normal);
     return 0;
}
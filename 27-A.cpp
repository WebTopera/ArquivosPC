#include <bits/stdc++.h>

using namespace std;

int main(){
     int n;
     string number;
     int number1;
     int number2;
     cin << n;
     for(int i = 0; i < n; i++){
          cin >> number;
          number1 = number[0] + number[1] + number[2];
          number2 = number[sizeof(number)-1] + number[sizeof(number)-2] + number[sizeof(number)-3];
          if(number1>number2) cout << "YES\n";
          else cout << "NO\n";
     }
     return 0;
}
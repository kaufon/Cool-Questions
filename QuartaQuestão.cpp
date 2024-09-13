// 4) Descubra a lógica e complete o próximo elemento:
// a) 1, 3, 5, 7, ___
// b) 2, 4, 8, 16, 32, 64, ____
// c) 0, 1, 4, 9, 16, 25, 36, ____
// d) 4, 16, 36, 64, ____
// e) 1, 1, 2, 3, 5, 8, ____
// f) 2,10, 12, 16, 17, 18, 19, ____
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
  cout << "a) 1, 3, 5, 7, 11 " << "pois sao os numeros primos" << endl;
  cout << "b) 2, 4, 8, 16, 32, 64, 128 " << "pois sao os 2^1 2^2 2^3 ..."
       << endl;
  cout << "c) 0 , 1 , 4 ,9 , 16 , 25 , 36 , 49 " << "pois sao raizes perfeitas "
       << endl;
  cout << "d) 4, 16 , 36 , 64 , 100" << "pois sao raizes quadras pares" << endl;
  cout << "e) 1, 1, 2, 3, 5, 8, 13 " << "é claramente um sequence de fibonacci"
       << endl;
  cout << "f) 2, 10, 12, 16, 17, 18, 19, 200 "
       << "essa progressao aritmetica nao possui um termo claro,porem levando "
          "em consideração que essa questão está em pt-br todos os numeros os são "
          "naturais que começam com D,logo o proximo numero também será um natural que começa "
          "com D assim será Duzentos"
       << endl;
  return 0;
}

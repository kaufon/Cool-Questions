// 1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor
// sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8,
// 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado
// um número, ele calcule a sequência de Fibonacci e retorne uma mensagem
// avisando se o número informado pertence ou não a sequência.

// IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua
// preferência ou pode ser previamente definido no código;
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool isFibbonaci(int n) {
  vector<int> FibonacciSequence = {0, 1};

  while (FibonacciSequence.back() <= n) {
    FibonacciSequence.back();
    int nextNumberInSequence = FibonacciSequence[FibonacciSequence.size() - 1] +
                               FibonacciSequence[FibonacciSequence.size() - 2];
    FibonacciSequence.push_back(nextNumberInSequence);
  }
  return find(FibonacciSequence.begin(), FibonacciSequence.end(), n) !=
         FibonacciSequence.end();
}
int main(int argc, char *argv[]) {
  int num;
  cout << "Enter number: " << endl;
  cin >> num;
  if (isFibbonaci(num)) {
    printf("the number %d exists in fibbonacio\n",num);
  } else {
        printf("the number %d does not exists in fibbonacio\n",num);
  }

  return 0;
}

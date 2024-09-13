// 2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.
//
// IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
#include <bits/stdc++.h>
#include <cctype>
using namespace std;
void countLetterA(const string str){
  bool isFound = false;
  int countOfA = 0;
  for (char c: str) {
    if (tolower(c) == 'a') {
      countOfA++;
      isFound = true;
    }
  
  }
  if (isFound) {
  printf("the letter A exists in this string!.It appeared %d\n",countOfA);
    
  }
  else {
  cout << "The letter A did not appeared" <<endl;
  }
}
int main (int argc, char *argv[]) {
  string input;
  cout<< "Enter string"<<endl;
  getline(cin,input);
  countLetterA(input);
  return 0;
}

#include <iostream>
#include "lib.h"
using namespace std;

int main() {
  char nome[10][20];
  char n[20];
  init(nome);
  init(n);
  
  for (int i=0; i<10; i++) {
    cin >> nome[i];
  }
  
  cin >>n;
  
  int c=ricerca(nome, n);
  if (c!=-1) {
    cout << c;
  } else {
    cout << "non presente" <<endl,
  }
  
  return 0;
}

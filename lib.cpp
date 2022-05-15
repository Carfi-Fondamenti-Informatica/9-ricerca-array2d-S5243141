#include "lib.h"

void init (char a[10][20]) {
  for (int i=0; i<10; i++) {
    for (int j=0; j<20; j++) {
      a[i][j]=0;
    }
  }
}

void init (char b[20]) {
  for (int i=0; i<20; i++) {
    b[i]=0;
  }
}

int ricerca (char nome[10][20], char n[20]) {
  int x;
  for (int i=0; i<10; i++) {
    x=0;
    for (int j=0; j<20; j++) {
      if (nome[i][j]==n[j]) {
        x++;
      } else {
        break;
      }
    }
    if (x==20) {
      return i;
    }
  }
  return -1;
}

#include <stdio.h>

void numerosPares(int *par);

int main() {
  int i, num[5];

  for (i=0; i<5; i++){
    scanf("%i", &num[i]);
  }
  numerosPares(num);
  return 0;
}

void numerosPares(int *par){
  float checar, conta;
  int chechar2, i;

  for (i=0; i<5; i++){
    checar=par[i]*0.5;
    chechar2=par[i]*0.5;
    conta=checar-chechar2;
    if (conta == 0) {
      printf("%p\n", par);
    }
  }
}

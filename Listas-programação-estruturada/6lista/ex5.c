#include <stdio.h>

int main (void){
  int vetor[10], *ponteiro, i;

  ponteiro =& vetor;
  vetor[0]=1;

  for(i=0; i<10; i++){
    *ponteiro=i;
  }

  for(i=0; i<10; i++){
    printf("%i\n", vetor[i]);
  }
  return 0;
}

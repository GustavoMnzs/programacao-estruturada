#include <stdio.h>

int main(void) {
  int num[3]={2,4,6};
  int *num_pont=num;

  for (int i = 0; i < 3; i++) {
    printf("%i\n", *num_pont);
    num_pont++;
  }

  return 0;
}

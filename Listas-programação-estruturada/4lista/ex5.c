#include <stdio.h>

struct numeros{
  int a, b, c;
};

int main(void) {
  struct numeros num[2], conta;
  num[1].a = 2;
  num[1].b = 4;
  num[1].c = 6;

  num[2].a = 3;
  num[2].b = 5;
  num[2].c = 7;

  conta.a=num[1].a+num[2].a;
  conta.b=num[1].b+num[2].b;
  conta.c=num[1].c+num[2].c;

  printf("a = %i\n", conta.a);
  printf("b = %i\n", conta.b);
  printf("c = %i\n", conta.c);
  return 0;
}

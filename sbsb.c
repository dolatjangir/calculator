#include <stdio.h>

int main() {

  char op;
  int a, b;
  printf("choose a oprator(+,-,*,/):");
  scanf("%c", &op);
  printf("enter a number:");
  scanf("%d", &a);
  printf("enter a number:");
  scanf("%d", &b);
  switch (op) {
  case '+':
    printf("a: %d \t b: %d \n a+b %d", a, b, a + b);
    break;
  case'-':
    printf("a:%d \t b:%d \n a-b:%d", a, b, a - b);
    break;
  case'*':
    printf("a:%d \t b:%d \n a*b:%d", a, b, a * b);
    break;
  case'/':
    if (b == 0) {
      printf("Zero not allowed");
      return 0;
    }
    printf("a:%d \t b:%d \n a/b:%d", a, b, a / b);
    break;
  default:
    printf("not valid");

  }
  return 0;
}
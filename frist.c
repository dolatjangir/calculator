#include <stdio.h>

int main() {
  char myNum[3] = "cow";

printf("\nThe %s is a domestic animal which is considered useful to mankind.", myNum);
printf("\n%s is used as livestock mainly for providing various dairy products like milk, ghee and cheese.", myNum);
printf("\n%s is found in various colours, shapes and sizes around the world.", myNum);
printf("\nIn India, the %s is regarded as a sacred animal by Hindus and worshipped by them from ancient times.", myNum);
printf("\n%s has two ears and eyes each, one big nose, two sharp horns, a long tail and four limbs.", myNum);
printf("\n%s eats fresh grass, husk, grain and vegetables.", myNum);
printf("\n%s’s milk is very nutritious and beneficial for human consumption.", myNum);
printf("\nDrinking %s milk regularly sharpens our brain and increases immunity power.", myNum);
printf("\nFarmers often use a male %s known as an ox to plough the fields and draw carts.", myNum);
printf("\nThe %s dung is used by people as fuel and fertilizer for plants and for repelling insects.", myNum);
  return 0;
}
#include <stdio.h>#include <stdio.h>

int main() {

  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}


int main() {

  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}

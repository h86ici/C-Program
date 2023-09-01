#include<stdio.h>
#include<stdbool.h>

bool is_prime(int n);

int main(void) {

  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (is_prime(n)) printf("%d is a Prime\n", n);
  else printf("%d is not a Prime\n", n);
  return 0;
}

bool is_prime(int n) {
  if (n == 1) return 0;
  else if (n==2) return 1;
  else if (n%2 == 0) return 0;
  else {
    for (int i; i*i < n; i++) {
      if (n%i == 0 ) return 0;
    else return 1;
    }
  }
}

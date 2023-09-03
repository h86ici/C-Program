#include<stdio.h>

void decompose(double x, long *int_part, double *frac_part){
    *int_part = (long)x;
    *frac_part = x - *int_part;
}

int main(void) {

double n = 10./3.;
long int p;
double q;

decompose(n, &p, &q);

printf("p = %d, q = %f\n", p, q);
}

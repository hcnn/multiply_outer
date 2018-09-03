#include <stdio.h>  // printf
#include "multiply_outer.h"

int main()
{
    size_t n = 3;
    double x[] = {1,2,3};

    size_t m = 5;
    double y[] = {1,2,3,4,5};

    double C[n*m];

    multiply_outer(x,y,C,n,m);

    printf("\nCross Product:\n");
    size_t i,j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%3.f ", C[rowidx(i,j,m)]);
        }
        printf("\n");
    }
}


#include "multiply_outer.h"

void multiply_outer(const double* x, const double* y, double* C, size_t n, size_t m){
    size_t i,j;
    double xi;
    for(i=0; i<n; i++){
        xi = x[i];
        for(j=0; j<m; j++){
            C[rowidx(i,j,m)] = xi * y[j];
        }
    }
}

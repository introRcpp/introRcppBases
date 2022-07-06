#include <Rcpp.h>
//[[Rcpp::export]]
double squareRoot(double x, double eps = 1e-5) {
  double s = 1;
  do {
    s = 0.5*(s + x/s);
  } while( fabs(s*s - x) > eps);
  return s;
} 

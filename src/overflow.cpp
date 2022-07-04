#include <Rcpp.h>
using namespace Rcpp;
//[[Rcpp::export]]
void overflow() {
  unsigned short x(65530);
  Rcout << "x = " << x << "\n" ;
  x = x+5;
  Rcout << "x = " << x << "\n" ;
  x = x+5;
  Rcout << "x = " << x << "\n" ;
} 

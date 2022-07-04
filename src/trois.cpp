#include <Rcpp.h>
// [[Rcpp::export]]
void trois(int n) {
  for(int i = 1; i <= n; i++) {
    Rcpp::Rcout << i << " " ;
    if(i%3 != 0) 
      continue;
    Rcpp::Rcout << "\n";
  }
  Rcpp::Rcout << "\n";
} 

#include <Rcpp.h>
//[[Rcpp::export]]
void cast(int x, int y) {
  double a = x; // cast implicite
  double b = (double) y; // cast explicite
  double q1 = x / y; // cast implicite (à quel moment a-t-il lieu ?)
  double q2 = (double) x / (double) y; // cast explicite
  Rcpp::Rcout << "q1 = " << q1 << "\n";
  Rcpp::Rcout << "q2 = " << q2 << "\n";
} 

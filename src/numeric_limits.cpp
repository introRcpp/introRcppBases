#include <Rcpp.h>
//[[Rcpp::export]]
void numeric_limits() {
  Rcpp::Rcout 
    << "plus petite valeur positive 'normale' = " 
    << std::numeric_limits<double>::min()         << "\n"
    << "plus petite valeur positive           = " 
    << std::numeric_limits<double>::denorm_min()  << "\n"
    << "plus grande valeur                    = " 
    << std::numeric_limits<double>::max() << "\n"
    << "epsilon                               = " 
    << std::numeric_limits<double>::epsilon()     << "\n";
} 

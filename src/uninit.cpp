//[[Rcpp::export]]
int uninit() {
  int a; // a peut contenir n'importe quoi
  return a;
} 

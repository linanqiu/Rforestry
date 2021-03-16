#include <Rcpp.h>
#include <vector>
#include <string>
#include <iostream>

int unif_int_dist(int rangeLow, int rangeHigh, int rand) {
    double myRand = rand / (1.0 + RAND_MAX); 
    int range = rangeHigh - rangeLow + 1;
    int myRand_scaled = (myRand * range) + rangeLow;
    return myRand_scaled;
}

size_t unif_int_dist(size_t rangeLow, size_t rangeHigh, int rand) {
    double myRand = rand / (1.0 + RAND_MAX); 
    int range = rangeHigh - rangeLow + 1;
    size_t myRand_scaled = (myRand * range) + rangeLow;
    return myRand_scaled;
}

void print_vector(
  std::vector<size_t> v
){
  for (auto i = v.begin(); i != v.end(); ++i){
    Rcpp::Rcout << *i << ' ';
    // Rcpp's equivalent of std::flush
    R_FlushConsole();
    R_ProcessEvents();
    R_CheckUserInterrupt();
  }
  Rcpp::Rcout << std::endl;
  Rcpp::Rcout << std::endl;
}

void print_vector(
    std::vector<unsigned int> v
){
  for (auto i = v.begin(); i != v.end(); ++i){
    Rcpp::Rcout << *i << ' ';
    // Rcpp's equivalent of std::flush
    R_FlushConsole();
    R_ProcessEvents();
    R_CheckUserInterrupt();
  }
  Rcpp::Rcout << std::endl;
  Rcpp::Rcout << std::endl;
}


void print_vector(
    std::vector<double> v
){
  for (auto i = v.begin(); i != v.end(); ++i){
    Rcpp::Rcout << *i << ' ';
    // Rcpp's equivalent of std::flush
    R_FlushConsole();
    R_ProcessEvents();
    R_CheckUserInterrupt();
  }
  Rcpp::Rcout << std::endl;
  Rcpp::Rcout << std::endl;
}

int add_vector(
    std::vector<int>* v
) {
  int sum=0;
  for (size_t i = 0; i < v->size(); i++) {
    sum += (*v)[i];
  }
  return sum;
}

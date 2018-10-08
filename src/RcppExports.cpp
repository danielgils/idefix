// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// det_cpp
double det_cpp(NumericMatrix set);
RcppExport SEXP _optidefix_det_cpp(SEXP setSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type set(setSEXP);
    rcpp_result_gen = Rcpp::wrap(det_cpp(set));
    return rcpp_result_gen;
END_RCPP
}
// InfoDes_cpp
NumericMatrix InfoDes_cpp(NumericVector par, NumericMatrix des, double n_alts);
RcppExport SEXP _optidefix_InfoDes_cpp(SEXP parSEXP, SEXP desSEXP, SEXP n_altsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type par(parSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type des(desSEXP);
    Rcpp::traits::input_parameter< double >::type n_alts(n_altsSEXP);
    rcpp_result_gen = Rcpp::wrap(InfoDes_cpp(par, des, n_alts));
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_hello_world
arma::mat rcpparma_hello_world();
RcppExport SEXP _optidefix_rcpparma_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpparma_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_outerproduct
arma::mat rcpparma_outerproduct(const arma::colvec& x);
RcppExport SEXP _optidefix_rcpparma_outerproduct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_outerproduct(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_innerproduct
double rcpparma_innerproduct(const arma::colvec& x);
RcppExport SEXP _optidefix_rcpparma_innerproduct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_innerproduct(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpparma_bothproducts
Rcpp::List rcpparma_bothproducts(const arma::colvec& x);
RcppExport SEXP _optidefix_rcpparma_bothproducts(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_bothproducts(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_optidefix_det_cpp", (DL_FUNC) &_optidefix_det_cpp, 1},
    {"_optidefix_InfoDes_cpp", (DL_FUNC) &_optidefix_InfoDes_cpp, 3},
    {"_optidefix_rcpparma_hello_world", (DL_FUNC) &_optidefix_rcpparma_hello_world, 0},
    {"_optidefix_rcpparma_outerproduct", (DL_FUNC) &_optidefix_rcpparma_outerproduct, 1},
    {"_optidefix_rcpparma_innerproduct", (DL_FUNC) &_optidefix_rcpparma_innerproduct, 1},
    {"_optidefix_rcpparma_bothproducts", (DL_FUNC) &_optidefix_rcpparma_bothproducts, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_optidefix(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

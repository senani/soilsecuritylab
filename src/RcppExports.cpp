// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// mahaldist
arma::mat mahaldist(arma::mat x, arma::mat y, arma::mat w);
RcppExport SEXP soilsecuritylab_mahaldist(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type w(wSEXP);
    __result = Rcpp::wrap(mahaldist(x, y, w));
    return __result;
END_RCPP
}
// fuzzy_extragrades_C
List fuzzy_extragrades_C(double alpha, NumericMatrix data, double phi, int nclass, int disttype, int maxiter, double toldif, double exp_eg, bool optim);
RcppExport SEXP soilsecuritylab_fuzzy_extragrades_C(SEXP alphaSEXP, SEXP dataSEXP, SEXP phiSEXP, SEXP nclassSEXP, SEXP disttypeSEXP, SEXP maxiterSEXP, SEXP toldifSEXP, SEXP exp_egSEXP, SEXP optimSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< double >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< int >::type nclass(nclassSEXP);
    Rcpp::traits::input_parameter< int >::type disttype(disttypeSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type toldif(toldifSEXP);
    Rcpp::traits::input_parameter< double >::type exp_eg(exp_egSEXP);
    Rcpp::traits::input_parameter< bool >::type optim(optimSEXP);
    __result = Rcpp::wrap(fuzzy_extragrades_C(alpha, data, phi, nclass, disttype, maxiter, toldif, exp_eg, optim));
    return __result;
END_RCPP
}
// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// jaccard_mca_rcpp
Rcpp::List jaccard_mca_rcpp(const double px, const double py, const int m, const double T_observed, const double accuracy);
RcppExport SEXP _jaccard_jaccard_mca_rcpp(SEXP pxSEXP, SEXP pySEXP, SEXP mSEXP, SEXP T_observedSEXP, SEXP accuracySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type px(pxSEXP);
    Rcpp::traits::input_parameter< const double >::type py(pySEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double >::type T_observed(T_observedSEXP);
    Rcpp::traits::input_parameter< const double >::type accuracy(accuracySEXP);
    rcpp_result_gen = Rcpp::wrap(jaccard_mca_rcpp(px, py, m, T_observed, accuracy));
    return rcpp_result_gen;
END_RCPP
}
// jaccard_mca_rcpp_known_p
Rcpp::List jaccard_mca_rcpp_known_p(const double px, const double py, const int m, const double T_observed, const double accuracy);
RcppExport SEXP _jaccard_jaccard_mca_rcpp_known_p(SEXP pxSEXP, SEXP pySEXP, SEXP mSEXP, SEXP T_observedSEXP, SEXP accuracySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type px(pxSEXP);
    Rcpp::traits::input_parameter< const double >::type py(pySEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double >::type T_observed(T_observedSEXP);
    Rcpp::traits::input_parameter< const double >::type accuracy(accuracySEXP);
    rcpp_result_gen = Rcpp::wrap(jaccard_mca_rcpp_known_p(px, py, m, T_observed, accuracy));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_jaccard_jaccard_mca_rcpp", (DL_FUNC) &_jaccard_jaccard_mca_rcpp, 5},
    {"_jaccard_jaccard_mca_rcpp_known_p", (DL_FUNC) &_jaccard_jaccard_mca_rcpp_known_p, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_jaccard(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

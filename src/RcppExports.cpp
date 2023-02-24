// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// FBalgC
List FBalgC(NumericVector y2, int m, NumericVector delta, NumericMatrix pr, int Mx, IntegerVector Mx2, NumericMatrix gamma, NumericMatrix d, IntegerVector S, IntegerVector S2);
RcppExport SEXP _medHMM_FBalgC(SEXP y2SEXP, SEXP mSEXP, SEXP deltaSEXP, SEXP prSEXP, SEXP MxSEXP, SEXP Mx2SEXP, SEXP gammaSEXP, SEXP dSEXP, SEXP SSEXP, SEXP S2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y2(y2SEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pr(prSEXP);
    Rcpp::traits::input_parameter< int >::type Mx(MxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Mx2(Mx2SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type d(dSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type S(SSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type S2(S2SEXP);
    rcpp_result_gen = Rcpp::wrap(FBalgC(y2, m, delta, pr, Mx, Mx2, gamma, d, S, S2));
    return rcpp_result_gen;
END_RCPP
}
// FBalgCF
List FBalgCF(NumericVector y2, int m, NumericVector delta, NumericMatrix pr, int Mx, IntegerVector Mx2, NumericMatrix gamma, NumericMatrix d, IntegerVector S, IntegerVector S2, IntegerVector S3);
RcppExport SEXP _medHMM_FBalgCF(SEXP y2SEXP, SEXP mSEXP, SEXP deltaSEXP, SEXP prSEXP, SEXP MxSEXP, SEXP Mx2SEXP, SEXP gammaSEXP, SEXP dSEXP, SEXP SSEXP, SEXP S2SEXP, SEXP S3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y2(y2SEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pr(prSEXP);
    Rcpp::traits::input_parameter< int >::type Mx(MxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Mx2(Mx2SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type d(dSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type S(SSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type S2(S2SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type S3(S3SEXP);
    rcpp_result_gen = Rcpp::wrap(FBalgCF(y2, m, delta, pr, Mx, Mx2, gamma, d, S, S2, S3));
    return rcpp_result_gen;
END_RCPP
}
// mult_ed_fb_cpp
List mult_ed_fb_cpp(int m, int n, NumericVector delta, NumericMatrix allprobs, int Mx, IntegerVector Mx2, NumericMatrix gamma, NumericMatrix d, IntegerVector S, IntegerVector S2);
RcppExport SEXP _medHMM_mult_ed_fb_cpp(SEXP mSEXP, SEXP nSEXP, SEXP deltaSEXP, SEXP allprobsSEXP, SEXP MxSEXP, SEXP Mx2SEXP, SEXP gammaSEXP, SEXP dSEXP, SEXP SSEXP, SEXP S2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type allprobs(allprobsSEXP);
    Rcpp::traits::input_parameter< int >::type Mx(MxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Mx2(Mx2SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type d(dSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type S(SSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type S2(S2SEXP);
    rcpp_result_gen = Rcpp::wrap(mult_ed_fb_cpp(m, n, delta, allprobs, Mx, Mx2, gamma, d, S, S2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_medHMM_FBalgC", (DL_FUNC) &_medHMM_FBalgC, 10},
    {"_medHMM_FBalgCF", (DL_FUNC) &_medHMM_FBalgCF, 11},
    {"_medHMM_mult_ed_fb_cpp", (DL_FUNC) &_medHMM_mult_ed_fb_cpp, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_medHMM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

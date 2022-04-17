// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Rtsne_cpp
Rcpp::List Rtsne_cpp(NumericMatrix X, int no_dims, double perplexity, double theta, bool verbose, int max_iter, bool distance_precomputed, NumericMatrix Y_in, bool init, int stop_lying_iter, int mom_switch_iter, double momentum, double final_momentum, double eta, double exaggeration_factor, unsigned int num_threads);
RcppExport SEXP _Rtsne_Rtsne_cpp(SEXP XSEXP, SEXP no_dimsSEXP, SEXP perplexitySEXP, SEXP thetaSEXP, SEXP verboseSEXP, SEXP max_iterSEXP, SEXP distance_precomputedSEXP, SEXP Y_inSEXP, SEXP initSEXP, SEXP stop_lying_iterSEXP, SEXP mom_switch_iterSEXP, SEXP momentumSEXP, SEXP final_momentumSEXP, SEXP etaSEXP, SEXP exaggeration_factorSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type no_dims(no_dimsSEXP);
    Rcpp::traits::input_parameter< double >::type perplexity(perplexitySEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type distance_precomputed(distance_precomputedSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Y_in(Y_inSEXP);
    Rcpp::traits::input_parameter< bool >::type init(initSEXP);
    Rcpp::traits::input_parameter< int >::type stop_lying_iter(stop_lying_iterSEXP);
    Rcpp::traits::input_parameter< int >::type mom_switch_iter(mom_switch_iterSEXP);
    Rcpp::traits::input_parameter< double >::type momentum(momentumSEXP);
    Rcpp::traits::input_parameter< double >::type final_momentum(final_momentumSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type exaggeration_factor(exaggeration_factorSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(Rtsne_cpp(X, no_dims, perplexity, theta, verbose, max_iter, distance_precomputed, Y_in, init, stop_lying_iter, mom_switch_iter, momentum, final_momentum, eta, exaggeration_factor, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// Rtsne_nn_cpp
Rcpp::List Rtsne_nn_cpp(IntegerMatrix nn_dex, NumericMatrix nn_dist, int no_dims, double perplexity, double theta, bool verbose, int max_iter, NumericMatrix Y_in, bool init, int stop_lying_iter, int mom_switch_iter, double momentum, double final_momentum, double eta, double exaggeration_factor, unsigned int num_threads);
RcppExport SEXP _Rtsne_Rtsne_nn_cpp(SEXP nn_dexSEXP, SEXP nn_distSEXP, SEXP no_dimsSEXP, SEXP perplexitySEXP, SEXP thetaSEXP, SEXP verboseSEXP, SEXP max_iterSEXP, SEXP Y_inSEXP, SEXP initSEXP, SEXP stop_lying_iterSEXP, SEXP mom_switch_iterSEXP, SEXP momentumSEXP, SEXP final_momentumSEXP, SEXP etaSEXP, SEXP exaggeration_factorSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type nn_dex(nn_dexSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type nn_dist(nn_distSEXP);
    Rcpp::traits::input_parameter< int >::type no_dims(no_dimsSEXP);
    Rcpp::traits::input_parameter< double >::type perplexity(perplexitySEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Y_in(Y_inSEXP);
    Rcpp::traits::input_parameter< bool >::type init(initSEXP);
    Rcpp::traits::input_parameter< int >::type stop_lying_iter(stop_lying_iterSEXP);
    Rcpp::traits::input_parameter< int >::type mom_switch_iter(mom_switch_iterSEXP);
    Rcpp::traits::input_parameter< double >::type momentum(momentumSEXP);
    Rcpp::traits::input_parameter< double >::type final_momentum(final_momentumSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type exaggeration_factor(exaggeration_factorSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(Rtsne_nn_cpp(nn_dex, nn_dist, no_dims, perplexity, theta, verbose, max_iter, Y_in, init, stop_lying_iter, mom_switch_iter, momentum, final_momentum, eta, exaggeration_factor, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// normalize_input_cpp
Rcpp::NumericMatrix normalize_input_cpp(Rcpp::NumericMatrix input);
RcppExport SEXP _Rtsne_normalize_input_cpp(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(normalize_input_cpp(input));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Rtsne_Rtsne_cpp", (DL_FUNC) &_Rtsne_Rtsne_cpp, 16},
    {"_Rtsne_Rtsne_nn_cpp", (DL_FUNC) &_Rtsne_Rtsne_nn_cpp, 16},
    {"_Rtsne_normalize_input_cpp", (DL_FUNC) &_Rtsne_normalize_input_cpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_Rtsne(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

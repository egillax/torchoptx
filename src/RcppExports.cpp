// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "torchoptx_types.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_torchoptx_sgd
torchoptx::optim_sgd rcpp_torchoptx_sgd(torch::TensorList params);
RcppExport SEXP _torchoptx_rcpp_torchoptx_sgd(SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< torch::TensorList >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_torchoptx_sgd(params));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_torchoptx_sgd_step
void rcpp_torchoptx_sgd_step(torchoptx::optim_sgd opt);
RcppExport SEXP _torchoptx_rcpp_torchoptx_sgd_step(SEXP optSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< torchoptx::optim_sgd >::type opt(optSEXP);
    rcpp_torchoptx_sgd_step(opt);
    return R_NilValue;
END_RCPP
}
// rcpp_torchoptx_sgd_zero_grad
void rcpp_torchoptx_sgd_zero_grad(torchoptx::optim_sgd opt);
RcppExport SEXP _torchoptx_rcpp_torchoptx_sgd_zero_grad(SEXP optSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< torchoptx::optim_sgd >::type opt(optSEXP);
    rcpp_torchoptx_sgd_zero_grad(opt);
    return R_NilValue;
END_RCPP
}
// rcpp_delete_optim_sgd
void rcpp_delete_optim_sgd(void* x);
RcppExport SEXP _torchoptx_rcpp_delete_optim_sgd(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< void* >::type x(xSEXP);
    rcpp_delete_optim_sgd(x);
    return R_NilValue;
END_RCPP
}
// optim_sgd_new
SEXP optim_sgd_new(torch::TensorList params);
RcppExport SEXP _torchoptx_optim_sgd_new(SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< torch::TensorList >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(optim_sgd_new(params));
    return rcpp_result_gen;
END_RCPP
}
// optim_sgd_step
void optim_sgd_step(torchoptx::optim_sgd opt);
RcppExport SEXP _torchoptx_optim_sgd_step(SEXP optSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< torchoptx::optim_sgd >::type opt(optSEXP);
    optim_sgd_step(opt);
    return R_NilValue;
END_RCPP
}
// optim_sgd_zero_grad
void optim_sgd_zero_grad(torchoptx::optim_sgd opt);
RcppExport SEXP _torchoptx_optim_sgd_zero_grad(SEXP optSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< torchoptx::optim_sgd >::type opt(optSEXP);
    optim_sgd_zero_grad(opt);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_torchoptx_rcpp_torchoptx_sgd", (DL_FUNC) &_torchoptx_rcpp_torchoptx_sgd, 1},
    {"_torchoptx_rcpp_torchoptx_sgd_step", (DL_FUNC) &_torchoptx_rcpp_torchoptx_sgd_step, 1},
    {"_torchoptx_rcpp_torchoptx_sgd_zero_grad", (DL_FUNC) &_torchoptx_rcpp_torchoptx_sgd_zero_grad, 1},
    {"_torchoptx_rcpp_delete_optim_sgd", (DL_FUNC) &_torchoptx_rcpp_delete_optim_sgd, 1},
    {"_torchoptx_optim_sgd_new", (DL_FUNC) &_torchoptx_optim_sgd_new, 1},
    {"_torchoptx_optim_sgd_step", (DL_FUNC) &_torchoptx_optim_sgd_step, 1},
    {"_torchoptx_optim_sgd_zero_grad", (DL_FUNC) &_torchoptx_optim_sgd_zero_grad, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_torchoptx(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
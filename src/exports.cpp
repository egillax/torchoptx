// Generated by using torchexport::export() -> do not edit by hand
#include "exports.h"
#define TORCHOPTX_HEADERS_ONLY
#include <torchoptx/torchoptx.h>

// [[Rcpp::export]]
torchoptx::optim_sgd rcpp_torchoptx_sgd (torch::TensorList params) {
  return  torchoptx_sgd(params.get());
}
// [[Rcpp::export]]
void rcpp_torchoptx_sgd_step (torchoptx::optim_sgd opt) {
   torchoptx_sgd_step(opt.get());
}
// [[Rcpp::export]]
void rcpp_torchoptx_sgd_zero_grad (torchoptx::optim_sgd opt) {
   torchoptx_sgd_zero_grad(opt.get());
}
// [[Rcpp::export]]
void rcpp_delete_optim_sgd (void* x) {
   delete_optim_sgd(x);
}
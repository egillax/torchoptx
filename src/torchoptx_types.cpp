#include <Rcpp.h>
#include "torchoptx_types.h"
#include "exports.h"

namespace torchoptx {

void* optim_sgd::get() {
  return ptr.get();
}

optim_sgd::operator SEXP () const {
  auto xptr = make_xptr<optim_sgd>(*this);
  xptr.attr("class") = Rcpp::CharacterVector::create("torchoptx_optim_sgd");
  return xptr;
}

optim_sgd::optim_sgd (SEXP x) : optim_sgd{Rcpp::as<Rcpp::XPtr<optim_sgd>>(x)->ptr} {}

optim_sgd::optim_sgd (void* x) : ptr(x, rcpp_delete_optim_sgd) {};

/* Adam */

void* optim_adam::get() {
  return ptr.get();
}

optim_adam::operator SEXP () const {
  auto xptr = make_xptr<optim_adam>(*this);
  xptr.attr("class") = Rcpp::CharacterVector::create("torchoptx_optim_adam");
  return xptr;
}

optim_adam::optim_adam (SEXP x) : optim_adam{Rcpp::as<Rcpp::XPtr<optim_adam>>(x)->ptr} {}

optim_adam::optim_adam (void* x) : ptr(x, rcpp_delete_optim_adam) {};

///* param_groups */
//void* optim_param_group::get() {
//    return ptr.get();
//}
//
//optim_param_group::operator SEXP () const {
//    auto xptr = make_xptr<optim_param_group>(*this);
//    xptr.attr("class") = Rcpp::CharacterVector::create("torchoptx_optim_param_group");
//    return xptr;
//}
//
//optim_param_group::optim_param_group(SEXP x) : optim_param_group{Rcpp::as<Rcpp::XPtr<optim_param_group>>(x)->ptr} {}
//
//optim_param_group::optim_param_group(void* x) : ptr(x, rcpp_delete_optim_param_group) {};
//
///* Optimizer */
//void* optimizer::get() {
//  return ptr.get();
//}
//
//optimizer::operator SEXP () const {
//  auto xptr = make_xptr<optimizer>(*this);
//  xptr.attr("class") = Rcpp::CharacterVector::create("torchoptx_optimizer");
//  return xptr;
//}
//
//optimizer::optimizer (SEXP x) : optimizer{Rcpp::as<Rcpp::XPtr<optimizer>>(x)->ptr} {}
//
//optimizer::optimizer (void* x) : ptr(x, rcpp_delete_optimizer) {};
}

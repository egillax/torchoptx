#include <torch/torch.h>
#include <lantern/types.h>
#include "torchoptx/torchoptx_types.h"

namespace make_raw {
void* SGD (const optim_sgd& x) {
  return x;
}
void* Adam (const optim_adam& x) {
  return x;
}
void* ParamGroup (const optim_param_group& x)  {
  return x;
}
void* Optimizer (const optimizer& x) {
  return x
}
}

namespace from_raw {
optim_sgd SGD (void* x) {
  return reinterpret_cast<optim_sgd>(x);
}
optim_adam Adam (void* x) {
  return reinterpret_cast<optim_adam>(x);
}
optim_param_group ParamGroup (void* x) {
  return reinterpret_cast<optim_param_group>(x);
}
optimizer Optimizer (void* x) {
  return reinterpret_cast<optimizer>(x);
}
}

// [[torch::export]]
void delete_optim_sgd(void* x) {
  delete reinterpret_cast<optim_sgd>(x);
}

// [[torch::export]]
void delete_optim_adam(void* x) {
  delete reinterpret_cast<optim_adam>(x);
}

//// [[torch::export]]
//void delete_optim_param_group(void* x) {
//    delete reinterpret_cast<optim_param_group>(x);
//}
//
//// [[torch::export(register_types=c("optimizer", "Optimizer", "void*", "torchoptx::optimizer"))]]
//void delete_optimizer(void* x) {
//  delete reinterpret_cast<optimizer>(x);
//}

#include <torch/torch.h>

using optim_sgd = torch::optim::SGD*;
using optim_adam = torch::optim::Adam*;
using optim_param_group = torch::optim::OptimizerParamGroup*;
using optimizer = torch::optim::Optimizer*;

namespace make_raw {
void* SGD (const optim_sgd& x);
void* Adam (const optim_adam& x);
void* ParamGroup (const optim_param_group& x);
void* Optimizer (const optimizer& x);
}

namespace from_raw {
optim_sgd SGD (void* x);
optim_adam Adam (void* x);
optim_param_group ParamGroup (void* x);
optimizer Optimizer (void* x);
}
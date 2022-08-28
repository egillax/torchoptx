//
// Created by egill on 15-6-22.
//
#include <torch/torch.h>
#include <lantern/types.h>
#include <iostream>
#include <vector>
#include "torchoptx/torchoptx.h"
#include "torchoptx/torchoptx_types.h"

int main() {

    torch::nn::Sequential model (
            torch::nn::Linear(2,8),
            torch::nn::Functional(torch::sigmoid),
            torch::nn::Linear(8,1),
            torch::nn::Functional(torch::sigmoid));

    int i = 1;
    torch::optim::AdamOptions options(0.01);
    torch::optim::Adam opt(model->parameters(), options);

    auto& param_groups = opt.param_groups();
    double old_lr = param_groups[0].options().get_lr();
    param_groups[0].options().set_lr(1e-3);

    double new_lr = param_groups[0].options().get_lr();
    i = 2;



}
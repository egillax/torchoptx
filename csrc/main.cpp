//
// Created by egill on 15-6-22.
//
#include <torch/torch.h>
#include <lantern/types.h>
#include <iostream>
#include <vector>
#include "torchoptx/torchoptx.h"
#include "torchoptx/torchoptx_types.h"
#include "src/exports.h"

int main() {

    int i = 1;

    torch::TensorList param;
    param = torch::TensorList(torch::randn(10));
    
    optim_sgd opt = rcpp_torchoptx_sgd(param, 0.01, 0.01, 0.01, 1e-3, 0);



}
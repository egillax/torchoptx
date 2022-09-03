#' @export
optim_sgd <- torch::optimizer(
  "optim_sgd",
  initialize = function(params, lr, momentum = 0, dampening = 0, weight_decay = 0,
                        nesterov = FALSE) {
    self$opt <- optim_sgd_new(params, lr, momentum, dampening, weight_decay,
                              nesterov)
    self$param_group <- optim_param_group(self$opt)
  },
  step = function() {
    optim_sgd_step(self$opt)
  },
  zero_grad = function() {
    optim_sgd_zero_grad(self$opt)
  }
)

#' @export
optim_adam <- torch::optimizer(
  "optim_adam",
  initialize = function(params, lr = 0.001, betas = c(0.9, 0.999), eps = 1e-08,
                        weight_decay = 0, amsgrad = FALSE) {
    self$opt <- optim_adam_new(params, lr, betas[1], betas[2], eps, weight_decay,
                               amsgrad)
    self$param_group <- optim_param_group(self$opt)
  },
  step = function() {
    optim_adam_step(self$opt)
  },
  zero_grad = function() {
    optim_adam_zero_grad(self$opt)
  }
)

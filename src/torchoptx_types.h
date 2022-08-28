#pragma once
#include <torch.h>

namespace torchoptx {

    class optim_sgd {
    public:
        std::shared_ptr<void> ptr;

        optim_sgd(void *x);

        optim_sgd(std::shared_ptr<void> x) : ptr(x) {}

        optim_sgd(SEXP x);

        operator SEXP() const;

        void *get();
    };

    class optim_adam {
    public:
        std::shared_ptr<void> ptr;

        optim_adam(void *x);

        optim_adam(std::shared_ptr<void> x) : ptr(x) {}

        optim_adam(SEXP x);

        operator SEXP() const;

        void *get();
    };
}

//class optim_param_group {
//  public:
//    std::shared_ptr<void> ptr;
//    optim_param_group (void* x);
//    optim_param_group (std::shared_ptr<void> x) : ptr(x) {}
//    optim_param_group (SEXP x);
//    operator SEXP () const;
//    void* get ();
//};
//
//class optimizer {
//  public:
//    std::shared_ptr<void> ptr;
//    optimizer (void* x);
//    optimizer (std::shared_ptr<void> x) : ptr(x) {}
//    optimizer (SEXP x);
//    operator SEXP () const;
//    void* get ();
//};


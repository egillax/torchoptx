// Generated by using torchexport::export() -> do not edit by hand
#pragma once

#ifdef _WIN32
#ifndef TORCHOPTX_HEADERS_ONLY
#define TORCHOPTX_API extern "C" __declspec(dllexport)
#else
#define TORCHOPTX_API extern "C" __declspec(dllimport)
#endif
#else
#define TORCHOPTX_API extern "C"
#endif

#ifndef TORCHOPTX_HANDLE_EXCEPTION
#define TORCHOPTX_HANDLE_EXCEPTION                                  \
catch(const std::exception& ex) {                                  \
  p_torchoptx_last_error = make_raw::string(ex.what());             \
} catch (std::string& ex) {                                        \
  p_torchoptx_last_error = make_raw::string(ex);                    \
} catch (...) {                                                    \
  p_torchoptx_last_error = make_raw::string("Unknown error. ");     \
}
#endif

void host_exception_handler ();
extern void* p_torchoptx_last_error;
TORCHOPTX_API void* torchoptx_last_error ();
TORCHOPTX_API void torchoptx_last_error_clear();

TORCHOPTX_API void* _torchoptx_sgd (void* params, double lr, double momentum, double dampening, double weight_decay, bool nesterov);
TORCHOPTX_API void _torchoptx_sgd_step (void* opt);
TORCHOPTX_API void _torchoptx_sgd_zero_grad (void* opt);
TORCHOPTX_API void _torchoptx_sgd_set_lr (void* opt, double lr);
TORCHOPTX_API double _torchoptx_sgd_get_lr (void* opt);
TORCHOPTX_API void* _torchoptx_adam (void* params, double lr, double betas0, double betas1, double eps, double weight_decay, bool amsgrad);
TORCHOPTX_API void _torchoptx_adam_step (void* opt);
TORCHOPTX_API void _torchoptx_adam_zero_grad (void* opt);
TORCHOPTX_API void _delete_optim_sgd (void* x);
TORCHOPTX_API void _delete_optim_adam (void* x);

#ifdef RCPP_VERSION
inline void* torchoptx_sgd (void* params, double lr, double momentum, double dampening, double weight_decay, bool nesterov) {
  auto ret =  _torchoptx_sgd(params, lr, momentum, dampening, weight_decay, nesterov);
  host_exception_handler();
  return ret;
}
inline void torchoptx_sgd_step (void* opt) {
   _torchoptx_sgd_step(opt);
  host_exception_handler();
  
}
inline void torchoptx_sgd_zero_grad (void* opt) {
   _torchoptx_sgd_zero_grad(opt);
  host_exception_handler();
  
}
inline void torchoptx_sgd_set_lr (void* opt, double lr) {
   _torchoptx_sgd_set_lr(opt, lr);
  host_exception_handler();
  
}
inline double torchoptx_sgd_get_lr (void* opt) {
  auto ret =  _torchoptx_sgd_get_lr(opt);
  host_exception_handler();
  return ret;
}
inline void* torchoptx_adam (void* params, double lr, double betas0, double betas1, double eps, double weight_decay, bool amsgrad) {
  auto ret =  _torchoptx_adam(params, lr, betas0, betas1, eps, weight_decay, amsgrad);
  host_exception_handler();
  return ret;
}
inline void torchoptx_adam_step (void* opt) {
   _torchoptx_adam_step(opt);
  host_exception_handler();
  
}
inline void torchoptx_adam_zero_grad (void* opt) {
   _torchoptx_adam_zero_grad(opt);
  host_exception_handler();
  
}
inline void delete_optim_sgd (void* x) {
   _delete_optim_sgd(x);
  host_exception_handler();
  
}
inline void delete_optim_adam (void* x) {
   _delete_optim_adam(x);
  host_exception_handler();
  
}
#endif // RCPP_VERSION

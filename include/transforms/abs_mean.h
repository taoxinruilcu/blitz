#ifndef INCLUDE_TRANSFORMS_ABS_MEAN_H_
#define INCLUDE_TRANSFORMS_ABS_MEAN_H_

#include "transforms/cost.h"

namespace blitz {

template<template <typename> class TensorType, typename DType>
class AbsMean : public Cost<TensorType, DType> {
 public:
  AbsMean() {}
  ~AbsMean() {}

  virtual DType Apply(const shared_ptr<TensorType<DType> > output,
    const shared_ptr<TensorType<DType> > target);

  virtual void Derivative(
    const shared_ptr<TensorType<DType> > output,
    const shared_ptr<TensorType<DType> > target,
    shared_ptr<TensorType<DType> > result);

  DISABLE_COPY_AND_ASSIGN(AbsMean);
};

}  // namespace blitz

#endif  // INCLUDE_TRANSFORMS_ABS_MEAN_H_

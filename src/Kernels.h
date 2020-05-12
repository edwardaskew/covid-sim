#ifndef COVIDSIM_KERNELS_H_INCLUDED_
#define COVIDSIM_KERNELS_H_INCLUDED_

#include "Param.h"
#include "Model.h"

extern double *nKernel, *nKernelHR;

void InitKernel(int, double, param const& P, cell const* Cells, cell** CellLookup);
double ExpKernel(double, param const& P);
double PowerKernel(double, param const& P);
double PowerKernelB(double, param const& P);
double PowerKernelUS(double, param const& P);
double PowerExpKernel(double, param const& P);
double GaussianKernel(double, param const& P);
double StepKernel(double, param const& P);
double numKernel(double, param const& P);

#endif // COVIDSIM_KERNELS_H_INCLUDED_

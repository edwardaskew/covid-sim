#ifndef COVIDSIM_DIST_H_INCLUDED_
#define COVIDSIM_DIST_H_INCLUDED_

#include "Model.h"
#include "Param.h"

extern double sinx[361], cosx[361], asin2sqx[1001];
double dist2UTM(double, double, double, double, param const& P);
double dist2(person*, person*, param const& P, household const* Households);
double dist2_cc(cell*, cell*, param const& P, cell const * Cells);
double dist2_cc_min(cell*, cell*, param const& P, cell const* Cells);
double dist2_mm(microcell const* a, microcell const* b, param const& P, microcell const* Mcells);
double dist2_raw(double, double, double, double, param const& P);

#endif // COVIDSIM_DIST_H_INCLUDED_

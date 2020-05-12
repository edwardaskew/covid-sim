#ifndef COVIDSIM_CALCINFSUSC_H_
#define COVIDSIM_CALCINFSUSC_H_

#include "Param.h"
#include "Model.h"

double CalcHouseInf(int, unsigned short int, param const& P, person const* Hosts, household const * Households);
double CalcPlaceInf(int, int, unsigned short int, param const& P, person const* Hosts);
double CalcSpatialInf(int, unsigned short int, param const& P, person const* Hosts);
double CalcPersonInf(int, unsigned short int, param const& P, person const* Hosts);
double CalcHouseSusc(int, unsigned short int, int, int, param const& P, person const* Hosts, microcell const* Mcells);
double CalcPlaceSusc(int, int, unsigned short int, int, int, param const& P, person const* Hosts, microcell const* Mcells);
double CalcSpatialSusc(int, unsigned short int, int, int, param const& P, person const* Hosts, microcell const* Mcells);
double CalcPersonSusc(int, unsigned short int, int, int, param const& P, person const* Hosts);

#endif // COVIDSIM_CALCINFSUSC_

#ifndef COVIDSIM_CALCINFSUSC_H_
#define COVIDSIM_CALCINFSUSC_H_

#include "Param.h"

double CalcHouseInf(int, unsigned short int, param const& P);
double CalcPlaceInf(int, int, unsigned short int, param const& P);
double CalcSpatialInf(int, unsigned short int, param const& P);
double CalcPersonInf(int, unsigned short int, param const& P);
double CalcHouseSusc(int, unsigned short int, int, int, param const& P);
double CalcPlaceSusc(int, int, unsigned short int, int, int, param const& P);
double CalcSpatialSusc(int, unsigned short int, int, int, param const& P);
double CalcPersonSusc(int, unsigned short int, int, int, param const& P);

#endif // COVIDSIM_CALCINFSUSC_

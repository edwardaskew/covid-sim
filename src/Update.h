#ifndef COVIDSIM_UPDATE_H_INCLUDED_
#define COVIDSIM_UPDATE_H_INCLUDED_

#include "Bitmap.h"
#include "Param.h"

void DoImmune(int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, cell* Cells);
void DoInfect(int, double, int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State, popvar* StateT, cell* Cells, microcell* Mcells, place** Places, adminunit* AdUnits); //added int as argument to InfectSweep to record run number: ggilani - 15/10/14
void DoIncub(int, unsigned short int, int, int, param const& P, person* Hosts, cell* Cells, microcell const* Mcells, adminunit const* AdUnits); //added int as argument to record run number: ggilani - 23/10/14
void DoDetectedCase(int, double, unsigned short int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State, popvar* StateT, cell* Cells, microcell* Mcells, place** Places, adminunit* AdUnits);
void DoCase(int, double, unsigned short int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State, popvar* StateT, cell* Cells, microcell* Mcells, place** Places, adminunit* AdUnits);
void DoFalseCase(int, double, unsigned short int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State, popvar* StateT, cell* Cells, microcell* Mcells, place** Places, adminunit * AdUnits);
void DoRecover(int, int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, cell* Cells); //added int as argument to record run number: ggilani - 23/10/14. Added thread number to record Severity categories in StateT.
void DoDeath(int, int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar* StateT, cell* Cells, microcell const* Mcells); //added int as argument to record run number: ggilani - 23/10/14
void DoPlaceClose(int, int, unsigned short int, int, int, param const& P, person* Hosts, household const* Households, popvar* StateT, microcell const* Mcells, place** Places, adminunit* AdUnits);
void DoPlaceOpen(int, int, unsigned short int, int, param const& P, person* Hosts, household const* Households, place** Places);
void DoTreatCase(int, unsigned short int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar const& State, popvar* StateT, cell* Cells, microcell const* Mcells);
void DoProph(int, unsigned short int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar const& State, popvar* StateT, cell* Cells, microcell const* Mcells);
void DoProphNoDelay(int, unsigned short int, int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar const& State, popvar* StateT, cell* Cells, microcell const* Mcells);
int DoVacc(int, unsigned short int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State, cell* Cells);
void DoVaccNoDelay(int, unsigned short int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State, cell* Cells);
//SEVERITY ANALYSIS
void DoMild(int, int, param const& P, person* Hosts, popvar* StateT, microcell const* Mcells);
void DoSARI(int, int, param const& P, person* Hosts, popvar* StateT, microcell const* Mcells);
void DoCritical(int, int, param const& P, person* Hosts, popvar* StateT, microcell const* Mcells);
void DoRecoveringFromCritical(int, int, param const& P, person * Hosts, popvar* StateT, microcell const* Mcells);
void DoRecover_FromSeverity(int, int, param const& P, person* Hosts, popvar* StateT, microcell const* Mcells);
void DoDeath_FromCriticalorSARIorILI(int, int, param const& P, person* Hosts, popvar* StateT, microcell const* Mcells);

#endif // COVIDSIM_UPDATE_H_INCLUDED_

#ifndef COVIDSIM_UPDATE_H_INCLUDED_
#define COVIDSIM_UPDATE_H_INCLUDED_

#include "Bitmap.h"
#include "Param.h"

void DoImmune(int, bitmap_state const* state, param const& P, person* Hosts, household const* Households);
void DoInfect(int, double, int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State); //added int as argument to InfectSweep to record run number: ggilani - 15/10/14
void DoIncub(int, unsigned short int, int, int, param const& P, person* Hosts); //added int as argument to record run number: ggilani - 23/10/14
void DoDetectedCase(int, double, unsigned short int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State);
void DoCase(int, double, unsigned short int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State);
void DoFalseCase(int, double, unsigned short int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State);
void DoRecover(int, int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households); //added int as argument to record run number: ggilani - 23/10/14. Added thread number to record Severity categories in StateT.
void DoDeath(int, int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households); //added int as argument to record run number: ggilani - 23/10/14
void DoPlaceClose(int, int, unsigned short int, int, int, param const& P, person* Hosts, household const* Households);
void DoPlaceOpen(int, int, unsigned short int, int, param const& P, person* Hosts, household const* Households);
void DoTreatCase(int, unsigned short int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar const& State);
void DoProph(int, unsigned short int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar const& State);
void DoProphNoDelay(int, unsigned short int, int, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar const& State);
int DoVacc(int, unsigned short int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State);
void DoVaccNoDelay(int, unsigned short int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State);
//SEVERITY ANALYSIS
void DoMild(int, int, param const& P, person* Hosts);
void DoSARI(int, int, param const& P, person* Hosts);
void DoCritical(int, int, param const& P, person* Hosts);
void DoRecoveringFromCritical(int, int, param const& P, person * Hosts);
void DoRecover_FromSeverity(int, int, param const& P, person* Hosts);
void DoDeath_FromCriticalorSARIorILI(int, int, param const& P, person* Hosts);

#endif // COVIDSIM_UPDATE_H_INCLUDED_

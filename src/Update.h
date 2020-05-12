#ifndef COVIDSIM_UPDATE_H_INCLUDED_
#define COVIDSIM_UPDATE_H_INCLUDED_

#include "Bitmap.h"
#include "Param.h"

void DoImmune(int, bitmap_state const* state, param const& P);
void DoInfect(int, double, int, int, bitmap_state const* state, param const& P); //added int as argument to InfectSweep to record run number: ggilani - 15/10/14
void DoIncub(int, unsigned short int, int, int, param const& P); //added int as argument to record run number: ggilani - 23/10/14
void DoDetectedCase(int, double, unsigned short int, int, bitmap_state const* state, param const& P);
void DoCase(int, double, unsigned short int, int, bitmap_state const* state, param const& P);
void DoFalseCase(int, double, unsigned short int, int, bitmap_state const* state, param const& P);
void DoRecover(int, int, int, bitmap_state const* state, param const& P); //added int as argument to record run number: ggilani - 23/10/14. Added thread number to record Severity categories in StateT.
void DoDeath(int, int, int, bitmap_state const* state, param const& P); //added int as argument to record run number: ggilani - 23/10/14
void DoPlaceClose(int, int, unsigned short int, int, int, param const& P);
void DoPlaceOpen(int, int, unsigned short int, int, param const& P);
void DoTreatCase(int, unsigned short int, int, bitmap_state const* state, param const& P);
void DoProph(int, unsigned short int, int, bitmap_state const* state, param const& P);
void DoProphNoDelay(int, unsigned short int, int, int, bitmap_state const* state, param const& P);
int DoVacc(int, unsigned short int, bitmap_state const* state, param const& P);
void DoVaccNoDelay(int, unsigned short int, bitmap_state const* state, param const& P);
//SEVERITY ANALYSIS
void DoMild(int, int, param const& P);
void DoSARI(int, int, param const& P);
void DoCritical(int, int, param const& P);
void DoRecoveringFromCritical(int, int, param const& P);
void DoRecover_FromSeverity(int, int, param const& P);
void DoDeath_FromCriticalorSARIorILI(int, int, param const& P);

#endif // COVIDSIM_UPDATE_H_INCLUDED_

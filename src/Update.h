#ifndef COVIDSIM_UPDATE_H_INCLUDED_
#define COVIDSIM_UPDATE_H_INCLUDED_

#include "Bitmap.h"

void DoImmune(int, bitmap_state const* state);
void DoInfect(int, double, int, int, bitmap_state const* state); //added int as argument to InfectSweep to record run number: ggilani - 15/10/14
void DoIncub(int, unsigned short int, int, int); //added int as argument to record run number: ggilani - 23/10/14
void DoDetectedCase(int, double, unsigned short int, int, bitmap_state const* state);
void DoCase(int, double, unsigned short int, int, bitmap_state const* state);
void DoFalseCase(int, double, unsigned short int, int, bitmap_state const* state);
void DoRecover(int, int, int, bitmap_state const* state); //added int as argument to record run number: ggilani - 23/10/14. Added thread number to record Severity categories in StateT.
void DoDeath(int, int, int, bitmap_state const* state); //added int as argument to record run number: ggilani - 23/10/14
void DoPlaceClose(int, int, unsigned short int, int, int);
void DoPlaceOpen(int, int, unsigned short int, int);
void DoTreatCase(int, unsigned short int, int, bitmap_state const* state);
void DoProph(int, unsigned short int, int, bitmap_state const* state);
void DoProphNoDelay(int, unsigned short int, int, int, bitmap_state const* state);
int DoVacc(int, unsigned short int, bitmap_state const* state);
void DoVaccNoDelay(int, unsigned short int, bitmap_state const* state);
//SEVERITY ANALYSIS
void DoMild(int, int);
void DoSARI(int, int);
void DoCritical(int, int);
void DoRecoveringFromCritical(int, int);
void DoRecover_FromSeverity(int, int);
void DoDeath_FromCriticalorSARIorILI(int, int);

#endif // COVIDSIM_UPDATE_H_INCLUDED_

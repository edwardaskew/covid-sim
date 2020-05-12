#ifndef COVIDSIM_SWEEP_H_INCLUDED_
#define COVIDSIM_SWEEP_H_INCLUDED_
#include "Bitmap.h"

void TravelReturnSweep(double, param const& P, person* Hosts);
void TravelDepartSweep(double, param const& P, person* Hosts);
void InfectSweep(double, int, bitmap_state const* state, param const& P, person* Hosts); //added int as argument to InfectSweep to record run number: ggilani - 15/10/14
void IncubRecoverySweep(double, int, bitmap_state const* state, param const& P, person* Hosts); //added int as argument to record run number: ggilani - 15/10/14
int TreatSweep(double, bitmap_state const* state, param const& P, person* Hosts);
//void HospitalSweep(double); //added hospital sweep function: ggilani - 10/11/14
void DigitalContactTracingSweep(double, bitmap_state const* state, param const& P, person* Hosts); // added function to update contact tracing number

#endif // COVIDSIM_SWEEP_H_INCLUDED_

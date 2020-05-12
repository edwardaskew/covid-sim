#ifndef COVIDSIM_SWEEP_H_INCLUDED_
#define COVIDSIM_SWEEP_H_INCLUDED_
#include "Bitmap.h"

void TravelReturnSweep(double, param const& P, person* Hosts);
void TravelDepartSweep(double, param const& P, person* Hosts, household const* Households, cell const* Cells, cell** CellLookup, microcell const* Mcells);
void InfectSweep(double, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State, popvar* StateT, cell* Cells, cell** CellLookup, microcell* Mcells); //added int as argument to InfectSweep to record run number: ggilani - 15/10/14
void IncubRecoverySweep(double, int, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State, popvar* StateT, cell* Cells, cell** CellLookup, microcell* Mcells); //added int as argument to record run number: ggilani - 15/10/14
int TreatSweep(double, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State, popvar* StateT, cell* Cells, microcell* Mcells, microcell** McellLookup);
//void HospitalSweep(double); //added hospital sweep function: ggilani - 10/11/14
void DigitalContactTracingSweep(double, bitmap_state const* state, param const& P, person* Hosts, household const* Households, popvar& State, popvar* StateT, cell* Cells, microcell* Mcells); // added function to update contact tracing number

#endif // COVIDSIM_SWEEP_H_INCLUDED_

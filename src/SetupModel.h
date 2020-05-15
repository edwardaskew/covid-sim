#ifndef COVIDSIM_SETUPMODEL_H_INCLUDED_
#define COVIDSIM_SETUPMODEL_H_INCLUDED_

void SetupModel(char*, char*, char*, char*, param& P, person *& Hosts, household *& Households, popvar& State, popvar* StateT, cell *& Cells, cell**& CellLookup, microcell *& Mcells, microcell **& McellLookup, place **& Places, adminunit* AdUnits, airport* Airports, events *& InfEventLog, result_collection *result, double* infcountry_av, double* infcountry_num, double indivR0_av[][MAX_GEN_REC], double* denom_household, double inf_household_av[][MAX_HOUSEHOLD_SIZE + 1], double* AgeDist, double case_household_av[][MAX_HOUSEHOLD_SIZE + 1], double& PeakHeightSum);
void SetupPopulation(char*, char*, char*, param& P, person *& Hosts, household *& Households, popvar& State, popvar* StateT, cell *& Cells, cell**& CellLookup, microcell *& Mcells, microcell **& McellLookup, place **& Places, adminunit* AdUnits, double* denom_household, double* AgeDist, double* AgeDist2, double PropPlaces[][NUM_PLACE_TYPES]);
void SetupAirports(param& P, cell const* Cells, cell** CellLookup, microcell* Mcells, place ** Places, airport* Airports);
void AssignHouseholdAges(int, int, int, param const& P, person* Hosts, popvar const& State, microcell const* Mcells);
void AssignPeopleToPlaces(param& P, person* Hosts, household const* Households, cell* Cells, cell** CellLookup, microcell const * Mcells, place** Places, double PropPlaces[][NUM_PLACE_TYPES]);
void StratifyPlaces(param const& P, person* Hosts, popvar* StateT, place** Places);
void LoadPeopleToPlaces(char*, param const& P, person* Hosts);
void SavePeopleToPlaces(char*, param const& P, person const* Hosts);
void SaveAgeDistrib(param const& P, popvar const& State, double const* AgeDist, double* AgeDist2);
void UpdateProbs(int, param const& P, cell** CellLookup);

// network file format version; update this number when you make changes to the format of the
// network file, to ensure old/incompatible files are not loaded.
#define NETWORK_FILE_VERSION (1)

typedef struct BIN_FILE {
	double x, y, pop;
	int cnt, ad;
} bin_file;

extern char OutFile[1024],OutDensFile[1024];

#endif // COVIDSIM_SETUPMODEL_H_INCLUDED_

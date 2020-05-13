#ifndef COVIDSIM_SETUPMODEL_H_INCLUDED_
#define COVIDSIM_SETUPMODEL_H_INCLUDED_

void SetupModel(char*, char*, char*, char*, param& P, person *& Hosts, household *& Households, popvar& State, popvar* StateT, cell *& Cells, cell**& CellLookup, microcell *& Mcells, microcell **& McellLookup, place **& Places, adminunit* AdUnits);
void SetupPopulation(char*, char*, char*, param& P, person *& Hosts, household *& Households, popvar& State, popvar* StateT, cell *& Cells, cell**& CellLookup, microcell *& Mcells, microcell **& McellLookup, place **& Places, adminunit* AdUnits);
void SetupAirports(param& P, cell const* Cells, cell** CellLookup, microcell* Mcells, place ** Places);
void AssignHouseholdAges(int, int, int, param const& P, person* Hosts, popvar const& State, microcell const* Mcells);
void AssignPeopleToPlaces(param& P, person* Hosts, household const* Households, cell* Cells, cell** CellLookup, microcell const * Mcells, place** Places);
void StratifyPlaces(param const& P, person* Hosts, popvar* StateT, place** Places);
void LoadPeopleToPlaces(char*, param const& P, person* Hosts);
void SavePeopleToPlaces(char*, param const& P, person const* Hosts);
void SaveAgeDistrib(param const& P, popvar const& State);
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

#ifndef COVIDSIM_SETUPMODEL_H_INCLUDED_
#define COVIDSIM_SETUPMODEL_H_INCLUDED_

void SetupModel(char*, char*, char*, char*, param& P, person *& Hosts);
void SetupPopulation(char*, char*, char*, param& P, person *& Hosts);
void SetupAirports(param& P);
void AssignHouseholdAges(int, int, int, param const& P, person* Hosts);
void AssignPeopleToPlaces(param& P, person* Hosts);
void StratifyPlaces(param const& P, person* Hosts);
void LoadPeopleToPlaces(char*, param const& P, person* Hosts);
void SavePeopleToPlaces(char*, param const& P, person const* Hosts);
void SaveAgeDistrib(param const& P);
void UpdateProbs(int, param const& P);

// network file format version; update this number when you make changes to the format of the
// network file, to ensure old/incompatible files are not loaded.
#define NETWORK_FILE_VERSION (1)

typedef struct BIN_FILE {
	double x, y, pop;
	int cnt, ad;
} bin_file;

extern char OutFile[1024],OutDensFile[1024];

#endif // COVIDSIM_SETUPMODEL_H_INCLUDED_

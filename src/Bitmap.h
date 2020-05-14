#ifndef COVIDSIM_BITMAP_H_INCLUDED_
#define COVIDSIM_BITMAP_H_INCLUDED_

#include <stdint.h>
#include "Error.h"
#include "Param.h"
#include "Model.h"

#ifdef UNIX
#define DIRECTORY_SEPARATOR "/"
#else
#define DIRECTORY_SEPARATOR "\\"
#endif

#define STRICT
#ifdef _WIN32
#define _WIN32_WINNT 0x0400
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <vfw.h>
#include <gdiplus.h>
#endif
#ifdef IMAGE_MAGICK
#include "Magick++.h"
#endif


#define BWCOLS 58

typedef struct BITMAP_HEADER {
	unsigned int filesize;
	unsigned int spare;
	unsigned int boffset;
	unsigned int headersize;
	unsigned int width, height;
	unsigned int PlanesAndBitspp;
	unsigned int compr;
	unsigned int imagesize;
	unsigned int hres, vres;
	unsigned int colours, impcol;
	unsigned char palette[BWCOLS * 4][4];
} bitmap_header;

struct bitmap_state {

	bitmap_state(unsigned int width, unsigned int height): width(width), height(height), size(width*height)
	{
		population = (int32_t*)calloc(size, sizeof(int32_t));
		infected = (int32_t*)calloc(size, sizeof(int32_t));
		recovered = (int32_t*)calloc(size, sizeof(int32_t));
		treated = (int32_t*)calloc(size, sizeof(int32_t));
		if (!population || !infected || !recovered || !treated) {
			ERR_CRITICAL("Unable to allocate storage for bitmap\n");
		}
	}

	//disable copying - we could use boost::noncopyable if/when boost is included but for now we'll just wing it
	bitmap_state(bitmap_state const&) = delete;
	bitmap_state& operator=(bitmap_state const&) = delete;

	~bitmap_state() {
		free(population);
		free(infected);
		free(recovered);
		free(treated);
	}
	const unsigned int width, height, size;

	int32_t* population;
	int32_t* infected;
	int32_t* recovered;
	int32_t* treated;
};

void CaptureBitmap(unsigned char* bmPixels, bitmap_state const* state, param const& P, person const* Hosts, household const* Households, microcell const* Mcells, adminunit const * AdUnits);
void OutputBitmap(int tp, bitmap_header const* bmh, unsigned char const* bmf, param const& P);
void InitBMHead(bitmap_header*& bmh, unsigned char*& bmPixels, unsigned char*& bmp, unsigned char*& bmf, param const& P);

void Bitmap_Finalise(param const& P);

#endif // COVIDSIM_BITMAP_H_INCLUDED_

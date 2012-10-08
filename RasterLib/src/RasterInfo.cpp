/*
 * RasterInfo.cpp
 *
 *  Created on: 08/10/2012
 *      Author: andreas
 */

#include "RasterInfo.h"

RasterInfo::RasterInfo(const char* filename )
	: rasterDataset(new RasterDataset(filename)) {
}

int RasterInfo::RasterXSize()
{
	return rasterDataset->GetRasterXSize();
}

int RasterInfo::RasterYSize()
{
	return rasterDataset->GetRasterYSize();
}

RasterInfo::~RasterInfo() {
	// TODO Auto-generated destructor stub
}


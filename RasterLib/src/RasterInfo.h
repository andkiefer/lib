/*
 * RasterInfo.h
 *
 *  Created on: 08/10/2012
 *      Author: andreas
 */

#ifndef RASTERINFO_H_
#define RASTERINFO_H_

#include "RasterDataset.h"

class RasterInfo: public RasterDataset {
public:
	RasterInfo(const char* filename);
	int RasterXSize();
	int RasterYSize();
	virtual ~RasterInfo();

private:
	RasterDataset* rasterDataset;
};

#endif /* RASTERINFO_H_ */

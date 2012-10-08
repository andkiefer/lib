#ifndef RASTERDATASETP_H_
#define RASTERDATASETP_H_

#include "gdal_priv.h"
#include "ogr_srs_api.h"

struct RasterDatasetPrivate {
	GDALDatasetH hDataset;
	GDALRasterBandH hBand;
	GDALDriverH hDriver;
	OGRCoordinateTransformationH hTransform;
};

#endif

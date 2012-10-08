
#ifndef RASTERDATASET_H_
#define RASTERDATASET_H_

#include "RasterDataset_p.h"

#include "gdal_priv.h"
#include "ogr_srs_api.h"

class RasterDatasetPrivate;

class RasterDataset : public GDALDataset {

public:
	RasterDataset();
	RasterDataset(const char* filename);
	GDALDatasetH getDataset() const;
	GDALDatasetH getDataset(const char* filename) const;
	void setDataset(GDALDatasetH dataset);
	GDALRasterBandH getBand() const;
	GDALRasterBandH getBand(int iBand) const;
	void setBand(GDALRasterBandH band);
	GDALDriverH getDriver() const;
	void setDriver(GDALDriverH driver);
	OGRCoordinateTransformationH getTransform() const;
	void setTransform(OGRCoordinateTransformationH transform);
	virtual ~RasterDataset();

private:
	RasterDatasetPrivate* d_ptr;
};

#endif

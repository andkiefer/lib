
//#include "gdal_priv.h"
//#include "ogr_spatialref.h"
//#include "ogr_srs_api.h"

//#include "RasterDataset_p.h"
#include "RasterDataset.h"


RasterDataset::RasterDataset()
	: GDALDataset() {
	d_ptr = new RasterDatasetPrivate;
	GDALAllRegister();
}

RasterDataset::RasterDataset(const char* filename)
	: GDALDataset() {
	d_ptr = new RasterDatasetPrivate;
	GDALAllRegister();
	d_ptr->hDataset = GDALOpen(filename, GA_ReadOnly);
}

GDALDatasetH RasterDataset::getDataset() const {
		return d_ptr->hDataset;
}

GDALDatasetH RasterDataset::getDataset(const char *filename) const {
	d_ptr->hDataset = GDALOpen (filename, GA_ReadOnly);
	return d_ptr->hDataset;
}

void RasterDataset::setDataset(GDALDatasetH dataset) {
	d_ptr->hDataset = dataset;
}

GDALRasterBandH RasterDataset::getBand() const {

	return d_ptr->hBand;
}

GDALRasterBandH RasterDataset::getBand(int iBand) const {
	d_ptr->hBand = GDALGetRasterBand(d_ptr->hDataset, iBand + 1);
	return d_ptr->hBand;
}

void RasterDataset::setBand(GDALRasterBandH band) {
	d_ptr->hBand = band;
}

GDALDriverH RasterDataset::getDriver() const {
	d_ptr->hDriver = GDALGetDatasetDriver(d_ptr->hDataset);
	return d_ptr->hDriver;
}

void RasterDataset::setDriver(GDALDriverH driver) {
	d_ptr->hDriver = driver;
}

OGRCoordinateTransformationH RasterDataset::getTransform() const {
	return d_ptr->hTransform;
}

void RasterDataset::setTransform(
		OGRCoordinateTransformationH transform) {
	d_ptr->hTransform = transform;
}

RasterDataset::~RasterDataset() {
	GDALClose(d_ptr->hDataset);
	GDALDestroyDriverManager();
}

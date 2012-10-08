//============================================================================
// Name        : RasterLib.cpp
// Author      : Andreas Kiefer
// Version     :
// Copyright   : 
// Description : None
//============================================================================

#include "RasterInfo.h"
//#include "RasterDataset.h"

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	const char *filename = argv[1];

	RasterInfo *rasterInfo = new RasterInfo(filename);

	std::cout << "Raster size in pixels (" << rasterInfo->GetRasterXSize()
			<< "x" << rasterInfo->GetRasterYSize() << ")";

    /*GDALDataset  *poDataset;
    double        adfGeoTransform[6];

    GDALAllRegister();

    GDALRasterBand  *poBand;
    int             nBlockXSize, nBlockYSize;
    int             bGotMin, bGotMax;
    double          adfMinMax[2];

    float *pafScanline;
    int   nXSize = poBand->GetXSize();


    poDataset = (GDALDataset *) GDALOpen( pszFilename, GA_ReadOnly );
    if( poDataset == NULL )
    {
        std::cout << "File not found" << std::endl;
    }

    printf( "Driver: %s/%s\n",
            poDataset->GetDriver()->GetDescription(),
            poDataset->GetDriver()->GetMetadataItem( GDAL_DMD_LONGNAME ) );

    printf( "Size is %dx%dx%d\n",
                poDataset->GetRasterXSize(), poDataset->GetRasterYSize(),
                poDataset->GetRasterCount() );

    if( poDataset->GetProjectionRef()  != NULL )
    	printf( "Projection is `%s'\n", poDataset->GetProjectionRef() );

    if( poDataset->GetGeoTransform( adfGeoTransform ) == CE_None )
    {
    	printf( "Origin = (%.6f,%.6f)\n",
    			adfGeoTransform[0], adfGeoTransform[3] );

        printf( "Pixel Size = (%.6f,%.6f)\n",
        		adfGeoTransform[1], adfGeoTransform[5] );
    }

    poBand = poDataset->GetRasterBand( 1 );
    poBand->GetBlockSize( &nBlockXSize, &nBlockYSize );
    printf( "Block=%dx%d Type=%s, ColorInterp=%s\n",
            nBlockXSize, nBlockYSize,
            GDALGetDataTypeName(poBand->GetRasterDataType()),
            GDALGetColorInterpretationName(
                poBand->GetColorInterpretation()) );

    adfMinMax[0] = poBand->GetMinimum( &bGotMin );
    adfMinMax[1] = poBand->GetMaximum( &bGotMax );
    if( ! (bGotMin && bGotMax) )
        GDALComputeRasterMinMax((GDALRasterBandH)poBand, TRUE, adfMinMax);

    printf( "Min=%.3fd, Max=%.3f\n", adfMinMax[0], adfMinMax[1] );

    if( poBand->GetOverviewCount() > 0 )
        printf( "Band has %d overviews.\n", poBand->GetOverviewCount() );

    if( poBand->GetColorTable() != NULL )
        printf( "Band has a color table with %d entries.\n",
                 poBand->GetColorTable()->GetColorEntryCount() );

    pafScanline = (float *) CPLMalloc(sizeof(float)*nXSize);
    poBand->RasterIO( GF_Read, 0, 0, nXSize, 1,
                      pafScanline, nXSize, 1, GDT_Float32,
                      0, 0 );
*/
    return 0;
}

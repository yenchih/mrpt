/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          http://www.mrpt.org/                             |
   |                                                                           |
   | Copyright (c) 2005-2015, Individual contributors, see AUTHORS file        |
   | See: http://www.mrpt.org/Authors - All rights reserved.                   |
   | Released under BSD License. See details in http://www.mrpt.org/License    |
   +---------------------------------------------------------------------------+ */

#include "maps-precomp.h"

#define MRPT_NO_WARN_BIG_HDR
#include <mrpt/maps.h>
#include <mrpt/utils/CStartUpClassesRegister.h>

using namespace mrpt::utils;
using namespace mrpt::maps;
using namespace mrpt::obs;
using namespace mrpt::opengl;

void registerAllClasses_mrpt_maps();

CStartUpClassesRegister  mrpt_maps_class_reg(&registerAllClasses_mrpt_maps);

/*---------------------------------------------------------------
					registerAllClasses_mrpt_maps
  ---------------------------------------------------------------*/
void registerAllClasses_mrpt_maps()
{
	registerClass( CLASS_ID( CBeacon ) );
	registerClass( CLASS_ID( CBeaconMap ) );

	registerClass( CLASS_ID( CPointsMap ) );
	registerClass( CLASS_ID( CSimplePointsMap ) );
	registerClass( CLASS_ID( CColouredPointsMap ) );
	registerClass( CLASS_ID( CWeightedPointsMap ) );
	registerClass( CLASS_ID( COccupancyGridMap2D ) );
	registerClass( CLASS_ID( CGasConcentrationGridMap2D ) );
	registerClass( CLASS_ID( CWirelessPowerGridMap2D ) );
	registerClass( CLASS_ID( CHeightGridMap2D ) );
	registerClass( CLASS_ID( CReflectivityGridMap2D ) );

	registerClass( CLASS_ID( COctoMap ) );
	registerClass( CLASS_ID( CColouredOctoMap ) );


	registerClass( CLASS_ID( CAngularObservationMesh ) );
	registerClass( CLASS_ID( CPlanarLaserScan ) ) ;
}


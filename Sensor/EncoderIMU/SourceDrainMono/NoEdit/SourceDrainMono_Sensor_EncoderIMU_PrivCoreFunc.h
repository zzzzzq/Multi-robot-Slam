//You need not to modify this file.

/*! \defgroup SourceDrainMono_Sensor_EncoderIMU SourceDrainMono_Sensor_EncoderIMU
	\ingroup SourceDrainMono_Library Sensor_EncoderIMU_NodeClass
	\brief SourceDrainMono_Sensor_EncoderIMU defines the Sensor_EncoderIMU in SourceDrainMono.
*/

#ifndef SOURCEDRAINMONO_SENSOR_ENCODERIMU_PRIVCOREFUNC_H
#define SOURCEDRAINMONO_SENSOR_ENCODERIMU_PRIVCOREFUNC_H

#include<RobotSDK_Global.h>

/*! \defgroup SourceDrainMono_Sensor_EncoderIMU_PrivCoreFunc SourceDrainMono_Sensor_EncoderIMU_PrivCoreFunc
	\ingroup SourceDrainMono_Sensor_EncoderIMU
	\brief SourceDrainMono_Sensor_EncoderIMU_PrivCoreFunc defines the PrivCoreFunc in SourceDrainMono_Sensor_EncoderIMU.
*/

/*! \addtogroup SourceDrainMono_Sensor_EncoderIMU_PrivCoreFunc
	@{
*/

/*! \file SourceDrainMono_Sensor_EncoderIMU_PrivCoreFunc.h
	 Defines the PrivCoreFunc of SourceDrainMono_Sensor_EncoderIMU
*/

//*******************Please add other headers below*******************


#include "../Edit/SourceDrainMono_Sensor_EncoderIMU_Vars.h"

/*! \def NODECONFIG
	\brief Forcefully defines the NodeType_NodeClass.
*/
#ifdef NODECONFIG
#undef NODECONFIG
#endif
#define NODECONFIG SourceDrainMono_Sensor_EncoderIMU

/*! void SourceDrainMono_Sensor_EncoderIMU_getPortsSize(QList<int> & inputPortsSize, int & outputPortsNumber)
	\brief [required] Function pointer type for interface function of getting node's port(s)' size.
	\param [out] inputPortsSize The size of each input port's data buffer.
	\param [out] outputPortsNumber The number of output ports.
*/
extern "C" ROBOTSDK_OUTPUT void DECOFUNC(getPortsSize)(QList<int> & inputPortsSize, int & outputPortsNumber);

/*! void SourceDrainMono_Sensor_EncoderIMU_initializeParams(boost::shared_ptr<void> & paramsPtr)
	\brief [required] Function pointer type for interface function of initializing node's parameters.
	\param [out] paramsPtr The parameters embelished by boost::shared_pointer<void>.
	\details To initialize parameters:
	- paramsPtr=boost::shared_ptr<void> (new ParametersType);
*/
extern "C" ROBOTSDK_OUTPUT void DECOFUNC(initializeParams)(boost::shared_ptr<void> & paramsPtr);

/*! void SourceDrainMono_Sensor_EncoderIMU_initializeVars(boost::shared_ptr<void> & varsPtr)
	\brief [required] Function pointer type for interface function of initializing node's variables.
	\param [out] varsPtr The variables embelished by boost::shared_pointer<void>.
	\details To initialize variables:
	- varsPtr=boost::shared_ptr<void> (new VariablesType);
*/
extern "C" ROBOTSDK_OUTPUT void DECOFUNC(initializeVars)(boost::shared_ptr<void> & varsPtr);

/*! @}*/ 

#endif
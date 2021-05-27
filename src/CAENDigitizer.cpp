#include "CAENDigitizer.hpp"
#include "CAENDigitizerException.hpp"

#include "CAENDigitizer.h"

namespace CAEN
{
  
  void Digitizer::OpenDigitizer(const ConnectionType& LinkType,const int& LinkNum,const int ConetNode,const std::uint32_t& VMEBaseAddress)
  {
    Exception(CAEN_DGTZ_OpenDigitizer(static_cast<CAEN_DGTZ_ConnectionType>(LinkType),LinkNum,ConetNode,VMEBaseAddress,&m_Handle));
  }
  
  void Digitizer::CloseDigitizer()
  {
    Exception(CAEN_DGTZ_CloseDigitizer(m_Handle));
  }
  
  void Digitizer::WriteRegister(const std::uint32_t& Address, const std::uint32_t& Data)
  {
    Exception(CAEN_DGTZ_WriteRegister(m_Handle,Address,Data));
  }
  
//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_ReadRegister(int handle, uint32_t Address, uint32_t *Data);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetInfo(int handle, CAEN_DGTZ_BoardInfo_t *BoardInfo); 

  void Digitizer::Reset()
  {
    Exception(CAEN_DGTZ_Reset(m_Handle));
  }

  void Digitizer::ClearData()
  {
    Exception(CAEN_DGTZ_ClearData(m_Handle));
  }

  void Digitizer::SendSWtrigger()
  {
    Exception(CAEN_DGTZ_SendSWtrigger(m_Handle));
  }

  void Digitizer::SWStartAcquisition()
  {
    Exception(CAEN_DGTZ_SWStartAcquisition(m_Handle));
  }

  void Digitizer::SWStopAcquisition()
  {
    Exception(CAEN_DGTZ_SWStopAcquisition(m_Handle));
  }

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetInterruptConfig(int handle, CAEN_DGTZ_EnaDis_t state, uint8_t level, uint32_t status_id, uint16_t event_number, CAEN_DGTZ_IRQMode_t mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetInterruptConfig(int handle, CAEN_DGTZ_EnaDis_t *state, uint8_t *level, uint32_t *status_id, uint16_t *event_number, CAEN_DGTZ_IRQMode_t *mode);

  void Digitizer::IRQWait(const std::uint32_t& timeout)
  {
    Exception(CAEN_DGTZ_IRQWait(m_Handle,timeout));
  }

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_VMEIRQWait(CAEN_DGTZ_ConnectionType LinkType, int LinkNum, int ConetNode, uint8_t IRQMask, uint32_t timeout, int *VMEHandle);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_VMEIRQCheck(int VMEHandle, uint8_t *Mask);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_VMEIACKCycle(int VMEHandle, uint8_t level, int32_t *board_id);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetDESMode(int handle, CAEN_DGTZ_EnaDis_t enable);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetDESMode(int handle, CAEN_DGTZ_EnaDis_t *enable);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetRecordLength(int handle, uint32_t size, ...);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetRecordLength(int handle, uint32_t *size, ...);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetChannelEnableMask(int handle, uint32_t mask);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetChannelEnableMask(int handle, uint32_t *mask);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetGroupEnableMask(int handle, uint32_t mask);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetGroupEnableMask(int handle, uint32_t *mask);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetSWTriggerMode(int handle, CAEN_DGTZ_TriggerMode_t mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetExtTriggerInputMode(int handle, CAEN_DGTZ_TriggerMode_t mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetExtTriggerInputMode(int handle, CAEN_DGTZ_TriggerMode_t *mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetSWTriggerMode(int handle, CAEN_DGTZ_TriggerMode_t *mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetChannelSelfTrigger(int handle, CAEN_DGTZ_TriggerMode_t mode, uint32_t channelmask);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetChannelSelfTrigger(int handle, uint32_t channel, CAEN_DGTZ_TriggerMode_t *mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetGroupSelfTrigger(int handle, CAEN_DGTZ_TriggerMode_t mode, uint32_t groupmask);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetGroupSelfTrigger(int handle, uint32_t group, CAEN_DGTZ_TriggerMode_t *mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetChannelGroupMask(int handle, uint32_t group, uint32_t channelmask);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetChannelGroupMask(int handle, uint32_t group, uint32_t *channelmask);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetPostTriggerSize(int handle, uint32_t percent);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetPostTriggerSize(int handle, uint32_t *percent);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetDPPPreTriggerSize(int handle, int ch, uint32_t samples);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetDPPPreTriggerSize(int handle, int ch, uint32_t *samples);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetChannelDCOffset(int handle, uint32_t channel, uint32_t Tvalue);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetChannelDCOffset(int handle, uint32_t channel, uint32_t *Tvalue);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetGroupDCOffset(int handle, uint32_t group, uint32_t Tvalue);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetGroupDCOffset(int handle, uint32_t group, uint32_t *Tvalue);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetChannelTriggerThreshold(int handle, uint32_t channel, uint32_t Tvalue);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetChannelTriggerThreshold(int handle, uint32_t channel, uint32_t *Tvalue);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetChannelPulsePolarity(int handle, uint32_t channel, CAEN_DGTZ_PulsePolarity_t pol);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetChannelPulsePolarity(int handle, uint32_t channel, CAEN_DGTZ_PulsePolarity_t* pol);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetGroupTriggerThreshold(int handle, uint32_t group, uint32_t Tvalue);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetGroupTriggerThreshold(int handle, uint32_t group, uint32_t *Tvalue);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetZeroSuppressionMode(int handle, CAEN_DGTZ_ZS_Mode_t mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetZeroSuppressionMode(int handle, CAEN_DGTZ_ZS_Mode_t *mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetChannelZSParams(int handle, uint32_t channel, CAEN_DGTZ_ThresholdWeight_t weight, int32_t  threshold, int32_t nsamp);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetChannelZSParams(int handle, uint32_t channel, CAEN_DGTZ_ThresholdWeight_t *weight, int32_t  *threshold, int32_t *nsamp);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetAcquisitionMode(int handle, CAEN_DGTZ_AcqMode_t mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetAcquisitionMode(int handle, CAEN_DGTZ_AcqMode_t *mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetRunSynchronizationMode(int handle, CAEN_DGTZ_RunSyncMode_t mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetRunSynchronizationMode(int handle, CAEN_DGTZ_RunSyncMode_t* mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetAnalogMonOutput(int handle, CAEN_DGTZ_AnalogMonitorOutputMode_t mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetAnalogMonOutput(int handle, CAEN_DGTZ_AnalogMonitorOutputMode_t *mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetAnalogInspectionMonParams(int handle, uint32_t channelmask, uint32_t offset, CAEN_DGTZ_AnalogMonitorMagnify_t mf, CAEN_DGTZ_AnalogMonitorInspectorInverter_t ami);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetAnalogInspectionMonParams(int handle, uint32_t *channelmask, uint32_t *offset, CAEN_DGTZ_AnalogMonitorMagnify_t *mf, CAEN_DGTZ_AnalogMonitorInspectorInverter_t *ami);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_DisableEventAlignedReadout(int handle);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetEventPackaging(int handle,CAEN_DGTZ_EnaDis_t mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetEventPackaging(int handle,CAEN_DGTZ_EnaDis_t *mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetMaxNumAggregatesBLT(int handle, uint32_t numAggr);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetMaxNumEventsBLT(int handle, uint32_t numEvents);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetMaxNumAggregatesBLT(int handle, uint32_t *numAggr);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetMaxNumEventsBLT(int handle, uint32_t *numEvents);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_MallocReadoutBuffer(int handle, char **buffer, uint32_t *size);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_ReadData(int handle, CAEN_DGTZ_ReadMode_t mode, char *buffer, uint32_t *bufferSize);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_FreeReadoutBuffer(char **buffer);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetNumEvents(int handle, char *buffer, uint32_t buffsize, uint32_t *numEvents);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetEventInfo(int handle, char *buffer, uint32_t buffsize, int32_t numEvent, CAEN_DGTZ_EventInfo_t *eventInfo, char **EventPtr);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_DecodeEvent(int handle, char *evtPtr, void **Evt);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_FreeEvent(int handle, void **Evt);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetDPPEvents(int handle, char *buffer, uint32_t buffsize, void **events, uint32_t *numEventsArray);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_MallocDPPEvents(int handle, void **events, uint32_t *allocatedSize);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_FreeDPPEvents(int handle, void **events);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_MallocDPPWaveforms(int handle, void **waveforms, uint32_t *allocatedSize);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_FreeDPPWaveforms(int handle, void *Waveforms);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_DecodeDPPWaveforms(int handle, void *event, void *waveforms);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetNumEventsPerAggregate(int handle, uint32_t numEvents, ...);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetNumEventsPerAggregate(int handle, uint32_t *numEvents, ...);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetDPPEventAggregation(int handle, int threshold, int maxsize);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetDPPParameters(int handle, uint32_t channelMask, void* params);

///CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetDPPAcquisitionMode(int handle,CAEN_DGTZ_DPP_AcqMode_t mode, CAEN_DGTZ_DPP_SaveParam_t param);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetDPPAcquisitionMode(int handle,CAEN_DGTZ_DPP_AcqMode_t *mode, CAEN_DGTZ_DPP_SaveParam_t *param);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetDPPTriggerMode(int handle, CAEN_DGTZ_DPP_TriggerMode_t mode);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetDPPTriggerMode(int handle, CAEN_DGTZ_DPP_TriggerMode_t *mode);

//DPP_DEPRECATED(CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetDPP_PHA_VirtualProbe(int handle,CAEN_DGTZ_DPP_VirtualProbe_t mode, CAEN_DGTZ_DPP_PHA_VirtualProbe1_t vp1, CAEN_DGTZ_DPP_PHA_VirtualProbe2_t vp2, CAEN_DGTZ_DPP_PHA_DigitalProbe_t dp));

//DPP_DEPRECATED(CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetDPP_PHA_VirtualProbe(int handle,CAEN_DGTZ_DPP_VirtualProbe_t *mode, CAEN_DGTZ_DPP_PHA_VirtualProbe1_t *vp1, CAEN_DGTZ_DPP_PHA_VirtualProbe2_t *vp2, CAEN_DGTZ_DPP_PHA_DigitalProbe_t *dp));

//DPP_DEPRECATED(CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetDPP_PSD_VirtualProbe(int handle, CAEN_DGTZ_DPP_VirtualProbe_t mode, CAEN_DGTZ_DPP_PSD_VirtualProbe_t vp, CAEN_DGTZ_DPP_PSD_DigitalProbe1_t dp1, CAEN_DGTZ_DPP_PSD_DigitalProbe2_t dp2));

//DPP_DEPRECATED(CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetDPP_PSD_VirtualProbe(int handle, CAEN_DGTZ_DPP_VirtualProbe_t *mode, CAEN_DGTZ_DPP_PSD_VirtualProbe_t *vp, CAEN_DGTZ_DPP_PSD_DigitalProbe1_t *dp1, CAEN_DGTZ_DPP_PSD_DigitalProbe2_t *dp2));

//DPP_DEPRECATED(CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetDPP_CI_VirtualProbe(int handle, CAEN_DGTZ_DPP_VirtualProbe_t mode, CAEN_DGTZ_DPP_CI_VirtualProbe_t vp, CAEN_DGTZ_DPP_CI_DigitalProbe1_t dp1, CAEN_DGTZ_DPP_CI_DigitalProbe2_t dp2));

//DPP_DEPRECATED(CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetDPP_CI_VirtualProbe(int handle, CAEN_DGTZ_DPP_VirtualProbe_t *mode, CAEN_DGTZ_DPP_CI_VirtualProbe_t *vp, CAEN_DGTZ_DPP_CI_DigitalProbe1_t *dp1, CAEN_DGTZ_DPP_CI_DigitalProbe2_t *dp2));

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetDPP_VirtualProbe(int handle, int trace, int probe);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetDPP_VirtualProbe(int handle, int trace, int *probe);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetDPP_SupportedVirtualProbes(int handle, int trace, int probes[], int *numProbes);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetDPP_VirtualProbeName(int probe, char name[]);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_AllocateEvent(int handle, void **Evt);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetIOLevel(int handle, CAEN_DGTZ_IOLevel_t level);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetIOLevel(int handle, CAEN_DGTZ_IOLevel_t *level);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetTriggerPolarity(int handle, uint32_t channel, CAEN_DGTZ_TriggerPolarity_t Polarity);

//CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetTriggerPolarity(int handle, uint32_t channel, CAEN_DGTZ_TriggerPolarity_t *Polarity);

  void Digitizer::RearmInterrupt()
  {
    Exception(CAEN_DGTZ_RearmInterrupt(m_Handle));
  }
  
/*CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetDRS4SamplingFrequency(int handle, CAEN_DGTZ_DRS4Frequency_t frequency) ;
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetDRS4SamplingFrequency(int handle, CAEN_DGTZ_DRS4Frequency_t *frequency) ;
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetOutputSignalMode(int handle, CAEN_DGTZ_OutputSignalMode_t mode);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetOutputSignalMode(int handle, CAEN_DGTZ_OutputSignalMode_t *mode);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetGroupFastTriggerThreshold(int handle, uint32_t group, uint32_t Tvalue);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetGroupFastTriggerThreshold(int handle, uint32_t group, uint32_t *Tvalue);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetGroupFastTriggerDCOffset(int handle, uint32_t group, uint32_t DCvalue);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetGroupFastTriggerDCOffset(int handle, uint32_t group, uint32_t *DCvalue);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetFastTriggerDigitizing(int handle, CAEN_DGTZ_EnaDis_t enable);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetFastTriggerDigitizing(int handle, CAEN_DGTZ_EnaDis_t *enable);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetFastTriggerMode(int handle, CAEN_DGTZ_TriggerMode_t mode);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetFastTriggerMode(int handle, CAEN_DGTZ_TriggerMode_t *mode);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_LoadDRS4CorrectionData(int handle, CAEN_DGTZ_DRS4Frequency_t frequency);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetCorrectionTables(int handle, int frequency, void *CTable);
*/

  void Digitizer::EnableDRS4Correction()
  {
    Exception(CAEN_DGTZ_EnableDRS4Correction(m_Handle));
  }

  void Digitizer::DisableDRS4Correction()
  {
    Exception(CAEN_DGTZ_DisableDRS4Correction(m_Handle));
  }

/*
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_DecodeZLEWaveforms(int handle, void *event, void *waveforms);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_FreeZLEWaveforms(int handle, void *waveforms);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_MallocZLEWaveforms(int handle, void **waveforms, uint32_t *allocatedSize);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_FreeZLEEvents(int handle, void **events);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_MallocZLEEvents(int handle, void **events, uint32_t *allocatedSize);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetZLEEvents(int handle, char *buffer, uint32_t buffsize, void **events, uint32_t* numEventsArray);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetZLEParameters(int handle, uint32_t channelMask, void* params);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetSAMCorrectionLevel(int handle, CAEN_DGTZ_SAM_CORRECTION_LEVEL_t *level);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetSAMCorrectionLevel(int handle, CAEN_DGTZ_SAM_CORRECTION_LEVEL_t level);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_EnableSAMPulseGen(int handle, int channel, unsigned short  pulsePattern, CAEN_DGTZ_SAMPulseSourceType_t pulseSource);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_DisableSAMPulseGen(int handle, int channel);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetSAMPostTriggerSize(int handle, int SamIndex, uint8_t value);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetSAMPostTriggerSize(int handle, int SamIndex, uint32_t *value);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetSAMSamplingFrequency(int handle, CAEN_DGTZ_SAMFrequency_t frequency);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetSAMSamplingFrequency(int handle, CAEN_DGTZ_SAMFrequency_t *frequency);
CAEN_DGTZ_ErrorCode CAENDGTZ_API _CAEN_DGTZ_Read_EEPROM(int handle, int EEPROMIndex, unsigned short add, int nbOfBytes, unsigned char* buf);
CAEN_DGTZ_ErrorCode CAENDGTZ_API _CAEN_DGTZ_Write_EEPROM(int handle, int EEPROMIndex, unsigned short add, int nbOfBytes, void* buf);
*/

  void Digitizer::LoadSAMCorrectionData()
  {
    Exception(CAEN_DGTZ_LoadSAMCorrectionData(m_Handle));
  }

/*
CAEN_DGTZ_ErrorCode CAENDGTZ_API _CAEN_DGTZ_TriggerThreshold(int handle, CAEN_DGTZ_EnaDis_t endis);
*/

  void Digitizer::SendSAMPulse()
  {
    Exception(CAEN_DGTZ_SendSAMPulse(m_Handle));
  }

/*
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetSAMAcquisitionMode(int handle, CAEN_DGTZ_AcquisitionMode_t mode);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetSAMAcquisitionMode(int handle, CAEN_DGTZ_AcquisitionMode_t *mode);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetTriggerLogic(int handle, CAEN_DGTZ_TrigerLogic_t logic,  uint32_t majorityLevel);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetTriggerLogic(int handle, CAEN_DGTZ_TrigerLogic_t *logic, uint32_t *majorityLevel);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetChannelPairTriggerLogic(int handle,  uint32_t channelA, uint32_t channelB, CAEN_DGTZ_TrigerLogic_t *logic, uint16_t *coincidenceWindow);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetChannelPairTriggerLogic(int handle,  uint32_t channelA, uint32_t channelB, CAEN_DGTZ_TrigerLogic_t logic, uint16_t coincidenceWindow);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetDecimationFactor(int handle, uint16_t factor);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetDecimationFactor(int handle, uint16_t *factor);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetSAMTriggerCountVetoParam(int handle, int channel, CAEN_DGTZ_EnaDis_t enable, uint32_t vetoWindow);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_GetSAMTriggerCountVetoParam(int handle, int channel, CAEN_DGTZ_EnaDis_t *enable, uint32_t *vetoWindow);
CAEN_DGTZ_ErrorCode CAENDGTZ_API CAEN_DGTZ_SetTriggerInAsGate(int handle, CAEN_DGTZ_EnaDis_t en);
*/

  void Digitizer::Calibrate()
  {
    Exception(CAEN_DGTZ_Calibrate(m_Handle));
  }

  std::uint32_t Digitizer::ReadTemperature(const std::int32_t& ch)
  {
    std::uint32_t temperature{0};
    Exception(CAEN_DGTZ_ReadTemperature(m_Handle,ch,&temperature));
    return temperature;
  }

  DPPFirmware Digitizer::GetDPPFirmwareType()
  {
    CAEN_DGTZ_DPPFirmware_t ret;
    Exception(CAEN_DGTZ_GetDPPFirmwareType(m_Handle,&ret));
    return static_cast<DPPFirmware>(ret);
  }
  
  int Digitizer::getHandle()
  {
    return m_Handle;
  }

};

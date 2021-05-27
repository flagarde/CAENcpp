#include "CAENDigitizerException.hpp"

#include "CAENDigitizerType.h"

namespace CAEN
{
  
const char* Exception::what() const noexcept
{
  return m_What.c_str();
}

const char* Exception::description() const noexcept
{
  return m_Description.c_str();
}

std::int_least8_t Exception::code() const noexcept
{
  return m_Code;
}

Exception::Exception(const int_least8_t& code,const source_location& location) : source_location(location),  m_Code(code)
{
  constructMessage();
  if(code != CAEN_DGTZ_Success) throw *this;
}

void Exception::constructMessage()
{
  switch(m_Code)
  {
    case CAEN_DGTZ_Success:
      m_Description = "Operation completed successfully";
      break;
    case CAEN_DGTZ_CommError:
      m_Description =  "Communication error";
      break;
    case CAEN_DGTZ_GenericError:
      m_Description =  "Unspecified error";
      break;
    case CAEN_DGTZ_InvalidParam:
      m_Description =  "Invalid parameter";
      break;
    case CAEN_DGTZ_InvalidLinkType:
      m_Description =  "Invalid Link Type";
      break;
    case CAEN_DGTZ_InvalidHandle:
      m_Description =  "Invalid device handle";
      break;
    case CAEN_DGTZ_MaxDevicesError:
      m_Description =  "Maximum number of devices exceeded";
      break;
    case CAEN_DGTZ_BadBoardType:
      m_Description =  "The operation is not allowed on this type of board";
      break;
    case CAEN_DGTZ_BadInterruptLev:
      m_Description =  "The interrupt level is not allowed";
      break;
    case CAEN_DGTZ_BadEventNumber:
      m_Description =  "The event number is bad";
      break;
    case CAEN_DGTZ_ReadDeviceRegisterFail:
      m_Description =  "Unable to read the registry";
      break;
    case CAEN_DGTZ_WriteDeviceRegisterFail:
      m_Description =  "Unable to write into the registry";
      break;
    case CAEN_DGTZ_InvalidChannelNumber:
      m_Description =  "The channel number is invalid";
      break;
    case CAEN_DGTZ_ChannelBusy:
      m_Description =  "The Channel is busy";
      break;
    case CAEN_DGTZ_FPIOModeInvalid:
      m_Description =  "Invalid FPIO Mode";
      break;
    case CAEN_DGTZ_WrongAcqMode:
      m_Description =  "Wrong acquisition mode";
      break;
    case CAEN_DGTZ_FunctionNotAllowed:
      m_Description =  "This function is not allowed for this module";
      break;
    case CAEN_DGTZ_Timeout:
      m_Description =  "Communication Timeout";
      break;
    case CAEN_DGTZ_InvalidBuffer:
      m_Description =  "The buffer is invalid";
      break;
    case CAEN_DGTZ_EventNotFound:
      m_Description =  "The event is not found";
      break;
    case CAEN_DGTZ_InvalidEvent:
      m_Description =  "The vent is invalid";
      break;
    case CAEN_DGTZ_OutOfMemory:
      m_Description =  "Out of memory";
      break;
    case CAEN_DGTZ_CalibrationError:
      m_Description =  "Unable to calibrate the board";
      break;
    case CAEN_DGTZ_DigitizerNotFound:
      m_Description =  "Unable to open the digitizer";
      break;
    case CAEN_DGTZ_DigitizerAlreadyOpen:
      m_Description =  "The Digitizer is already open";
      break;
    case CAEN_DGTZ_DigitizerNotReady:
      m_Description =  "The Digitizer is not ready to operate";
      break;
    case CAEN_DGTZ_InterruptNotConfigured:
      m_Description =  "The Digitizer has not the IRQ configured";\
      break;
    case CAEN_DGTZ_DigitizerMemoryCorrupted:
      m_Description =  "The digitizer flash memory is corrupted";
      break;
    case CAEN_DGTZ_DPPFirmwareNotSupported:
      m_Description =  "The digitizer dpp firmware is not supported in this lib version";
      break;
    case CAEN_DGTZ_InvalidLicense:
      m_Description =  "Invalid Firmware License";
      break;
    case CAEN_DGTZ_InvalidDigitizerStatus:
      m_Description =  "The digitizer is found in a corrupted status";
      break;
    case CAEN_DGTZ_UnsupportedTrace:
      m_Description =  "The given trace is not supported by the digitizer";
      break;
    case CAEN_DGTZ_InvalidProbe:
      m_Description =  "The given probe is not supported for the given digitizer's trace";
      break;
    case CAEN_DGTZ_UnsupportedBaseAddress:
      m_Description =  "The Base Address is not supported, it's a Desktop device ?";
      break;
    case CAEN_DGTZ_NotYetImplemented:
      m_Description =  "The function is not yet implemented";
      break;
    default:
      m_Description =  "Error code unknown";
      break;
  }
  m_What = "\n\t[Code] : "+std::to_string(m_Code)+"\n\t[Description] : "+m_Description+"\n\t[File] : "+file_name()+"\n\t[Function] : "+function_name()+"\n\t[Line] : "+std::to_string(line())+"\n\t[Column] : "+std::to_string(column())+"\n";
}

};

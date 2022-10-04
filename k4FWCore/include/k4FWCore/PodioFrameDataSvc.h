#ifndef k4FWCore_PodioFrameDataSvc_h
#define k4FWCore_PodioFrameDataSvc_h

#include "GaudiKernel/DataSvc.h"
#include "GaudiKernel/IConversionSvc.h"
#include "podio/ROOTFrameData.h"

class PodioFrameDataSvc : public DataSvc {
public:
  explicit PodioFrameDataSvc(const std::string&, ISvcLocator*);

  using DataSvc::registerObject;  // use DataSvc functionality except where we override
  virtual StatusCode registerObject(std::string_view, std::string_view, DataObject*) override final;

private:
};

#endif

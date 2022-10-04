#include "k4FWCore/PodioFrameDataSvc.h"

PodioFrameDataSvc::PodioFrameDataSvc(const std::string& name, ISvcLocator* svc) : DataSvc(name, svc) {}

StatusCode PodioFrameDataSvc::registerObject(std::string_view parentPath,
                                             std::string_view fullPath,
                                             DataObject* pObject) {
  return DataSvc::registerObject(parentPath, fullPath, pObject);
}

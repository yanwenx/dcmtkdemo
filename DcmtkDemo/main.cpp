#include <iostream>
#include <dcmtk/config/osconfig.h>
#include <dcmtk/dcmdata/dctk.h>

int main()
{
  DcmFileFormat* myFileFormat = new DcmFileFormat();
  OFCondition cond = myFileFormat->loadFile("111.DCM");
  if (cond.good()) {
    OFString patientName;
    if (myFileFormat->getDataset()->findAndGetOFString(DCM_PatientName, patientName).good()) {
      std::cout << "Patient Name: " << patientName << std::endl;
    }
    else {
      std::cout << "No Patient Name Data" << std::endl;
    }
  }
  else {
    std::cout << "Error occurs when opening file" << std::endl;
  }

  return 0;
}
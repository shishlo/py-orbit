//////////////////////////////// -*- C++ -*- //////////////////////////////
//
// FILE NAME
//   MyAttr.cc
//
// AUTHOR
//    T. Gorlov
//
// CREATED
//    07/19/2005
//
// DESCRIPTION
//    A subclass of a ParticleAttributes class
//    to keep macrosize parameter for each particle.
//
//
///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////
//
// INCLUDE FILES
//
///////////////////////////////////////////////////////////////////////////
#include "Bunch.hh"

#include "WaveFunctionAmplitudes.hh"
///////////////////////////////////////////////////////////////////////////
//   Constructor and Desctructor
///////////////////////////////////////////////////////////////////////////

WaveFunctionAmplitudes::WaveFunctionAmplitudes(Bunch* bunch):
  ParticleAttributes(bunch)
{
  cl_name_ = "Amplitudes";
  attrDescr = "Ampls";

}

WaveFunctionAmplitudes::WaveFunctionAmplitudes(Bunch* bunch, int size_in):
  ParticleAttributes(bunch)
{
  cl_name_ = "Amplitudes";
  attrDescr = "Ampls";
	size = size_in;
}

WaveFunctionAmplitudes::~WaveFunctionAmplitudes()
{
}


//zero element is phase and the last one is the time of i-th particle in the particle frame
int WaveFunctionAmplitudes::getAttSize(){
  return size;
}

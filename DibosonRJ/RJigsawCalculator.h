#ifndef RJIGSAW_CALCULATOR_H
#define RJIGSAW_CALCULATOR_H
//author : Russell Smith
//date   : December 2015

#include "EventLoop/StatusCode.h"
#include "xAODBase/IParticleContainer.h"

#include <unordered_map>

class RJigsawCalculator {

private :

public :

  virtual EL::StatusCode initialize() = 0;

  //to be used per event
  virtual   EL::StatusCode clearEvent() = 0 ;
  virtual   EL::StatusCode calculate(std::unordered_map<std::string, double>& RJVars,
			   xAOD::IParticleContainer particles
			   ) = 0;

};

#endif //RJIGSAW_CALCULATOR_H
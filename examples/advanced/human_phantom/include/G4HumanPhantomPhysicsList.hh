//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
//
// $Id: G4HumanPhantomPhysicsList.hh,v 1.5.6.1 2010/09/10 14:23:49 gcosmo Exp $
// GEANT4 tag $Name: geant4-09-03-patch-02 $
//
// Authors: S. Guatelli, G. Guerrieri and M. G. Pia 
//
//    **********************************
//    *                                *
//    *      G4HumanPhantomPhysicsList.hh      *
//    *                                *
//    **********************************

#ifndef G4HumanPhantomPhysicsList_h
#define G4HumanPhantomPhysicsList_h 1

#include "G4VUserPhysicsList.hh"
#include "globals.hh"

class G4HumanPhantomPhysicsList: public G4VUserPhysicsList
{
public:
  G4HumanPhantomPhysicsList();
  ~G4HumanPhantomPhysicsList();

protected:
  // Construct particle and physics
  void ConstructParticle();
  void ConstructProcess();
  void ConstructBosons();
  void ConstructLeptons();

  void SetCuts();

private:

  // These methods construct physics processes and register them
  void ConstructEM();
};

#endif




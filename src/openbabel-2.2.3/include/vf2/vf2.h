#include <openbabel/mol.h>

namespace OpenBabel
{

class OBAPI VF2
{
  public:                       // �ffentlich
    VF2();               // der Default-Konstruktor
    //VF2(VF2& a);  // Copy-Konstruktor
    //~VF2();              // der Destruktor
 
  bool Match(OBMol &mol,OBMol &mol_sarg);
  
  bool ExactMatch(OBMol &mol,OBMol &mol_sarg);
 
  //private:                      // privat
    //int m_eineVariable;
};
}


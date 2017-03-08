#include "table.h"

#if defined(GENERIC)
ostream & Table::Print(ostream &os) const
{
  // WRITE THIS
  os << "Table()";
  return os;
}
#endif

#if defined(LINKSTATE)
void Table::updateTopo(unsigned path, map<unsigned, Cost> topoFromPath)

void Table::updatCost(unsigned path, double cost);

void Table::LinkStateAlg(){
  
void Table::showTable();
#endif

#if defined(DISTANCEVECTOR)


#endif

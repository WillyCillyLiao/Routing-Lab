#ifndef _table
#define _table


#include <iostream>

using namespace std;

#if defined(GENERIC)
class Table {
  // Students should write this class

 public:
  ostream & Print(ostream &os) const;
};
#endif

struct Cost{
  unsigned preNode;
  double cost;
};

#if defined(LINKSTATE)
class Table {
  // Students should write this class
  
  // variables
  unsigned src; // store the Start Node # (Each node has a Table object)
  vector<unsigned> Nprime; // store the N'
  map<unsigned, Cost> topo;  // unsigned: Destination Node #
                             // type Cost: Predecessor Node #, Total Cost
    
  // Constructor
  Table();
  Table(const Table&);
  
  // Function
  void updateTopo(unsigned path, map<unsigned, Cost> topoFromPath);
  void updatCost(unsigned path, double cost);
  void LinkStateAlg();
  
  
 public:
  ostream & Print(ostream &os) const;
};
#endif

#if defined(DISTANCEVECTOR)

#include <deque>

class Table {
 public:
  ostream & Print(ostream &os) const;
};
#endif

inline ostream & operator<<(ostream &os, const Table &t) { return t.Print(os);}

#endif

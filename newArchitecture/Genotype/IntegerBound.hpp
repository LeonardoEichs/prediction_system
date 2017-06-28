/**
    Trabalho Sistemas Operacionais II
    @author Leonardo Vailatti Eichstaedt
    @version 1.1 25/07/17
*/

#ifndef INTEGERBOUND_H
#define INTEGERBOUND_H

#include "Bound.hpp"
#include <vector>

class IntegerBound : public Bound<int> {
  protected:
      int* lower;
      int* upper;
  public:
      IntegerBound(int* lower, int* upper);
      IntegerBound(vector<int> lower, vector<int> upper);
      int getLowerBound(int index);
      int getUpperBound(int index);
};

#endif

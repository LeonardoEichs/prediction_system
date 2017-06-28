/**
    Trabalho Sistemas Operacionais II
    @author Leonardo Vailatti Eichstaedt
    @version 1.1 25/07/17
*/

#ifndef ITERATIVEOPTIMIZER_H
#define ITERATIVEOPTIMIZER_H

template<typename G, typename T, typename P>
class IterativeOptimizer {
  public:
    /*
    * Initialize the optimization process. Especially, it creates the initial
    * population.
    */
    virtual void initialize() = 0;
    /*
    * Performs the next iteratioin in the optmization process.
    */
    virtual void next() = 0;
};

#endif

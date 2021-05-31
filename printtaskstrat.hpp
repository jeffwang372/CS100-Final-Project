#ifndef __PRINTTASKSTRAT_HPP__
#define __PRINTTASKSTRAT_HPP__

#include "printstrat.hpp"

class PrintTaskStrat: public PrintStrat
{
public:
        PrintTaskStrat();
        void printPriority(ListsComposite* t);
	void printDuration(ListsComposite* t);
}; //Print all tasks in list

#endif

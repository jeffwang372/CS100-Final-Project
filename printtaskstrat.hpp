#ifndef __PRINTTASKSTRAT_HPP__
#define __PRINTTASKSTRAT_HPP__

#include "printstrat.hpp"

class PrintTaskStrat: public PrintStrat
{
public:
        PrintTaskStrat();
        void printPriority(TaskTemplate* t);
	void printDuration(TaskTemplate* t);
	void printDate(TaskTemplate* t);
}; //Print all tasks in list

#endif

#ifndef __PRINTLISTSTRAT_HPP__
#define __PRINTLISTSTRAT_HPP__

#include "printstrat.hpp"

class PrintListStrat: public PrintStrat
{
public:
        PrintListStrat();
        void printPriority(TaskTemplate* t);
	void printDuration(TaskTemplate* t);
}; //Print all tasks in order in all lists

#endif

#ifndef __PRINTLISTSTRAT_HPP__
#define __PRINTLISTSTRAT_HPP__

#include "printstrat.hpp"

class PrintListStrat: public PrintStrat
{
public:
        PrintListStrat();
        void printPriority(ListsComposite* t);
	void printDuration(ListsComposite* t);
}; //Print all tasks in order in all lists

#endif

#ifndef __PRINTSTRAT_HPP__
#define __PRINTSTRAT_HPP__

#include "tasktemplate.hpp"

class PrintStrat
{
public:
	static bool comparatorID(TaskTemplate* lhs, TaskTemplate* rhs) {
		return lhs->getID() < rhs->getID();
        }
        static bool comparatorDuration(TaskTemplate* lhs, TaskTemplate* rhs) {
                return lhs->getDuration() < rhs->getDuration();
        }
        virtual ~PrintStrat() = default;
        virtual void printPriority(TaskTemplate* t) = 0;
	virtual void printDuration(TaskTemplate* t) = 0;
};

#endif

#ifndef __PRINTSTRAT_HPP__
#define __PRINTSTRAT_HPP__

#include "listscomposite.hpp"

class PrintStrat
{
public:
	static bool comparatorID(TasksComposite* lhs, TasksComposite* rhs) {
		return lhs->getID() < rhs->getID();
        }
        static bool comparatorDuration(TasksComposite* lhs, TasksComposite* rhs) {
                return lhs->getDuration() < rhs->getDuration();
        }
        virtual ~PrintStrat() = default;
        virtual void printPriority(ListsComposite* t) = 0;
	virtual void printDuration(ListsComposite* t) = 0;
};

#endif

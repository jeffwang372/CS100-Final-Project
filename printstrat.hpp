#ifndef __PRINTSTRAT_HPP__
#define __PRINTSTRAT_HPP__

#include "tasktemplate.hpp"

class PrintStrat
{
public:
        static bool comparatorDuration(TaskTemplate* lhs, TaskTemplate* rhs) {
                return lhs->getDuration() < rhs->getDuration();
        }
        static bool comparatorDate(TaskTemplate* lhs, TaskTemplate* rhs) {
		string s1 = lhs->getDate();
		string s2 = rhs->getDate();
		std::string::size_type sz1;
		std::string::size_type sz2;
		double a1 = std::stod(s1, &sz1); //lhs month
		double a2 = std::stod(s1.substr(sz1 + 1)); //lhs day
		double b1 = std::stod(s2, &sz2); //rhs month
		double b2 = std::stod(s2.substr(sz2 + 1)); //rhs day
		if (a1 != b1) { return a1 < b1; }
		return a2 < b2;
        }
        virtual ~PrintStrat() = default;
        virtual void printPriority(TaskTemplate* t) = 0;
	virtual void printDuration(TaskTemplate* t) = 0;
	virtual void printDate(TaskTemplate* t) = 0;
};

#endif

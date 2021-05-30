#ifndef __PRINTTASKSTRAT_HPP__
#define __PRINTTASKSTRAT_HPP__

class PrintTaskStrat: public PrintStrat
{
public:
        PrintTaskStrat();
        void printPriority(ListsComposite* t);
}; //Print all tasks in list

#endif

#ifndef __PRINTLISTSTRAT_HPP__
#define __PRINTLISTSTRAT_HPP__

class PrintListStrat: public PrintStrat
{
public:
        PrintListStrat();
        void printPriority(ListsComposite* t);
}; //Print all tasks in order in all lists

#endif

#ifndef __PRINTSTRAT_HPP__
#define __PRINTSTRAT_HPP__

class PrintStrat
{
public:
        virtual ~PrintStrat() = default;
        virtual void printPriority(ListsComposite* t) = 0;
};

#endif

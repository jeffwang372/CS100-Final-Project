#include <iostream>
#include "printliststrat.hpp"

PrintListStrat::PrintListStrat() {}

void PrintListStrat::printPriority(ListsComposite* t) {
        std::cout << t->getTitle() << std::endl;
        for (int i = 0; i < t->taskChildren.size(); ++i) {
                std::cout << "\t" << t->getID() << ": " << t->getSubject() << "due " << t->getTime() << ", " << t->getDate();
                std::cout << std::endl << "\t\t" << "Duration: " << t->getDuration() << " hours";
                std::cout << std::endl << "\t\t" << "Location: " << t->getLocation();
                std::cout << std::endl << "\t\t" << "Body: " << t->getBody() << std::endl;
        }
}

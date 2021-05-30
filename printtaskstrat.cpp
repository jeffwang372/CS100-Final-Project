#include <iostream>
#include "printtaskstrat.hpp"

PrintTaskStrat::PrintTaskStrat() {}

void PrintTaskStrat::printPriority(ListsComposite* t) {
	std::cout << t->getTitle() << std::endl;
	for (int i = 0; i < t->taskChildren.size(); ++i) {
		std::cout << t->getID() << ": " << t->getSubject() << "due " << t->getTime() << ", " << t->getDate();
		std::cout << std::endl << "\t" << "Duration: " << t->getDuration() << " hours";
		std::cout << std::endl << "\t" << "Location: " << t->getLocation();
		std::cout << std::endl << "\t" << "Body: " << t->getBody() << std::endl;
	}
}

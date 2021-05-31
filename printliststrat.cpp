#include <iostream>
#include<algorithm>
#include<vector>

#include "printliststrat.hpp"

PrintListStrat::PrintListStrat() {}

void PrintListStrat::printPriority(ListsComposite* t) {
        sort(t->taskChildren.begin(), t->taskChildren.end(), comparatorID);
        std::cout << t->getTitle() << std::endl;
        for (int i = 0; i < t->taskChildren.size(); ++i) {
                std::cout << "\t" << t->taskChildren.at(i)->getID() << ": " << t->taskChildren.at(i)->getSubject() << "due " << t->taskChildren.at(i)->getTime() << ", " << t->taskChildren.at(i)->getDate();
                std::cout << std::endl << "\t\t" << "Duration: " << t->taskChildren.at(i)->getDuration() << " hours";
                std::cout << std::endl << "\t\t" << "Location: " << t->taskChildren.at(i)->getLocation();
                std::cout << std::endl << "\t\t" << "Body: " << t->taskChildren.at(i)->getBody() << std::endl;
        }
}

void PrintListStrat::printDuration(ListsComposite* t) {
	sort(t->taskChildren.begin(), t->taskChildren.end(), comparatorDuration);
        std::cout << t->getTitle() << std::endl;
        for (int i = 0; i < t->taskChildren.size(); ++i) {
                std::cout << "\t" << t->taskChildren.at(i)->getID() << ": " << t->taskChildren.at(i)->getSubject() << "due " << t->taskChildren.at(i)->getTime() << ", " << t->taskChildren.at(i)->getDate();
                std::cout << std::endl << "\t\t" << "Duration: " << t->taskChildren.at(i)->getDuration() << " hours";
                std::cout << std::endl << "\t\t" << "Location: " << t->taskChildren.at(i)->getLocation();
                std::cout << std::endl << "\t\t" << "Body: " << t->taskChildren.at(i)->getBody() << std::endl;
        }
}

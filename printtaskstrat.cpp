#include <iostream>
#include<algorithm>
#include<vector>

#include "printtaskstrat.hpp"

PrintTaskStrat::PrintTaskStrat() {}

void PrintTaskStrat::printPriority(TaskTemplate* t) {
	vector<TaskTemplate*> v = t->getTasks();
       	sort(v.begin(), v.end(), comparatorID);
	std::cout << t->getTitle() << std::endl;
	for (int i = 0; i < v.size(); ++i) {
		std::cout << v.at(i)->getID() << ": " << v.at(i)->getSubject() << "due " << v.at(i)->getTime() << ", " << v.at(i)->getDate();
		std::cout << std::endl << "\t" << "Duration: " << v.at(i)->getDuration() << " hours";
		std::cout << std::endl << "\t" << "Location: " << v.at(i)->getLocation();
		std::cout << std::endl << "\t" << "Body: " << v.at(i)->getBody() << std::endl;
	}
}

void PrintTaskStrat::printDuration(TaskTemplate* t) {
        vector<TaskTemplate*> v = t->getTasks();
        sort(v.begin(), v.end(), comparatorDuration);
        std::cout << t->getTitle() << std::endl;
        for (int i = 0; i < v.size(); ++i) {
                std::cout << v.at(i)->getID() << ": " << v.at(i)->getSubject() << "due " << v.at(i)->getTime() << ", " << v.at(i)->getDate();
                std::cout << std::endl << "\t" << "Duration: " << v.at(i)->getDuration() << " hours";
                std::cout << std::endl << "\t" << "Location: " << v.at(i)->getLocation();
                std::cout << std::endl << "\t" << "Body: " << v.at(i)->getBody() << std::endl;
        }
}

void PrintTaskStrat::printDate(TaskTemplate* t) {
        vector<TaskTemplate*> v = t->getTasks();
        sort(v.begin(), v.end(), comparatorMonth);
        sort(v.begin(), v.end(), comparatorDay);
        std::cout << t->getTitle() << std::endl;
        for (int i = 0; i < v.size(); ++i) {
                std::cout << v.at(i)->getID() << ": " << v.at(i)->getSubject() << "due " << v.at(i)->getTime() << ", " << v.at(i)->getDate();
                std::cout << std::endl << "\t" << "Duration: " << v.at(i)->getDuration() << " hours";
                std::cout << std::endl << "\t" << "Location: " << v.at(i)->getLocation();
                std::cout << std::endl << "\t" << "Body: " << v.at(i)->getBody() << std::endl;
        }
}

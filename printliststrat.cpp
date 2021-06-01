#include <iostream>
#include<algorithm>
#include<vector>

#include "printliststrat.hpp"

PrintListStrat::PrintListStrat() {}

void PrintListStrat::printPriority(TaskTemplate* t) {
	vector<TaskTemplate*> v = t->getTasks();
        for (int i = 0; i < v.size(); ++i) {
                std::cout << "\t" << v.at(i)->getID() << ": " << v.at(i)->getSubject() << " due " << v.at(i)->getTime() << ", " << v.at(i)->getDate();
                std::cout << std::endl << "\t\t" << "Duration: " << v.at(i)->getDuration() << " minutes";
                std::cout << std::endl << "\t\t" << "Location: " << v.at(i)->getLocation();
                std::cout << std::endl << "\t\t" << "Body: " << v.at(i)->getBody() << std::endl;
        }
}

void PrintListStrat::printDuration(TaskTemplate* t) {
        vector<TaskTemplate*> v = t->getTasks();
        sort(v.begin(), v.end(), comparatorDuration);
        for (int i = 0; i < v.size(); ++i) {
                std::cout << "\t" << v.at(i)->getID() << ": " << v.at(i)->getSubject() << " due " << v.at(i)->getTime() << ", " << v.at(i)->getDate();
                std::cout << std::endl << "\t\t" << "Duration: " << v.at(i)->getDuration() << " minutes";
                std::cout << std::endl << "\t\t" << "Location: " << v.at(i)->getLocation();
                std::cout << std::endl << "\t\t" << "Body: " << v.at(i)->getBody() << std::endl;
        }
}

void PrintListStrat::printDate(TaskTemplate* t) {
        vector<TaskTemplate*> v = t->getTasks();
        sort(v.begin(), v.end(), comparatorDate);
        for (int i = 0; i < v.size(); ++i) {
                std::cout << "\t" << v.at(i)->getID() << ": " << v.at(i)->getSubject() << " due " << v.at(i)->getTime() << ", " << v.at(i)->getDate();
                std::cout << std::endl << "\t\t" << "Duration: " << v.at(i)->getDuration() << " minutes";
                std::cout << std::endl << "\t\t" << "Location: " << v.at(i)->getLocation();
                std::cout << std::endl << "\t\t" << "Body: " << v.at(i)->getBody() << std::endl;
        }
}

#ifndef __MENU_HPP__
#define __MENU_HPP__

#include <string>
#include <vector>
#include "tasktemplate.hpp"
#include "taskscomposite.hpp"
#include "listscomposite.hpp"


class Menu {
    public:
	PrintStrat* printStrat;
        std::string prompt;
        std::string userInput;
        vector<TaskTemplate*> Lists;
	
	~Menu();
        Menu() {}
        void createList();
        void removeList();
        void createTask();
        void deleteTask();

        void displayMenu();
        void displayPriority();
        void displayDate();
        void displayDuration();

	void set_strategy(PrintStrat* s);
	void printByPriority(std::ostream& out) const;
};

#endif

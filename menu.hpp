#ifndef __MENU_HPP__
#define __MENU_HPP__

#include <string>
#include <vector>
#include "tasktemplate.hpp"
#include "taskscomposite.hpp"
#include "listscomposite.hpp"
#include "printstrat.hpp"
#include "printtaskstrat.hpp"
#include "printliststrat.hpp"

class Menu {
    public:
	PrintStrat* printStrat;
        std::string prompt;
        std::string userInput;
        vector<TaskTemplate*> Lists;
	
	~Menu();
        Menu() { printStrat = nullptr; }
        void createList();
        void removeList();
        void createTask();
        void deleteTask();

        void displayMenu();
        void displayPriority();
        void displayDate();
        void displayDuration();

	void set_strategy(PrintStrat* s);
	void printByPriority(std::ostream& out);
	void printByDuration(std::ostream& out);
	void printByDate(std::ostream& out);
};

#endif

#ifndef __MENU_HPP__
#define __MENU_HPP__

#include <string>
#include <vector>
#include "tasktemplate.hpp"
#include "taskscomposite.hpp"
#include "listscomposite.hpp"


class Menu {
    public:
        std::string prompt;
        std::string userInput;
        vector<TaskTemplate*> Lists;

        Menu() {}
        void createList();
        void removeList();
        void addTask();
        void removeTask();

        void displayMenu();
        void displayPriority();
        void displayDate();
        void displayDuration();
};

#endif

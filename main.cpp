#include <iostream>

using namespace std;

#include "menu.hpp"



int main() {
    Menu taskMenu = Menu();

    while (taskMenu.userInput != "q") {
        taskMenu.displayMenu();
        cin >> taskMenu.userInput;

        while (taskMenu.userInput != "a" &&
               taskMenu.userInput != "b" &&
               taskMenu.userInput != "c" &&
               taskMenu.userInput != "d" &&
               taskMenu.userInput != "e" &&
               taskMenu.userInput != "f" &&
               taskMenu.userInput != "g" &&
               taskMenu.userInput != "q") {
            cout << "Invalid input" << endl;
            cout << taskMenu.prompt;
            cin >> taskMenu.userInput;
        }
	if (taskMenu.userInput == "c") {
		taskMenu.addTask();
	}//user selected to create task

	if(taskMenu.userInput == "a") {

		taskMenu.createList();

	}//user created new list
    }

    return 0;
}

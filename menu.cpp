#include "menu.hpp"

#include <iostream>
using namespace std;

void Menu::displayMenu() {
    cout << "Task Menu" << endl;
    cout << "\ta - Create list" << endl;
    cout << "\tb - Remove list" << endl;
    cout << "\tc - Add task" << endl;
    cout << "\td - Remove task" << endl;
    cout << "\te - Display by priority" << endl;
    cout << "\tf - Display by date" << endl;
    cout << "\tg - Display by duration" << endl;
    cout << "\tq - Quit" << endl;
    prompt = "Enter choice: ";
    cout << prompt;
}

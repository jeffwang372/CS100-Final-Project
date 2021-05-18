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

void Menu::addTask() {
	int listID;
	string time;
        string date;
        string duration;
        string location;
        string subject;
        string body; 
	int ID = 0; //TODO: figure out how to generate unique IDs for each task
	
	cout << "Enter list ID to add task to: ";
	cin >> listID; //TODO: figure out how to push task into list
	cout << "Enter time: ";
	cin >> time;
	cout << "Enter date: ";
	cin >> date;
	cout << "Enter duration: ";
        cin >> duration;
        cout << "Enter location: ";
        cin >> location;
	cout << "Enter subject: ";
        cin >> subject;
        cout << "Enter body: ";
        cin >> body;
	TasksComposite task1(time, date, duration, location, subject, body, ID);
}


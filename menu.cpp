#include "menu.hpp"
#include <iostream>
using namespace std;


int listID = 1; // varaible to assign eash list a unique ID
int taskID = 1; // variable to assign each task a unique ID

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
	int listInput;
	string time;
        string date;
        string duration;
        string location;
        string subject;
        string body; 

	cout << "Enter list ID to add task to: ";
	cin >> listInput; //TODO: figure out how to push task into list
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
	TasksComposite task1(time, date, duration, location, subject, body, taskID);
	++taskID; //increment ID 


	for ( unsigned int i = 0;  i < Lists.size(); ++i ){

		if(Lists.at(i)->getID() == listInput ) {
			Lists.at(i)->addTask(); //TODO: complete addTask to put task into LIST

		}//list ID found so add task to the list

	}//end for to iterate to lists in menu to add task to specific list 


}//end add Task 


void Menu::createList(){

	string title;

	cout << "Enter title for list: ";
	cin >> title;
	ListsComposite* newList = new ListsComposite (title, listID);
	++listID;
	cout << "New LIST ID GLOBAL: " << listID << endl;

	Lists.push_back(newList);

	





}//end createList


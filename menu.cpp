#include "menu.hpp"
#include <iostream>
using namespace std;


Menu::~Menu() {
	for ( unsigned int i = 0;  i < Lists.size(); ++i ){

                        delete Lists.at(i);
                        //Lists.erase(Lists.begin());
                        
        }//end for to iterate to lists in menu to add task to specific list
              Lists.clear();
                       
}

int listID = 0; // varaible to assign eash list a unique ID
int taskID = 0; // variable to assign each task a unique ID

void Menu::displayMenu() {
    cout << "Task Menu" << endl;
    cout << "\ta - Create list" << endl;
    cout << "\tb - Remove list" << endl;
    cout << "\tc - Create task" << endl;
    cout << "\td - Delete task" << endl;
    cout << "\te - Display by priority" << endl;
    cout << "\tf - Display by date" << endl;
    cout << "\tg - Display by duration" << endl;
    cout << "\tq - Quit" << endl;
    prompt = "Enter choice: ";
    cout << prompt;
}

void Menu::createTask() {
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
	TasksComposite* task1 = new TasksComposite(time, date, duration, location, subject, body, taskID);
	
	
	++taskID; //increment ID 


	for ( unsigned int i = 0;  i < Lists.size(); ++i ){

		if(Lists.at(i)->getID() == listInput ) {
			cout << "Pushing task to list" << endl;
			Lists.at(i)->addTask(task1); //TODO: complete addTask to put task into LIST

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



void Menu::deleteTask(){
	
	int listRemoveID;
	int taskRemoveID;

	cout << "Enter list ID to remove task from: " ;
	cin >> listRemoveID;
	cout << endl << "Enter task ID to remove: " ;
	cin >> taskRemoveID; 
 	cout << endl;

	      for ( unsigned int i = 0;  i < Lists.size(); ++i ){

                if(Lists.at(i)->getID() == listRemoveID ) {
                        Lists.at(i)->removeTask(taskRemoveID); 

                }//list ID found so remove task to the list

        }//end for to iterate to lists in menu to remove task to specific list

}//remove task from certain list


void Menu::removeList() {
	int indexRemove;

	cout << "Enter ID of list to be removed: ";
	cin >> indexRemove;
	cout << endl;


	 for ( unsigned int i = 0;  i < Lists.size(); ++i ){

                if(Lists.at(i)->getID() == indexRemove) {
                        Lists.at(i)->removeAllTasks();
			delete Lists.at(i);
			Lists.erase(Lists.begin() + i);
			cout << "Successfully deleted list" << endl;

                }
	}	
}

void Menu::set_strategy(PrintStrat* s) {
        if (printStrat != nullptr) {
                delete this->printStrat;
        }
        this->printStrat = s;
}

void Menu::printByPriority(std::ostream& out) const {
	if (!Lists.empty()) {
		for (int i = 0; i < Lists.size(); ++i) {
			std::cout << Lists.at(i)->getID() << ": " << Lists.at(i)->getTitle() << std::endl;
			printStrat->printPriority(Lists.at(i));
		}
	}
	else {
		std::cout << "No lists left." << std::endl;
	}	
}

//void Menu::printByDate(std::ostream& out) const
//void Menu::printByDuration(std::ostream& out) const



















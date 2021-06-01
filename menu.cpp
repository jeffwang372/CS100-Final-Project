#include "menu.hpp"
#include <iostream>
using namespace std;


Menu::~Menu() {
	for ( unsigned int i = 0;  i < Lists.size(); ++i ){

                        delete Lists.at(i);
                        
                        
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
        double duration;
        string location;
        string subject;
        string body; 

	cout << "Enter list ID to add task to: ";
	
	while (!(cin >> listInput)) {
       		 cin.clear();
       		 while (cin.get() != '\n') continue;
      		  cout << "Invalid ID! " << endl;
   		cout << "Enter list ID to add task to: "; 
	}
	 


	for ( unsigned int i = 0;  i < Lists.size(); ++i ){

		if(Lists.at(i)->getID() == listInput ) {
			cout << "Enter time: ";
			getline(cin, time);
			getline(cin, time);
		        cout << "Enter date in format mm/dd (Example: March 2nd is 3/2): ";
		        getline(cin, date);
		        cout << "Enter duration in number of minutes: ";
		        
			while (!(cin >> duration)) {
               			  cin.clear();
               			  while (cin.get() != '\n') continue;
               			   cout << "Invalid duration! " << endl;
				cout << "Enter duration in number of minutes: ";
		         }
		

			cout << "Enter location: ";
		        getline(cin, location);
			getline(cin, location);
		        cout << "Enter subject: ";
		        getline(cin, subject);
		        cout << "Enter body: ";
       			getline(cin, body);
			cout << "New task created with ID: " << taskID << endl;
		        TasksComposite* task1 = new TasksComposite(time, date, duration, location, subject, body, taskID);
		
			++taskID; //increment ID
			
			Lists.at(i)->addTask(task1);
			cout << "Successfully added task to list." << endl;
			return;
		}//list ID found so add task to the list

	}//end for to iterate to lists in menu to add task to specific list 
cout << "Invalid list ID." << endl;
return;
}//end add Task 


void Menu::createList(){

	string title;

	cout << "Enter title for list: ";
	getline(cin, title);
	getline(cin, title);
	
	ListsComposite* newList = new ListsComposite(title, listID);
	++listID;

	Lists.push_back(newList);


}//end createList



void Menu::deleteTask(){
	
	int listRemoveID;
	int taskRemoveID;

	cout << "Enter list ID to remove task from: " ;

	while (!(cin >> listRemoveID)) {
                 cin.clear();
                 while (cin.get() != '\n') continue;
                  cout << "Invalid list ID! " << endl;
                cout << "Enter list ID to remove task from: ";
        }


	cout << endl << "Enter task ID to remove: " ;
 	
	while (!(cin >> taskRemoveID)) {
                 cin.clear();
                 while (cin.get() != '\n') continue;
                  cout << "Invalid task ID! " << endl;
                cout << "Enter task ID to remove: ";
        }

	
	cout << endl;



	      for ( unsigned int i = 0;  i < Lists.size(); ++i ){

                if(Lists.at(i)->getID() == listRemoveID ) {
                        Lists.at(i)->removeTask(taskRemoveID);
			return; 

                }//list ID found so remove task to the list

        }//end for to iterate to lists in menu to remove task to specific list
cout << "List ID to remove task from not found." << endl;
return;
}//remove task from certain list


void Menu::removeList() {
	int indexRemove;

	cout << "Enter ID of list to be removed: ";
	while (!(cin >> indexRemove)) {
                 cin.clear();
                 while (cin.get() != '\n') continue;
                  cout << "Invalid list ID! " << endl;
                cout << "Enter ID of list to be removed: ";
        }


	cout << endl;


	 for ( unsigned int i = 0;  i < Lists.size(); ++i ){

                if(Lists.at(i)->getID() == indexRemove) {
                        Lists.at(i)->removeAllTasks();
			delete Lists.at(i);
			Lists.erase(Lists.begin() + i);
			cout << "Successfully deleted list" << endl;
			return;
                }
	}
cout << "List ID to be removed not found." << endl;
return;	
}

void Menu::set_strategy(PrintStrat* s) {
        if (printStrat != nullptr) {
                delete this->printStrat;
        }
        this->printStrat = s;
}

void Menu::displayPriority() {
	char c;
	cout << "Display all lists? (Y/N): ";
	cin >> c;
	while (c != 'Y' && c != 'N') { 
		cout << "Display all lists? (Y/N): "; 
		cin >> c;
	}
	if (c == 'Y') {
		PrintStrat* ps = new PrintListStrat();				
		set_strategy(ps);
		printByPriority(std::cout);
                delete ps;
	}
	else {
        	int index;
		cout << "Enter ID of list to be displayed: ";
        	while (!(cin >> index)) {
                	cin.clear();
                	while (cin.get() != '\n') continue;
                  	cout << "Invalid list ID! " << endl;
                	cout << "Enter ID of list to be displayed: ";
        	}
		PrintStrat* ps = new PrintTaskStrat();
		for (unsigned int i = 0;  i < Lists.size(); ++i ) {
			if (Lists.at(i)->getID() == index) {
				Lists.at(i)->set_strategy(ps);
                                Lists.at(i)->printByPriority(std::cout);
                                delete ps;
                                return;
			}
		}
		delete ps;
		cout << "List ID not found." << endl;
	}
}

void Menu::displayDate() {
        char c;
        cout << "Display all lists? (Y/N)";
        cin >> c;
        while (c != 'Y' && c != 'N') {
                cout << "Display all lists? (Y/N)";
                cin >> c;
        }
        if (c == 'Y') {
                PrintStrat* ps = new PrintListStrat();
                set_strategy(ps);
                printByDate(std::cout);
		delete ps;
        }
        else {
                int index;
                cout << "Enter ID of list to be displayed: ";
                while (!(cin >> index)) {
                        cin.clear();
                        while (cin.get() != '\n') continue;
                        cout << "Invalid list ID! " << endl;
                        cout << "Enter ID of list to be displayed: ";
                }
                PrintStrat* ps = new PrintTaskStrat();
                for (unsigned int i = 0;  i < Lists.size(); ++i ) {
                        if (Lists.at(i)->getID() == index) {
				Lists.at(i)->set_strategy(ps);
                                Lists.at(i)->printByDate(std::cout);
                                delete ps;
				return;
                        }
                }
		delete ps;
                cout << "List ID not found." << endl;
        }
}

void Menu::displayDuration() {
        char c;
        cout << "Display all lists? (Y/N)";
        cin >> c;
        while (c != 'Y' && c != 'N') {
                cout << "Display all lists? (Y/N)";
                cin >> c;
        }
        if (c == 'Y') {
                PrintStrat* ps = new PrintListStrat();
                set_strategy(ps);
                printByDuration(std::cout);
                delete ps;
        }
        else {
                int index;
                cout << "Enter ID of list to be displayed: ";
                while (!(cin >> index)) {
                        cin.clear();
                        while (cin.get() != '\n') continue;
                        cout << "Invalid list ID! " << endl;
                        cout << "Enter ID of list to be displayed: ";
                }
                PrintStrat* ps = new PrintTaskStrat();
                for (unsigned int i = 0;  i < Lists.size(); ++i ) {
                        if (Lists.at(i)->getID() == index) {
				Lists.at(i)->set_strategy(ps);
                                Lists.at(i)->printByDuration(std::cout);
				delete ps;
                                return;
                        }
                }
		delete ps;
                cout << "List ID not found." << endl;
        }
}

void Menu::printByPriority(std::ostream& out) {
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

void Menu::printByDate(std::ostream& out) {
        if (!Lists.empty()) {
                for (int i = 0; i < Lists.size(); ++i) {
                        std::cout << Lists.at(i)->getID() << ": " << Lists.at(i)->getTitle() << std::endl;
                        printStrat->printDate(Lists.at(i));
                }
        }
        else {
                std::cout << "No lists left." << std::endl;
        }
}

void Menu::printByDuration(std::ostream& out) {
        if (!Lists.empty()) {
                for (int i = 0; i < Lists.size(); ++i) {
                        std::cout << Lists.at(i)->getID() << ": " << Lists.at(i)->getTitle() << std::endl;
                        printStrat->printDuration(Lists.at(i));
                }
        }
        else {
                std::cout << "No lists left." << std::endl;
        }
}

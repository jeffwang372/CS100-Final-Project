#include "listscomposite.hpp"
#include "printstrat.hpp"
#include <iostream>


ListsComposite::~ListsComposite() {
	for ( unsigned int i = 0;  i < taskChildren.size(); ++i ){

                        delete taskChildren.at(i);
                        
       }//end for to iterate to lists in menu to add task to specific list
        taskChildren.clear();
}

ListsComposite::ListsComposite(string title, int ID){

	this->title = title;
	this->ID = ID;
	this->printStrat = nullptr;
	cout << "New list created with ID: " << this->ID << endl;

}//end constructor 


string ListsComposite::getTitle(){
	return this->title;
}//getter 



void ListsComposite::addTask(TaskTemplate* newTask){

	taskChildren.push_back(newTask);


}//adds task to current list



void ListsComposite::removeTask(int removeID) {
	
	     for ( unsigned int i = 0;  i < taskChildren.size(); ++i ){

                if(taskChildren.at(i)->getID() == removeID ) {
			delete taskChildren.at(i);
			taskChildren.erase(taskChildren.begin() + i);
			cout << "Successfully removed task." << endl;
			return;
                }//list ID found so add task to the list

        }//end for to iterate to lists in menu to add task to specific list
	cout << "Task ID to be removed not found." << endl;
	return;

}//remove task from list

void ListsComposite::removeAllTasks() {
             for ( unsigned int i = 0;  i < taskChildren.size(); ++i ){
                        
                        delete taskChildren.at(i);

             }//end for to iterate to lists in menu to add task to specific list
		taskChildren.clear();
	
}

void ListsComposite::set_strategy(PrintStrat* s) {

        this->printStrat = s;
}

void ListsComposite::printByPriority(std::ostream& out) {
        if (!taskChildren.empty()) {
                printStrat->printPriority(this);
        }
        else {
                out << "No tasks left." << std::endl;
        }
}

void ListsComposite::printByDate(std::ostream& out) {
        if (!taskChildren.empty()) {
                printStrat->printDate(this);
        }
        else {
                out << "No tasks left." << std::endl;
        }
}

void ListsComposite::printByDuration(std::ostream& out) {
        if (!taskChildren.empty()) {
                printStrat->printDuration(this);
        }
        else {
                out << "No tasks left." << std::endl;
        }
}

string ListsComposite::getTime() { return ""; }
string ListsComposite::getLocation() { return ""; }
string ListsComposite::getSubject() { return ""; }
string ListsComposite::getBody() { return ""; }
string ListsComposite::getDate() { return ""; }
double ListsComposite::getDuration() { return 0; }
vector<TaskTemplate*> ListsComposite::getTasks() { return taskChildren;  }

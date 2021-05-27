#include "listscomposite.hpp"
#include <iostream>


ListsComposite::~ListsComposite() {
	for ( unsigned int i = 0;  i < taskChildren.size(); ++i ){

                        delete taskChildren.at(i);
                        //taskChildren.erase(taskChildren.begin());
                        
       }//end for to iterate to lists in menu to add task to specific list
        taskChildren.clear();
                        //
}

ListsComposite::ListsComposite(string title, int ID){

	this->title = title;
	this->ID = ID;
	cout << "Ayo the constructor worked" << endl;
	cout << "ID: " << this->ID << endl;

}//end constructor 


string ListsComposite::getTitle(){
	return this->title;
}//getter 



void ListsComposite::addTask(TaskTemplate* newTask){

	taskChildren.push_back(newTask);


}//adds task to current list



void ListsComposite::removeTask(int removeID) {
	
	cout << "Size of taskChildren BEFORE: " << taskChildren.size() << endl;
	     for ( unsigned int i = 0;  i < taskChildren.size(); ++i ){

                if(taskChildren.at(i)->getID() == removeID ) {
			cout << "ID being removed: " << taskChildren.at(i)->getID() << endl;
			delete taskChildren.at(i);
			taskChildren.erase(taskChildren.begin() + i);
                }//list ID found so add task to the list

        }//end for to iterate to lists in menu to add task to specific list
	cout << "Size of taskChildren vector AFTER: " << taskChildren.size() << endl;

}//remove task from list

void ListsComposite::removeAllTasks() {
	     cout << "Size of taskChildren BEFORE: " << taskChildren.size() << endl;
             for ( unsigned int i = 0;  i < taskChildren.size(); ++i ){
                        
                        delete taskChildren.at(i);
                        //taskChildren.erase(taskChildren.begin());

             }//end for to iterate to lists in menu to add task to specific list
		taskChildren.clear();
        cout << "Size of taskChildren vector AFTER: " << taskChildren.size() << endl;
	
}


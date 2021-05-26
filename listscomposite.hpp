#ifndef __listscomposite_HPP__
#define __listscomposite_HPP__

#include "tasktemplate.hpp"
#include "taskscomposite.hpp"



class  ListsComposite: public TaskTemplate {

	private:
		string title;
	public:

	vector<TaskTemplate*> taskChildren;

	ListsComposite(string title, int ID); //constructor
	
	string getTitle();
	
	void addTask(TaskTemplate* newTask);
	void removeTask(int removeID);
	





};//end class 





#endif

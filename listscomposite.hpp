#ifndef __listscomposite_HPP__
#define __listscomposite_HPP__

#include "tasktemplate.hpp"
#include "taskscomposite.hpp"

class PrintStrat;

class  ListsComposite: public TaskTemplate {

	private:
		PrintStrat* printStrat;
		string title;
	public:

	vector<TasksComposite*> taskChildren;

	~ListsComposite();
	ListsComposite(string title, int ID); //constructor
	
	string getTitle();
	
	void addTask(TasksComposite* newTask);
	void removeTask(int removeID);
	void removeAllTasks();	

	void set_strategy(PrintStrat* s);
	void printByPriority(std::ostream& out);
	void printByDuration(std::ostream& out);
};//end class 

#endif

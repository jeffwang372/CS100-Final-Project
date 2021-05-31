#ifndef __listscomposite_HPP__
#define __listscomposite_HPP__

#include "tasktemplate.hpp"
#include "taskscomposite.hpp"


class  ListsComposite: public TaskTemplate {

	private:
		string title;
	public:

	vector<TaskTemplate*> taskChildren;

	~ListsComposite();
	ListsComposite(string title, int ID); //constructor
	
	string getTitle();
	
	void addTask(TaskTemplate* newTask);
	void removeTask(int removeID);
	void removeAllTasks();	

	//void set_strategy(PrintStrat* s);
	//void printByPriority(std::ostream& out) const;

};//end class 

#endif

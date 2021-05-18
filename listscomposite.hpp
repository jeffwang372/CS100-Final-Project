#ifndef __listscomposite_HPP__
#define __listscomposite_HPP__

#include "tasktemplate.hpp"
#include "taskscomposite.hpp"



class  ListsComposite: public TaskTemplate {

	private:
		string title;
		vector<TaskTemplate*> allTasks;

	public:

	ListsComposite(string title, int ID); //constructor
	





};//end class 





#endif
